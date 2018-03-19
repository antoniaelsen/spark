/*
 * Modbot
*/

#include <iostream>

#include "spark.h"

int main(int argc, char **argv) {
  if (argc < 2) {
    std::cout << "Please specify a haar cascade classifier XML." << std::endl;
    return 1;
  }

  Spark spark(argv[1]);
  spark.run();

  return 0;
}