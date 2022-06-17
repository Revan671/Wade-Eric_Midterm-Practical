// Wade-Eric_Midterm-Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "QuestionGenerator.h"

int main()
{
    bool exitPressed = false;
    std::cout << "Welcome to Simple Trivia!\n";

    while (!exitPressed) {
        std::cout << "How long of a game do you want to play?\n1) 4 Questions\n2) 6 Questions\n3) 8 Questions\n4) 10 Questions\n5) Exit Application";
        int input = 6;
        std::cin >> input;
        switch (input) {
        case1:
            break;
        case2:
            break;
        case3:
            break;
        case4:
            break;
        case5:
            exitPressed = true;
            break;
        }

        if (exitPressed)
            break;


    }

    return 1;
}

