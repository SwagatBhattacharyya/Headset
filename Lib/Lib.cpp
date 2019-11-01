// These are the function declarations in the Headset library
#include "Lib.h"

//////////////// Library Constructor ////////////////////////
// This handles the initialization and setup of the library
Lib::Lib(void) {
	// Blank...
}
/////////////////////////////////////////////////////////////

// PUBLIC: Begin:: Performs initialization actions
void Lib::Begin(float RawDist[], float FiltDist[])
{
	// Initialize the IO pins
	pinMode(UltrasonicTrigger, OUTPUT); digitalWrite(UltrasonicTrigger, LOW);
	pinMode(LeftUltrasonic, INPUT); pinMode(RightUltrasonic, INPUT);
	pinMode(RightSpeaker, OUTPUT); digitalWrite(RightSpeaker, LOW);
	pinMode(LeftSpeaker, OUTPUT); digitalWrite(LeftSpeaker, LOW);
	pinMode(LEDPin, OUTPUT); digitalWrite(LEDPin, LOW);
	pinMode(PushButton, INPUT);

	// Initialize global state variables
	for (byte i = 0; i < 4; i++) {
		RawDist[i] = 0.0;
	}
	for (byte i = 0; i < 2; i++) {
		FiltDist[i] = 0.0;
	}
}

// PUBLIC: Blink:: Function to blink the LED	
void Lib::Blink(byte Loops)
{
	// Start loop
	for (byte i = 0; i < Loops; i++) {
		// Turn on LED and Wait
		digitalWrite(LEDPin, HIGH);
		delay(FlashDelay);

		// Turn off LED and Wait
		digitalWrite(LEDPin, LOW);
		delay(FlashDelay);
	}
}

// PUBLIC: DistToTone:: Function to output tones through each speaker given distance readings.
void Lib::DistToTone(float FiltDist[])
{
	// Map Distances to Frequencies

	// Set the output pins; Doing two speakers at once is tricky, so look here: https://forum.arduino.cc/index.php?topic=69079.0
}

// PUBLIC: ReadDist:: Reads the distance from two LV-MaxSonar EZ1 sensors wired in sequential read mode
void Lib::ReadDist(float RawDist[])
{
	// Query the sensors and wait ~50 ms


	// Read from the left sensor (Analog Pin), take timestamp, and wait ~50 ms


	// Read from the right sensor (Analog Pin) and take timestamp


	// Modify the distance and timestamp arrays

}

// PUBLIC: FiltUpdate:: Updates the filtered distances using an exponential moving average filter
void Lib::FiltUpdate(float RawDist[], float FiltDist[])
{
	for (byte i = 0; i < 2; i++) {
		// Compute filter update
		Temp = EMA_Alpha * RawDist[i] + (1.0 - EMA_Alpha)*FiltDist[i];

		// Assign filter update
		FiltDist[i] = Temp;
	}
}

// PUBLIC: ReadButton:: Reads the state of the button
bool Lib::ReadButton(void)
{
	// This will return true when the button is pressed (when the button pin is low)
	if (digitalRead(Push_1)) {      // If pin is pulled high...
		State = false;              // Then  the switch has been pressed
	}else {                         // Otherwise...
		State = true;               // The switch has not been pressed
	}
	delay(DebounceDelay);           // Wait a bit to avoid multiple false presses
	return State;
}