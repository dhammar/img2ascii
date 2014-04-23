#include "Pixel.cpp"
#include <vector>
#include <stdio.h>

using namespace std;

class ImageLoader
{

	public:
		ImageLoader();
		~ImageLoader();
		std::vector< std::vector<Pixel> > loadImage(FILE* f);

}
