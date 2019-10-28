/* Filename: Lib.h
 * This library code defines the Headset board setup and IO functions.
 * Started on 10/16/19
 */

// Some Preprocessor Stuff
#ifndef Lib_h
#define Lib_h

//////// Global Constant Definitions ///////


/////////////// Library Interface Description //////////////
class Lib {
public:  // Public functions and variables available to Main.ino
	// Function Declarations
	void Blink(unsigned short);                     // Function to blink the LED
	void DistToTone(float*);                        // Function to output tones through each speaker given some distances
	void ReadDist(float*);                          // Function to read the distance from the two ultrasonic sensors
	void FiltUpdate(float*);                        // Function to update the filtered distances
	void Begin(void);                               // Function to initialize the MCU

	// Variable Declarations
	float RawDist[4];                               // Stores raw distances:: Format: [Past Left, Past Right, Current Left, Current Right]
	float FiltDist[2];                              // Stores the filtered distances:: Format: [Left Filtered, Right Filtered]

private: // Private functions and variables only available inside library
	float Temp; // Variable to hold a temporary value while swapping array elements

};
#endif