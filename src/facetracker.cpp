/*
 * Modbot
*/
#include <iostream>
#include "facetracker.h"

using namespace cv;

FaceTracker::FaceTracker() {
}

bool FaceTracker::run() {
  VideoCapture capture(0);
  Mat frame;

  while(true) {
    capture >> frame;
    imshow("SPARK", frame);
  }

  return true;
}