#pragma once

class vec2{
	int x;
	int y;

public:

	vec2(int, int);
	vec2();

	void add(vec2);
	void sub(vec2);
	void mul(float);

	int getx();
	int gety();
	double getModule();
};