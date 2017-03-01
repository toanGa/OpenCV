#pragma once
#include "opencv2/opencv.hpp"
using namespace cv;
using namespace std;

int OpenWebcome()
{
	VideoCapture cap;
	// open the default camera, use something different from 0 otherwise;
	// Check VideoCapture documentation.
	if (!cap.open(0))
		return 0;
	int i = 0;
	for (;;)
	{
		Mat frame;
		cap >> frame;
		if (frame.empty()) break; // end of video stream
		imshow("this is you, smile! :)", frame);
		if (waitKey(10) == 27) break; // stop capturing by pressing ESC
		cout << i++;
	}
	// the camera will be closed automatically upon exit
	// cap.close();
	return 0;
}
