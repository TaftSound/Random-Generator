//
//  main.cpp
//  Random Generator
//
//  Created by Matthew Murphy on 5/10/22.
//

#include <iostream>
#include <random>

int main() {

std::random_device rd{};

  std::mt19937 engine{rd()};
  std::uniform_real_distribution<double> dis(0.0, 1.0);

  double randomRealBetweenZeroAndOne = dis(engine);

std::cout << randomRealBetweenZeroAndOne << "\n";

  return 0;
}
