/*
 * Modbot
*/
#include <iostream>
#include "facetracker.h"

using namespace cv;

FaceTracker::FaceTracker(std::string haarcascade_filename) {
  std::cout << "Loading file \"" << haarcascade_filename << "\"." << std::endl;
  face_cascade_.load(haarcascade_filename);
}


Mat FaceTracker::detectFaces(Mat input_frame) {
  std::vector<Rect> faces;
  Mat gray_frame;
  cv::cvtColor(input_frame, gray_frame, COLOR_BGR2GRAY);
  equalizeHist(gray_frame, gray_frame);

  face_cascade_.detectMultiScale(gray_frame, faces, 1.1, 3,
				0|CASCADE_SCALE_IMAGE, Size(30, 30));

  for( size_t i = 0; i < faces.size(); i++ ) {
    Point center(faces[i].x + faces[i].width/2, faces[i].y + faces[i].height/2);

    ellipse(input_frame, center, Size(faces[i].width/2, faces[i].height/2),
	    0, 0, 360, Scalar( 255, 0, 255 ), 4, 8, 0 );
  }

  return input_frame;
}

bool FaceTracker::run() {
  VideoCapture capture(0);
  Mat input_frame; Mat output_frame;

  while(true) {
    capture >> input_frame;

    output_frame = detectFaces(input_frame);
    
    imshow("SPARK", output_frame);
    if( waitKey(30) >= 0)     // Pause key
    	break; 
  }

  return true;
}