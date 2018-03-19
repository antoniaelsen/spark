/*
 * Modbot
*/
#include "spark.h"

Spark::Spark(std::string haarcascade_filename){
  // TODO(aelsen)
  tracker_ = std::make_unique<FaceTracker>();
  tracker_->setCascade(haarcascade_filename);
}

bool Spark::run() {
  // TODO(aelsen)
  CameraPose cp = tracker_->getCoordinates();
  return true;
}