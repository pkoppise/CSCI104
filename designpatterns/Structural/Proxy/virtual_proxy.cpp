#include <iostream>
#include <string>
using namespace std;

class Image
{
public:
	virtual void draw() = 0;
	virtual ~Image() = default;
};

class Bitmap: public Image
{
public:
	Bitmap(const string &filename) {
		cout << "Loading bitmap from file:" << filename << endl;
	}

	void draw() override {
		cout << "Drawing bitmap" << endl;
	}
};

class LazyBitmap: public Image
{
private:
	string filename;
	Bitmap *bmp;
public:
	LazyBitmap(const string& filename):filename(filename),bmp(nullptr) {}
	void draw() override {
		if(!bmp)
		{
			bmp = new Bitmap(filename);
		}
		bmp->draw();
	}
};

/*
int main()
{
	LazyBitmap bitmap("pokemon.png");
	bitmap.draw();
	return 0;
}*/
