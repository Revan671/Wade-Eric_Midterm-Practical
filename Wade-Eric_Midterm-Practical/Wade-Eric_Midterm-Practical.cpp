// Wade-Eric_Midterm-Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "QuestionGenerator.h"
#include "Question.h"

void RunGame(int numQuestions);
void GenerateQuestions();

std::vector<Question> Questions;

int main()
{
    bool exitPressed = false;
    std::cout << "Welcome to Simple Trivia!\n";

    while (!exitPressed) {
        GenerateQuestions();
        std::cout << "How long of a game do you want to play?\n1) 4 Questions\n2) 6 Questions\n3) 8 Questions\n4) 10 Questions\n5) Exit Application";
        int input = 6;
        std::cin >> input;
        switch (input) {
        case1:
            RunGame(4);
            break;
        case2:
            RunGame(6);
            break;
        case3:
            RunGame(8);
            break;
        case4:
            RunGame(10);
            break;
        case5:
            exitPressed = true;
            break;
        default:
            std::cout << "\nInvalid Input\n";
            break;
        }

        if (exitPressed)
            break;


    }

    return 1;
}

void RunGame(int numQuestions) {

}

void GenerateQuestions() {
    Questions = {
    Question((char*)"Who was elected President of the United States in 2017?\n1) Donald Trump\n2) Barack Obama\n3) George Bush", 1),
    Question((char*)"What is the national language of Canada?\n1) English\n2) Dutch\n3) French", 2),
    Question((char*)"What is the national animal of Pakistan?\n1) Peacock\n2) Markhor\n3) Loin", 2),
    Question((char*)"A la Crecy is a French dish made of what?\n1) Apples\n2) Carrots\n3) Potatoes", 2),
    Question((char*)"Which core ingredient is important to cook a savory dish?\n1) Salt\n2) Butter\n3) Sugar", 1),
    Question((char*)"Brazil is the biggest producer of?\n1) Rice\n2) Oil\n3) Coffee", 3),
    Question((char*)"Which country is infamously known as Arch Rival of Pakistan?\n1) Afghanistan\n2) America\n3) India", 3),
    Question((char*)"What fabric is made of flax?\n1) Cotton\n2) Linen\n3) Lawn", 1),
    Question((char*)"Which is the closest planet to earth?\n1) Mars\n2) Jupiter\n3) Saturn", 2),
    Question((char*)"In 2016, which new type of chocolate was discovered?\n1) Ruby chocolate\n2) Emerald chocolate\n3) Diamond chocolate", 1)
    };
}

