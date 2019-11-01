/* Filename: Lib.h
 * This library code defines the Headset board setup and IO functions.
 * Started on 10/16/19
 */

// Some Preprocessor Stuff
#ifndef Lib_h
#define Lib_h

//////// Global Constant Definitions ///////
// Pin Mapping
#define UltrasonicTrigger 15  // Will be connected to the RX pin of the left ultrasonic sensor -> Pull HIGH for at least 20 uS to trigger
#define LeftUltrasonic    A2  // Analog pin connected to the left ultrasonic sensor output    
#define RightUltrasonic   A3  // Analog pin connected to the right ultrasonic sensor output
#define RightSpeaker      5   // PWM pin to control the frequency on the right speaker
#define LeftSpeaker       6   // PWM pin to control the frequency on the left speaker
#define LEDPin            3   // PWM pin to control the brightness of the LED 
#define PushButton        7   // Input from the pushbutton -> Push button is pressed when this pin is LOW

// Constants
#define FlashDelay        500 // The time between high and low states of the LED
#define DebounceDelay     50  // The time between interval used to debounce the switch
#define EMA_Alpha         0.5 // The weight for our exponential moving average filter. Note: Must be in open interval (0,1). Higher value means filter forgets past values faster 

/////////////// Library Interface Description //////////////
class Lib {
public:  // Public functions and variables available to Main.ino
	// Function Declarations
	void Blink(unsigned short);                     // Function to blink the LED
	void DistToTone(float*);                        // Function to output tones through each speaker given some distances
	void ReadDist(float*);                          // Function to read the distance from the two ultrasonic sensors
	void FiltUpdate(float*);                        // Function to update the filtered distances
	void Begin(void);                               // Function to initialize the MCU
	bool ReadButton(void);                          // Function to read the state of the push button (1 when button pressed)

	// Variable Declarations
	float RawDist[4];                               // Stores raw distances:: Format: [Past Left, Past Right, Current Left, Current Right]
	float FiltDist[2];                              // Stores the filtered distances:: Format: [Left Filtered, Right Filtered]

private: // Private functions and variables only available inside library
	float Temp;                                     // Variable to hold a temporary value while swapping array elements
	bool  State;                                    // Variable to store the state of the push button
};
#endif