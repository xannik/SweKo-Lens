#include "stdafx.h"
#include "InputHandler.h"
#include "Gui.h"
#include "ImageHandler.h"



int main(int argc, char* argv[])
{
	Mat image;
	Mat workingImage;
	Mat testImage;
	Mat cornerImage;
	InputHandler * input = new InputHandler(argv[1]);
	
	int read_file_check = input->readFile(&image);

	//ImageHandler * imageHandler =  new ImageHandler(&image);
	if(read_file_check == -1)
	{
		return -1;
	}
	image.copyTo(workingImage);

	ImageHandler * image_handler = new ImageHandler(&image);
	image_handler->makeImageGray();
	workingImage = image_handler->gaussianBlur();
	//workingImage = image_handler->edgeDetection(workingImage);
<<<<<<< HEAD
	testImage = image_handler.sobel(workingImage);
	
	//image_handler.displayImage(testImage);
=======
	testImage = image_handler->sobel(workingImage);
	imshow("tst", testImage);
	cornerImage = image_handler->harrisCorner(testImage);


	image_handler->displayImage(cornerImage);
>>>>>>> b063b1ebb42aa991af313721b39a43ed9550fae3
	return 0;
}
