#include "Time.h"
extern Time c_time;

void t_update() {
	c_time.s++;
	if (c_time.s == 60)
	{
		c_time.s = 0;
		c_time.m++;
		if (c_time.m == 60)
		{
			c_time.m = 0;
			c_time.h++;
			if (c_time.h = 24)
				c_time.h = 0;
		}
	}
	
}