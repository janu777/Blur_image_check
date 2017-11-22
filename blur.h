#pragma once
#include <iostream>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

bool checkforblur(Mat img)
{
	bool is_blur = 0;
	Mat gray,laplacianImage;
	Scalar mean, stddev; 
	double variance,threshold;
	//blur(img, img, Size(7, 7));
	cvtColor(img, gray, CV_BGR2GRAY);
	Laplacian(gray, laplacianImage, CV_64F);
    meanStdDev(laplacianImage, mean, stddev, Mat()); 
    variance = stddev.val[0]*stddev.val[0];
    threshold = 100;
    cout<<"Variance is:"<<variance<<"\n"<<"Threshold Used:"<<threshold<<endl;
    //if (variance <= threshold){is_blur=1;}
    return is_blur;
}

