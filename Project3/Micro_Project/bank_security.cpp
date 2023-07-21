////#include <iostream>
////#include <string>
////#include <opencv2\\opencv.hpp>
////#include <opencv2\\face\\mace.hpp> 
////#include <opencv2\\face.hpp>
////#include "main.h"
////#include <windows.h>
////#include <mmsystem.h>
////
////
////using namespace std;
////using namespace cv;
////using namespace ml;
////using namespace cv::face;
////
////CascadeClassifier face_cascade;
////int max_number;
////string name;
////string filename;
////int filenumber = 0;
////int Audio_Support = 1;
////class security
////{
////protected:
////	int max_number;
////	string label;
////	string Warning = "You are under the CCTV camera... ";
////	//int Audio_Support;
////	string Alert;
////
////public:
////	void Set_security()
////	{
////		cout << "             ************ Enter the security details ************             " << endl;
////		if (Audio_Support == 1)
////			PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\security (!).wav"), NULL, SND_FILENAME);
////		cout << "Enter the Max number of the persons" << endl;
////		cin >> max_number;
////		cout << "Enter the lable" << endl;
////		cin >> label;
////		cout << "Enter the choice\n1. Audio support enable\n2. Audio support disable" << endl;
////		cin >> Audio_Support;
////		cout << "Enter the Alert wanna display" << endl;
////		cin >> Alert;
////	}
////	void Get_security()
////	{
////		cout << "---------------------||-------------------------  security details  ------------------------||---------------- " << endl;
////		cout << "|                                                                                                             | " << endl;
////		cout << "|   TThe Max number of the persons is :  " << max_number << "                                                               |" << endl;
////		cout << "|   TThe lable is :  " << label << "                                                                                            |" << endl;
////		cout << "|   TAudio =  " << Audio_Support << "                                                                              |" << endl;
////		cout << "|   TThe Alert wanna display is :  " << Alert << "                                                                      |" << endl;
////		cout << "|                                                                                                             | " << endl;
////		cout << "|                                                                                                             | " << endl;
////		cout << "----------------------------------------------------------------------------------------------------------------" << endl;
////	}
////};
////
////class CCTV : public security
////{
////	string Security_manager;
////
////public:
////	void Set_CCTV()
////	{
////		Set_security();
////		cout << "Enter the manager name" << endl;
////		cin >> Security_manager;
////
////	}
////
////	void Get_CCTV()
////	{
////		Get_security();
////		cout << "The manager is :" << Security_manager << endl;
////	}
////
////	void Person_checking();
////};
////
////void CCTV::Person_checking()
////{
////	cout << "BANK CCTV starting....." << endl;
////	if (Audio_Support == 1)
////		PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\person_chaking().wav"), NULL, SND_FILENAME);
////
////	Mat testSample = imread("D:\\testsample\\0.jpg", 0);
////	int img_width = testSample.cols;
////	int img_height = testSample.rows;
////	string window = "Capture - face detection";
////	if (!face_cascade.load("file\\haarcascade_frontalface_default.xml"))
////	{
////		cout << " Error loading file" << endl;
////		return;
////	}
////	VideoCapture cap(0);
////
////	if (!cap.isOpened())
////	{
////		cout << "exit" << endl;
////		return;
////	}
////	long count = 0;
////	string Pname = "";
////	while (true)
////	{
////		vector<Rect> faces;
////		Mat frame;
////		Mat graySacleFrame;
////		Mat original;
////		cap >> frame;
////		count = count + 1;
////		if (!frame.empty())
////		{
////			original = frame.clone();
////			cvtColor(original, graySacleFrame, COLOR_BGR2GRAY);
////			face_cascade.detectMultiScale(graySacleFrame, faces, 1.3, 1, 0, cv::Size(90, 90));
////			string frameset = to_string(count);
////			string faceset = to_string(faces.size());
////			int width = 0, height = 0;
////			for (int i = 0; i < faces.size(); i++)
////			{
////				Rect face_i = faces[i];
////				Mat face_chk;
////				Mat face = graySacleFrame(face_i);
////				Mat face_resized;
////				face_chk = face_resized;
////				resize(face, face_resized, Size(img_width, img_height), 1.0, 1.0, INTER_CUBIC);
////				double confidence = 0;
////				Pname = label;
////
////				if (faces.size() <= max_number)
////					rectangle(original, face_i, CV_RGB(0, 255, 0), 1);
////				else
////					rectangle(original, face_i, CV_RGB(255, 0, 0), 3);
////				string text = Pname;
////				int pos_x = max(face_i.tl().x - 10, 0);
////				int pos_y = max(face_i.tl().y - 10, 0);
////				if (faces.size() <= max_number)
////					putText(original, text, Point(pos_x, pos_y), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(0, 255, 0), 1.0);
////				else
////					putText(original, text, Point(pos_x, pos_y), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(255, 0, 0), 1.0);
////			}
////			if (faces.size() <= max_number)
////				putText(original, "No. of Persons detected: " + to_string(faces.size()), Point(30, 30), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(0, 0, 0), 1.0);
////			else
////			{
////				putText(original, "alert ! you reached maximum number ...", Point(30, 30), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(255, 0, 0), 1.0);
////				if (Audio_Support == 1)
////				{
////					PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\beep-warning-6387.wav"), NULL, SND_FILENAME);
////				}
////			}
////			imshow("CCTV (BANK BY OM SHINGARE)", original);
////
////		}
////		if (waitKey(30) >= 0) break;
////
////	}
////}
////
////
////
////int main()
////{
////
////	CCTV c;
////
////	//c.Person_checking();
////	//PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\om_name.wav"), NULL, SND_FILENAME);
////	//c.Set_security();
////	//c.Get_security();
////	//c.Person_checking();
////	c.Set_CCTV();
////	c.Get_CCTV();
////	c.Person_checking();
////	return 0;
////}
//
//
//
//
//
//
//
//
//
//
//
//
//
#include <iostream>
#include <string>
#include <opencv2\\opencv.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include<iostream>
#include <windows.h>
#include <mmsystem.h>

