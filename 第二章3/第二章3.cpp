// 第二章3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<opencv.hpp>

using namespace cv;

int main()
{
	cv::Mat dispMat = imread("D:\\2.png");
	cv::Rect rect;
	cv::line(dispMat, cv::Point(20,200), cv::Point(20,200), CV_RGB(255, 0, 0), 1, 8, 0);
	rect.x = 10;
	rect.y = 10;
	rect.width=100;
	rect.height=100;

	cv::Point pt;
	pt.x = 10;
	pt.y = 10;
	cv::circle(dispMat, cv::Point(20, 200), 5, CV_RGB(255, 0, 0), 1, 8, 0);
	cv::rectangle(dispMat, rect, CV_RGB(255, 0, 0), 1, 8, 0);
	imshow("dispMat", dispMat);
	waitKey(0);


    return 0;
}

