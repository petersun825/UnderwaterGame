Shader "Custom/MovingDottedLine" {
    Properties{
        _MainTex("Texture", 2D) = "white" {}
        _Speed("Speed", Range(0, 10)) = 1
    }
    SubShader{
        Pass{
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

            struct appdata {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct v2f {
                float2 uv : TEXCOORD0;
                float4 vertex : SV_POSITION;
            };

            sampler2D _MainTex;
            float _Speed;

            v2f vert(appdata v) {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                return o;
            }

            fixed4 frag(v2f i) : SV_Target {
                fixed4 col = tex2D(_MainTex, i.uv);
                col.a *= step(0.5, frac(_Time.y * _Speed + i.uv.x));
                return col;
            }
            ENDCG
        }
    }
}