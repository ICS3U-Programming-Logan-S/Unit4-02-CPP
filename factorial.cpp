// Copyright (c) 2022 Logan Sweeney All rights reserved.

// Created by: Logan S
// Date: Jan.6, 2022
// This program asks the user for a whole number. It
// then calculates the factorial of that number.
#include <iostream>

int main() {
  // initializations
  int counter = 0;
  int factorialAnswer = 1;
  int userNum;

  // get the user number
  std::cout << "Enter a whole number: ";
  std::cin >> userNum;
  std::cout << std::endl;

  // calculate the factorial of the number
  do {
    counter++;
    factorialAnswer = factorialAnswer * counter;
    std::cout << "Tracking " << counter << " times through the loop.\n";
  } while (counter < userNum);

  // display the answer to the user
  std::cout << "" << std::endl;
  std::cout <<userNum << " = !" << factorialAnswer << std::endl;
}
