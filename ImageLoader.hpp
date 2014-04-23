
#include "Pixel.cpp"
#include <vector>

using namespace std;

class ImageLoader
{

	public:
		ImageLoader();
		~ImageLoader();
		vector< vector<Pixel> > loadImage(FILE* f);

}
