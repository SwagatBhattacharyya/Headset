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
public:  // Public functions available to Main.ino
	void Blink(unsigned short);
	void Tone(int, int);
	void ReadDist(void);
	void FiltUpdate(void);

private: // Private functions and variables only available inside library
	float Temp; // Variable to hold a temporary value while swapping array elements

};
#endif