#ifndef PIXEL_HPP_
#define PIXEL_HPP_

class Pixel
{
	private:
		unsigned char r;
		unsigned char g;
		unsigned char b;
		unsigned char alpha;

	public:
		Pixel();
		Pixel(unsigned char r, unsigned char g, unsigned char b, unsigned char x);
		~Pixel();
		
		unsigned char getR(); 
		unsigned char getG();
		unsigned char getB();
		unsigned char getX();

		int setR(unsigned char val);
		int setG(unsigned char val);
		int setB(unsigned char val);
		int setX(unsigned char val);

};   
#endif
