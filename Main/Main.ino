// This is the main code for the ATMega chip in the headset

// Import our libraries
#include "Lib.h"

// Instantiate some variables and constants
Lib lib;            // Create a new instance of the BoardLib class

// Initialize (Will only run once)
void setup() {
	// Lets call the library initializer and blink the LED once
	lib.Begin();
	lib.Blink(1);
}

// Run the main code (Loops over and over)
void loop() {
	// Update the distance reading

	// Update the filter state

	// Change the output tone

}
