#ifndef STRUN_H
#define STRUN_H

float normalize(float x,float y,float z) { return std::sqrt(x*x+y*y+z*z);	}
float PolygonDraw_Unified(uint8_t tri_x, uint8_t tri_y, uint8_t tri_z, uint8_t ftype){ return normalize(tri_x,tri_y,tri_z); }
#endif