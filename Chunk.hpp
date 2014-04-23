#include "Pixel.cpp"

#ifndef CHUNK_HPP_
#define CHUNK_HPP_


class Chunk{

	public:
		Chunk();
		Chunk(std::vector< std::vector< Pixel > > chk, int posw, int posh);
		~Chunk();
		int getChunkWPos();
		int getChunkHPos();
		int getW();
		int getH();
		/* Get darkness quantitively to compare to ascii character set */
		int getAvgSat();
		char charEq();

	private:
		int wpos;
		int hpos;
		int w;
		int h;
		char eq;
		int sat;
		/* Converts pixel data to black & white (Greyscale?) */
		void convGrey();
		/* "Chunk" of pixels of width w and height h to be replaced by ascii character */
		std::vector< std::vector< Pixel > > data;

};

#endif
