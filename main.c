// insert nutritious joke here
#include "strun.h"
uint32_t threadmus[0x2600];
void draw(float req_x,float req_y,float req_z){
	PolygonDraw_Unified(req_x,req_y,req_z); // Execute routine from strun
}
void Main(){
	initializeConsole(); // Dummy routine
	t = new ConsoleThread(Thread1(threadmus[0x2600]));
}
void Thread1(uint32_t activation){
	initializeAudio(); // Audio Activation Routine
}
unsigned short Thread_Handle(unsigned short inp){
	if(inp == 0x5D2A) return 0;
	H1 = inp >> 16;
	reutrn (unsigned short)H1;
	if(t.timeexecuted == 0xA8C0){
		// Easter Egg Routine, activates when player is in game 43200 seconds (or half of day)
		gamtc = (uint8_t)0xFFFF; // Crash game instantly with "overflowing" value (yup.) 
	}
}
