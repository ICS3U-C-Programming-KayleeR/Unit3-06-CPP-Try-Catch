// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: 15,10,2026
// This program generates a random
// number from a range of numbers and creates
// a guessing game for the user to
// guess what the number may be.
// The program has error handling in case the
// user inputs an invalid character.

#include <iostream>

#include <cstdlib>

#include <ctime>

#include <string>

int main() {
    // declare variables to hold values
    int someRandomNum, userGuessInt;
    std::string userGuessStr;

    // initialize random seed

    srand((unsigned)time(NULL));

    // generate a random number between 0 and 9

    someRandomNum = rand() % 10;  // NOLINT(runtime/threadsafe_fn)

    // get user to guess a number
    std::cout <<"Guess a number from 1 to 10: ";
    std::cin >> userGuessStr;

    // cast user guess to integer
    try {
        // convert user guess from string to integer
        userGuessInt = std::stoi(userGuessStr);

        // check if user guess is correct or incorrect
        if (userGuessInt == someRandomNum) {
        std::cout <<"You have guessed correctly!";
    } else {
        std::cout <<"Incorrect guess.";
        std::cout <<"The correct guess is: " <<someRandomNum;
    }
    } catch (std::invalid_argument) {
        // user guess is not an integer
        std::cout << userGuessStr << " is not an integer.\n";
    }
}
