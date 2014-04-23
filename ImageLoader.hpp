#include "Pixel.cpp"

class ImageLoader
{

	public:
		ImageLoader();
		~ImageLoader();
		std::vector< std::vector<Pixel> > loadImage(FILE* f);

}
