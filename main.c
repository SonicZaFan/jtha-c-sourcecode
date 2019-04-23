// Poland Entertaitodlfghiotment console
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