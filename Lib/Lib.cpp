// These are the function declarations in the Headset library
#include "Lib.h"

//////////////// Library Constructor ////////////////////////
// This handles the initialization and setup of the library
Lib::Lib(void) {
	// Blank...
}
/////////////////////////////////////////////////////////////

// PUBLIC: Begin:: Performs initialization actions
void Lib::Begin(void)
{
	// Initialize the IO pins


	// Initialize global state variables


}

// PUBLIC: Blink:: Function to blink the LED	
void Lib::Blink(unsigned short)
{
	// Start loop

	// Turn on LED and Wait

	// Turn off LED and Wait

}

// PUBLIC: DistToTone:: Function to output tones through each speaker given distance readings.
void Lib::DistToTone(float*)
{
	// Map Distances to Frequencies

	// Set the output pins; Doing two speakers at once is tricky, so look here: https://forum.arduino.cc/index.php?topic=69079.0
}

// PUBLIC: ReadDist:: Reads the distance from two LV-MaxSonar EZ1 sensors wired in sequential read mode
void Lib::ReadDist(float*)
{
	// Query the sensors and wait ~50 ms

	// Read from the left sensor, take timestamp, and wait ~50 ms

	// Read from the right sensor and take timestamp

	// Modify the distance and timestamp arrays

}

// PUBLIC: FiltUpdate:: Updates the filtered distances using an exponential moving average filter
void FiltUpdate(float*)
{
	// Update left filter


	// Update right filter


}