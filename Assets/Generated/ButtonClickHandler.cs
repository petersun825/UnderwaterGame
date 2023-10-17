using UnityEngine;
using UnityEngine.UI;

public class ButtonClickHandler : MonoBehaviour
{
    // Reference to the APICall script component
    [Tooltip("APICall script reference")]
    public APICall apiCallScript;

    // Reference to the SquareAPICall script component
    [Tooltip("SquareAPICall script reference")]
    public SquareAPICall squareApiCallScript;

    // Reference to the "Button-Learn" button
    [Tooltip("'Button-Learn' button reference")]
    public Button learnButton;

    // Reference to the "Button-Donate" button
    [Tooltip("'Button-Donate' button reference")]
    public Button donateButton;

    private void Start()
    {
        // Add click event listener to the 'Button-Learn' button
        learnButton.onClick.AddListener(HandleLearnButtonClick);

        // Add click event listener to the 'Button-Donate' button
        donateButton.onClick.AddListener(HandleDonateButtonClick);
    }

    private void HandleLearnButtonClick()
    {
        // Call the OnButtonPress() method in APICall script when 'Button-Learn' is clicked
        apiCallScript.OnButtonPress();
    }

    private void HandleDonateButtonClick()
    {
        // Call the OnButtonPress() method in SquareAPICall script when 'Button-Donate' is clicked
        // Check if the method exists before calling it
        if (squareApiCallScript != null && squareApiCallScript.GetType().GetMethod("onButtonPress") != null)
        {
            squareApiCallScript.onButtonPress();
        }
        else
        {
            Debug.LogError("onButtonPress method not found in SquareAPICall script");
        }
    }
}