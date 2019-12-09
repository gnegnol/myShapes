#include "vec2.h"
#include <math.h>

vec2::vec2(int _x, int _y)
{
	x=_x;
	y=_y;
}
vec2::vec2()
{
	x=0;
	y=0;
}

void vec2::add(vec2 _adder)
{
	x +=_adder.getx();
	y +=_adder.gety();
}

void vec2::sub(vec2 _subber)
{
	x -=_subber.getx();
	y -=_subber.gety();
}
void vec2::mul(float _multi)
{
	x = x * _multi;
	y = y * _multi;
}

int vec2::getx()
{
	return x;
}

int vec2::gety()
{
	return y;
}

double vec2::getModule()
{
	return sqrt(x*(x*1.0) + y*(y*1.0));
}
