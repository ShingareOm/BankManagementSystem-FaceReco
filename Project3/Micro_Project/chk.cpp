////
////
////#include<iostream>
////using namespace std;
////
////
////class security
////{
////	int max_number_entry;
////	int person_count;
////	string instruction_for_person;
////protected:
////
////	virtual void check_person() {}
////
////
////};
////
////
////int main()
////{
////
////	return 0;
////}
//
//
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//#include <string>
//#include "opencv2\core\core.hpp";
//#include "opencv2\core.hpp";
//#include "opencv2\face.hpp";
//#include "opencv2\highgui\highgui.hpp";
//#include "opencv2\objdetect\objdetect.hpp";
//#include "opencv2\opencv.hpp";
//#include <direct.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <opencv2/face/facerec.hpp>;
//#include "opencv2/objdetect.hpp";
//#include "opencv2/face/facerec.hpp"
//#include "opencv2/face/facemark.hpp"
//#include "opencv2/face/facemark_train.hpp"
//#include "opencv2/face/facemarkLBF.hpp"
//#include "opencv2/face/facemarkAAM.hpp"
//#include "opencv2/face/face_alignment.hpp"
//#include "opencv2/face/mace.hpp"
//#include <windows.h>
//#include <minwindef.h>
//
//
//
//
//using namespace std;
//using namespace cv;
//using namespace ml;
//using namespace cv::face;
//
//void addFace();
//void  FaceRecognition();
//void detectAndDisplay(Mat frame);
//static void dbread(vector<Mat>& images, vector<int>& labels);
//void eigenFaceTrainer();
//void  FaceRecognition();
//
//
//template<typename _Tp> static Ptr<_Tp> train(const Ptr<TrainData>& data, int flags = 0)
//{
//	Ptr<_Tp> model = _Tp::create();
//	return !model.empty() && model->train(data, flags) ? model : Ptr<_Tp>();
//}
//
//void save()
//{
//
//}
//
//CascadeClassifier face_cascade;
//string filename;
//string name;
//int filenumber = 0;
//
//int main()
//{
//	int choice;
//	cout << "1. Recognise Face\n";
//	cout << "2. Add Face\n";
//	cout << "Choose One: ";
//	cin >> choice;
//	switch (choice)
//	{
//	case 1:
//		FaceRecognition();
//		break;
//	case 2:
//		addFace();
//		eigenFaceTrainer();
//		break;
//	default:
//		return 0;
//	}
//	//system("pause");
//	return 0;
//}
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
//void detectAndDisplay(Mat frame)
//{
//	vector<Rect> faces;
//	Mat frame_gray;
//	Mat crop;
//	Mat res;
//	Mat gray;
//	string text;
//	stringstream sstm;
//
//	cvtColor(frame, frame_gray, COLOR_BGR2GRAY);
//	equalizeHist(frame_gray, frame_gray);
//
//	face_cascade.detectMultiScale(frame_gray, faces, 1.1, 2, 0 | CASCADE_SCALE_IMAGE, Size(30, 30));
//
//	Rect roi_b;
//	Rect roi_c;
//
//	size_t ic = 0;
//	int ac = 0;
//
//	size_t ib = 0;
//
//
//	for (ic = 0; ic < faces.size(); ic++)
//
//	{
//		roi_c.x = faces[ic].x;
//		roi_c.y = faces[ic].y;
//		roi_c.width = (faces[ic].width);
//		roi_c.height = (faces[ic].height);
//
//		ac = roi_c.width * roi_c.height;
//
//		roi_b.x = faces[ib].x;
//		roi_b.y = faces[ib].y;
//		roi_b.width = (faces[ib].width);
//		roi_b.height = (faces[ib].height);
//
//
//		crop = frame(roi_b);
//		resize(crop, res, Size(128, 128), 0, 0, INTER_LINEAR);
//		cvtColor(crop, gray, COLOR_BGR2GRAY);
//		stringstream ssfn;
//		filename = "D:\\FaceImages\\";
//		ssfn << filename.c_str() << name << filenumber << ".jpg";
//		filename = ssfn.str();
//		imwrite(filename, res);
//		filenumber++;
//
//
//		Point pt1(faces[ic].x, faces[ic].y);
//		Point pt2((faces[ic].x + faces[ic].height), (faces[ic].y + faces[ic].width));
//		rectangle(frame, pt1, pt2, Scalar(0, 255, 0), 2, 8, 0);
//	}
//
//
//	sstm << "Crop area size: " << roi_b.width << "x" << roi_b.height << " Filename: " << filename;
//	text = sstm.str();
//
//	if (!crop.empty())
//	{
//		imshow("detected", crop);
//	}
//	else
//		destroyWindow("detected");
//
//}
//
//
//
//
//
//
//void addFace()
//{
//	cout << "\nEnter Your Name:  ";
//	cin >> name;
//
//	char key = 0;
//	VideoCapture capture(0);
//
//	if (!capture.isOpened())
//		return;
//
//	if (!face_cascade.load("C:\\Users\\omshi\\source\\repos\\Project1\\Project1\\file\\haarcascade_frontalface_alt.xml"))
//	{
//		cout << "error" << endl;
//		return;
//	}
//
//	Mat frame;
//	cout << "\nCapturing your face 10 times, Press 'C' 10 times keeping your face front of the camera";
//	int i = 0;
//
//
//	while (true)
//	{
//		capture >> frame;
//
//		//imshow("Camera", frame);
//		//detectAndDisplay(frame);
//
//		waitKey(0);
//		i++;
//		if (i == 10)
//		{
//			cout << "Face Added";
//			break;
//		}
//		//break;
//		int c = waitKey(10);
//
//		if (27 == char(c))
//		{
//			break;
//		}
//		//imshow("Output Capture", frame);
//	}
//
//	return;
//}
//
//static void dbread(vector<Mat>& images, vector<int>& labels) {
//	vector<cv::String> fn;
//	filename = "D:\\FaceImages\\";
//	glob(filename, fn, false);
//	size_t count = fn.size();
//	for (size_t i = 0; i < count; i++)
//	{
//		string itsname = "";
//		char sep = '\\';
//		size_t j = fn[i].rfind(sep, fn[i].length());
//		if (j != string::npos)
//		{
//			itsname = (fn[i].substr(j + 1, fn[i].length() - j - 6));
//		}
//		images.push_back(imread(fn[i], 0));
//		labels.push_back(atoi(itsname.c_str()));
//	}
//}
//
//void eigenFaceTrainer() {
//	vector<Mat> images;
//	vector<int> labels;
//	dbread(images, labels);
//	cout << "size of the images is " << images.size() << endl;
//	cout << "size of the labels is " << labels.size() << endl;
//	cout << "Training begins...." << endl;
//	//Ptr<EigenFaceRecognizer> model ;
//	//model->train(images, labels);
//	//model->save("D:\\trainImage\\image.txt");
//	save();
//	cout << "Training finished...." << endl;
//	waitKey(10000);
//}
//
//
//void  FaceRecognition() {
//
//	cout << "start recognizing..." << endl;
//
//	////load pre-trained data sets
//	//Ptr<FaceRecognizer>  model;
//	//model->read("D:\\trainImage\\image.txt");
//	Mat testSample = imread("D:\\testsample\\0.jpg", 0);
//
//	int img_width = testSample.cols;
//	int img_height = testSample.rows;
//
//
//	//lbpcascades/lbpcascade_frontalface.xml
//
//	string window = "Capture - face detection";
//
//	if (!face_cascade.load("file\\haarcascade_frontalface_default.xml")) {
//		cout << " Error loading file" << endl;
//		return;
//	}
//
//	VideoCapture cap(0);
//	//VideoCapture cap("C:/Users/lsf-admin/Pictures/Camera Roll/video000.mp4");
//
//	if (!cap.isOpened())
//	{
//		cout << "exit" << endl;
//		return;
//	}
//
//	//double fps = cap.get(CV_CAP_PROP_FPS);
//	//cout << " Frames per seconds " << fps << endl;
//	namedWindow(window, 1);
//	long count = 0;
//	string Pname = "";
//
//	while (true)
//	{
//		vector<Rect> faces;
//		Mat frame;
//		Mat graySacleFrame;
//		Mat original;
//
//		cap >> frame;
//		//cap.read(frame);
//		count = count + 1;//count frames;
//
//		if (!frame.empty()) {
//
//			//clone from original frame
//			original = frame.clone();
//
//			//convert image to gray scale and equalize
//			cvtColor(original, graySacleFrame, COLOR_BGR2GRAY);
//			//equalizeHist(graySacleFrame, graySacleFrame);
//
//			//detect face in gray image
//			face_cascade.detectMultiScale(graySacleFrame, faces, 1.1, 3, 0, cv::Size(90, 90));
//
//			//number of faces detected
//			//cout << faces.size() << " faces detected" << endl;
//			string frameset = to_string(count);
//			string faceset = to_string(faces.size());
//
//			int width = 0, height = 0;
//
//			//region of interest
//			//cv::Rect roi;
//
//			for (int i = 0; i < faces.size(); i++)
//			{
//				//region of interest
//				Rect face_i = faces[i];
//
//				//crop the roi from grya image
//				Mat face = graySacleFrame(face_i);
//
//				//resizing the cropped image to suit to database image sizes
//				Mat face_resized;
//				resize(face, face_resized, Size(img_width, img_height), 1.0, 1.0, INTER_CUBIC);
//
//				//recognizing what faces detected
//				int label = -1; double confidence = 0;
//				//model->predict(face_resized, label, confidence);
//
//				cout << " confidence " << confidence << " Label: " << label << endl;
//
//				Pname = to_string(label);
//
//				//drawing green rectagle in recognize face
//				rectangle(original, face_i, CV_RGB(0, 255, 0), 1);
//				string text = Pname;
//
//				int pos_x = max(face_i.tl().x - 10, 0);
//				int pos_y = max(face_i.tl().y - 10, 0);
//
//				//name the person who is in the image
//				putText(original, text, Point(pos_x, pos_y), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(0, 255, 0), 1.0);
//				//cv::imwrite("E:/FDB/"+frameset+".jpg", cropImg);
//
//			}
//
//
//			putText(original, "Frames: " + frameset, Point(30, 60), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(0, 255, 0), 1.0);
//			putText(original, "No. of Persons detected: " + to_string(faces.size()), Point(30, 90), FONT_HERSHEY_COMPLEX_SMALL, 1.0, CV_RGB(0, 255, 0), 1.0);
//			//display to the winodw
//			cv::imshow(window, original);
//
//			//cout << "model infor " << model->getDouble("threshold") << endl;
//
//		}
//		if (waitKey(30) >= 0) break;
//	}
////}
////
//#include <iostream>
//#include <windows.h> //used for PlaySound function
//#include <fstream>   //used for file handling
//
//using namespace std;
//
//int main()
//{
//    // char audiofile_char[50];
//    // string audiofile_str;
//    // fstream fp;
//
//    // // Enter name of a 'wav' audio file with .wav extension and make sure it is present in the folder where your program is saved.
//    // cout << "Enter the name of an audio file: ";
//    // cin >> audiofile_char;
//
//    PlaySound(TEXT("D:\\OMA\\C++\\MICRO_PROJECT\\codes\\om_name.wav"), NULL, SND_SYNC);
//    // fp.open(audiofile_char, ios::in);
//    // // if (fp != NULL)
//    // // {
//    //     /* open function doesn't work with a variable of string type and PlaySound function doesn't work with char array hence first we used char array and here we are converting it to a string. so that we can use it in PlaySound function */
//    //     string audiofile_str = audiofile_char;
//
//    //     /* PlaySound function is used to play a sound specified by the given file name. */
//    //     /* SND_SYNC : play sound synchronously */
//    //     /* .c_str() function is used to return a pointer to an array that contains a null-terminated sequence of characters representing the current value of the string object. */
//    // // }
//    // else
//    // {
//    //     cout << "\nAudio file couldn't run..!!";
//    //     cout << "\nCheck the following things: \n 1. Your file is an original .wav audio file. \n 2. You have mentioned '.wav' extension in the name of file. \n 3. It is present in the folder where your program is saved.";
//    // }
//
//    // fp.close();
//
//    return 0;
//}