/*
 * Modbot
*/

#include <iostream>
#include "facetracker.h"

int main(int argc, char **argv) {
  if (argc < 2) {
    std::cout << "Please specify a haar cascade classifier XML." << std::endl;
    return 1;
  }

  FaceTracker tracker(argv[1]);

  tracker.run();

  return 0;
}