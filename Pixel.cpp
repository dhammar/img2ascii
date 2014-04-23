#include "Pixel.hpp"

unsigned char r;
unsigned char g;
unsigned char b;
unsigned char x;


Pixel::Pixel(unsigned char r, unsigned char g, unsigned char b, unsigned char x)
{

	this.r = r;
	this.g = g;
	this.b = b;
	this.x = x;

}
// Default constructor for pixel, rgbx initialized to 0
Pixel::Pixel()
{
	this.r = 0;
	this.g = 0;
	this.b = 0;
	this.x = 0;
}

Pixel::~Pixel(){}

int Pixel::setR(unsigned int val)
{
	r = val;
	return 0;
}
int Pixel::setG(unsigned int val)
{
	g = val;
	return 0;
}
int Pixel::setB(unsigned int val)
{
	b = val;
	return 0;
}
int Pixel::setX(unsigned int val)
{
	x = val;
	return 0;
}



unsigned char Pixel::getR()
{
	return r;
} 
unsigned char Pixel::getG()
{
	return g;
}
unsigned char Pixel::getB()
{
	return b;
}
unsigned char Pixel::getX()
{
	return x;
}

