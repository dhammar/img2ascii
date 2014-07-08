#include "Image.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

Pixel::Pixel()
{
	this->r = 0;
	this->g = 0;
	this->b = 0;
	this->a = 0;
}

Pixel::~Pixel()
{

}

Pixel::Pixel(unsigned char R, unsigned char G, unsigned char B, unsigned char A)
{
	this->r = R;
	this->g = G;
	this->b = B;
	this->a = A;
}

unsigned char Pixel::getR()
{
	return this->r;
}

unsigned char Pixel::getG()
{
	return this->g;
}

unsigned char Pixel::getB()
{
	return this->b;
}

unsigned char Pixel::getA()
{
	return this->a;
}

int Pixel::setR(unsigned char R)
{
	this->r = R;
	return 1;
}
int Pixel::setG(unsigned char G)
{
	this->g = G;
	return 1;
}
int Pixel::setB(unsigned char B)
{
	this->b = B;
	return 1;
}
int Pixel::setA(unsigned char A)
{
	this->a = A;
	return 1;
}

/*         end pixel code           */
Image::Image(int W, int H)
{
	this->w = W;
	this->h = H;
	for (int i = 0; i < H; i++)
	{
		for (int x = 0; x < W; x++)
		{
			imgArr[i][x] = Pixel();
		}
	}
}

Image::~Image()
{
	for (int i = 0; i < this->h; i++)
	{
		for (int x = 0; x < this->w; x++)
		{
			imgArr[i][x].~Pixel();
		}
	}
}

Image Image::duplicateArea(int w1, int h1, int w2, int h2)
{
	int W = w2 - w1;
	int H = h2 - h1;
	int worig = w1;
	int horig = h1;
	Image imgChnk = Image(W, H);
	for (int iw = 0; iw <= W; iw++)
	{
		for (int ih = 0; ih <= H; ih++)
		{
			imgChnk.imgArr[iw][ih].setR(this->imgArr[worig][horig].getR());
			imgChnk.imgArr[iw][ih].setG(this->imgArr[worig][horig].getG());
			imgChnk.imgArr[iw][ih].setB(this->imgArr[worig][horig].getB());
			imgChnk.imgArr[iw][ih].setA(this->imgArr[worig][horig].getA());
		}
	}
}

Pixel Image::getPixel(int W, int H)
{
	return imgArr[W-1][H-1];
}

int Image::getW()
{
	return this->w;
}

int Image::getH()
{
	return this->h;
}

int Chunk::getSat()
{
	return this->sat;
}

char Chunk::getChar()
{
	return this->c;
}

int Chunk::setSat(int s)
{
	this->sat = s;
	return s;
}

char Chunk::setChar(char ch)
{
	this->c = ch;
	return ch;
}

ChunkArr::ChunkArr()
{
	this->w = 0;
	this->h = 0;
}
//chw is number of chunks wide array is
ChunkArr::ChunkArr(int chw, Image img)
{
	this->w = chw;
	this->h = (int)floor((double)chw / 2);

	this->chunkW = (int)floor((double)img.getW() / chw);
	this->chunkH = (int)floor((double)img.getH() / (chw * 2));

	img.



}

