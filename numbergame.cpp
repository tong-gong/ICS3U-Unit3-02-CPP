// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on November 2020
// This is a  "Number Guessing Game" program.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <cmath>

int main() {
  // This function calculate the cost of pizza.
  const int constants = 5;
  int userGuess;

  // input
  std::cout << "Guess a number between 0-10" << std::endl;
  std::cin >> userGuess;
  std::cout << "" << std::endl;

  // process
  if (constants == userGuess) {
      // output
      std::cout << "You are right" << std::endl;
  }
}
