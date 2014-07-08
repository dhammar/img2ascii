#include <stdio.h>
#include <string.h>

/**
*	Image.hpp
*	Contains classes for storing simp image information and pixel info
*
*	Written by: Dave Hammarstedt - ddh@iastate.edu
*/

class Pixel
{
protected:
	unsigned char r, g, b, a;
public:
	Pixel();
	Pixel(unsigned char R, unsigned char G, unsigned char B, unsigned char A);
	~Pixel();
	unsigned char getR();
	unsigned char getG();
	unsigned char getB();
	unsigned char getA();
	int setR(unsigned char R);
	int setG(unsigned char G);
	int setB(unsigned char B);
	int setA(unsigned char A);
};


class Image
{
protected:
	int w;
	int h;
public:
	Pixel** imgArr;
	Image(int W, int H);
	Image duplicateArea(int w1, int h1, int w2, int h2);
	~Image();
	Pixel getPixel(int W, int H);
	int getW();
	int getH();
};

class Chunk : public Image
{
protected:
	char c;
	int sat;
public:
	int getSat();
	char getChar();
	int setSat(int s);
	char setChar(char ch);
};

class ChunkArr
{
protected:
	int w;
	int h;
	int chunkW;
	int chunkH;
	Chunk** chunkArr;

public:
	ChunkArr();
	ChunkArr(int w, Image img);
	~ChunkArr();
	Chunk getChunkAt(int w, int h);
	char getCharAt(int w, int h);
	int getArrW();
	int getArrH();
};

