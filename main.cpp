#include <iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/opencv.hpp>
#include "blur.h"

using namespace std;
using namespace cv; 

int main()
{
	Mat img = imread(/path/to/image/, CV_LOAD_IMAGE_UNCHANGED);
	bool is_blur=checkforblur(img);
	cout<<is_blur;
	return(0);
}
