/*
 * Modbot
*/

#ifndef SRC_SPARK_H_
#define SRC_SPARK_H_

#include "camerapose.h"
#include "facetracker.h"

class Spark {
 public:
  Spark(std::string haarcascade_filename);
  
  bool run();

 private:
 std::unique_ptr<FaceTracker> tracker_;
};

#endif  // #ifndef SRC_SPARK_H_