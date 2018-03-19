/*
 * Modbot
*/

#ifndef SRC_FACETRACKER_H_
#define SRC_FACETRACKER_H_

#include <opencv2/core/core.hpp>
#include "opencv2/highgui.hpp"

class FaceTracker {
 public:
  FaceTracker();
  
  bool run();
};

#endif  // #ifndef SRC_TRACKER_H_