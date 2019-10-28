# Headset
This is the code for the 2019 EMBS Headset

File Descriptions:
Main.ino :: This contains the main code for the headset
Lib.h    :: This contains function declarations and the global pinmap
Lib.cpp  :: This contains the meat of the functions/modules used in Main.ino

Functions:
Blink      :: This function flashes the LED a certain number of times
DistToTone :: This function converts distances on each side to tones
ReadDist   :: This function reads the distance on each ultrasonic sensor
FiltUpdate :: This function updates the state of the filter
Begin      :: This function initializes the MCU 

Code Contributors:
Swagat, Cameron, Landon, Derek
