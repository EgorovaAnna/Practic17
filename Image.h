#ifndef Image_h
#define Image_h

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <fstream>
#include <cmath>
#include "Point.h"

class Image
{
	Point **image;
	int sizeI[2];
public:
	Image(int *tsize);
	int getX();
	int getY();
	void loadIm(std::ifstream &fin);
	void drawPoint(int x1, int x2, int color);
	void drawLine(int x1, int x2, int y1, int y2);
	void showFile(std::string fl);
};

#endif