using namespace std;
using namespace cv;
using namespace ml;

CascadeClassifier face_cascade;
int max_number;
string name;
string filename;
int filenumber = 0;
int Audio_Support = 1;
class security
{
protected:
	int max_number;
	string label;
	string Warning = "You are under the CCTV camera... ";
	int Audio_Support;
	char Alert[100];

public:
	void Set_security()
	{
		cout << "             ************ Enter the security details ************             " << endl;
		if (Audio_Support == 1)
			PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\security (!).wav"), NULL, SND_FILENAME);
		cout << "Enter the Max number of the persons" << endl;
		cin >> max_number;
		cout << "Enter the choice\n1. Audio support enable\n2. Audio support disable" << endl;
		cin >> Audio_Support;
	}
};

class CCTV : public security
{
	string Security_manager;

public:
	void Set_CCTV()
	{
		Set_security();
		cout << "Enter the manager name" << endl;
		cin >> Security_manager;
	}

	void Get_CCTV()
	{
		cout << "The manager is :" << Security_manager << endl;
	}
	friend class Bank;
	void Person_checking();
};

void CCTV::Person_checking()
{
	cout << "BANK CCTV starting....." << endl;
	PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project3\\Project3\\Micro_Project\\All_audio\\bank_cctv.wav"), NULL, SND_FILENAME);


	if (Audio_Support == 1)
		PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\person_chaking().wav"), NULL, SND_FILENAME);

	Mat testSample = imread("D:\\testsample\\0.jpg", 0);
	int img_width = testSample.cols;
	int img_height = testSample.rows;
	string window = "Capture - face detection";
	if (!face_cascade.load("file\\haarcascade_frontalface_default.xml"))
	{
		cout << " Error loading file" << endl;
		return;
	}
	VideoCapture cap(0);

	if (!cap.isOpened())
	{
		cout << "exit" << endl;
		return;
	}
	long count = 0;
	string Pname = "";
	while (true)
	{
		vector<Rect> faces;
		Mat frame;
		Mat graySacleFrame;
		Mat original;
		cap >> frame;
		count = count + 1;
		if (!frame.empty())
		{
			original = frame.clone();
			cvtColor(original, graySacleFrame, COLOR_BGR2GRAY);
			face_cascade.detectMultiScale(graySacleFrame, faces, 1.3, 1, 0, cv::Size(90, 90));
			string frameset = to_string(count);
			string faceset = to_string(faces.size());
			int width = 0, height = 0;
			for (int i = 0; i < faces.size(); i++)
			{
				Rect face_i = faces[i];
				Mat face_chk;
				Mat face = graySacleFrame(face_i);
				Mat face_resized;
				face_chk = face_resized;
				resize(face, face_resized, Size(img_width, img_height), 1.0, 1.0, INTER_CUBIC);
				double confidence = 0;
				Pname = label;

				if (faces.size() <= max_number)
					rectangle(original, face_i, CV_RGB(0, 255, 0), 1);
				else
					rectangle(original, face_i, CV_RGB(255, 0, 0), 3);
				string text = Pname;
				int pos_x = max(face_i.tl().x - 10, 0);
				int pos_y = max(face_i.tl().y - 10, 0);
				if (faces.size() <= max_number)
					putText(original, text, Point(pos_x, pos_y), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(0, 255, 0), 1.0);
				else
					putText(original, text, Point(pos_x, pos_y), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(255, 0, 0), 1.0);
			}
			if (faces.size() <= max_number)
				putText(original, "No. of Persons detected: " + to_string(faces.size()), Point(30, 30), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(0, 0, 0), 1.0);
			else
			{
				putText(original, "alert ! you reached maximum number ...", Point(30, 30), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(255, 0, 0), 1.0);
				if (Audio_Support == 1)
				{
					PlaySound(TEXT("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\Micro_Project\\All_audio\\beep-warning-6387.wav"), NULL, SND_FILENAME);
				}
			}
			imshow("CCTV (BANK BY OM SHINGARE)", original);

		}
		if (waitKey(30) >= 0) break;

	}
}

 
int main()
{
	CCTV c;
	PlaySound(TEXT("All_audio\\bank_cctv.wav"), NULL, SND_FILENAME);
	c.Person_checking();
	return 0;
}