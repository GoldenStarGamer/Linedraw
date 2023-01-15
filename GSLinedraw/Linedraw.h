#pragma once
//This file is Linedraw Itself

#include <cmath>

class Linedraw
{	
	public:

		float Dist(float ax, float ay, float bx, float by /*For some god damn reason "1x, 1y, 2x, 2y" doesn't work,
															also i can't declare them outside the parameters*/		)
		{
			float x = bx - ax;
			float y = by - ay;
			float distance = sqrt(pow(x,2)+pow(y,2));
			return distance;
		}

};