#include "Pixel.cpp"
#include <vector>

class ImageLoader
{

	public:
		ImageLoader();
		~ImageLoader();
		std::vector< vector<Pixel> > loadImage(FILE* f);

}
