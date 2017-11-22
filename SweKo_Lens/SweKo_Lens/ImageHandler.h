// ImageHandler.h

#pragma once
#include <iostream>
#include <opencv2/core/mat.hpp>
using namespace std;
using namespace cv;

class ImageHandler
{
private:
	Mat * image;
public:
	ImageHandler(Mat * image);
	void transform();
	void edgeDetection();
	void countourFinder();
	void displayImage();
	~ImageHandler();
};



