/*
 * Modbot
*/
#include "camerapose.h"
#include <iostream>

std::ostream& operator<< (std::ostream& stream, const CameraPose& pose) {
  std::cout << "[" << pose.x << ", " << pose.y << "]";
  return stream;
}
