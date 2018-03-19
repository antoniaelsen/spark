/*
 * Modbot
*/
#ifndef SRC_CAMERAPOSE_H_
#define SRC_CAMERAPOSE_H_

#include <iostream>

struct CameraPose {
  CameraPose() {}
  CameraPose(float _x, float _y) : x(_x), y(_y) {}

  float x;
  float y;
};    

std::ostream& operator<< (std::ostream& stream, const CameraPose& pose);

#endif  // #ifndef SRC_CAMERAPOSE_H_