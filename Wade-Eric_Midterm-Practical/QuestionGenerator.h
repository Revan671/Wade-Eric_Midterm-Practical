#pragma once
#include "Question.h"
#include <map>

class QuestionGenerator
{	private:
	std::map<char*, int> QandA;
	Question Questions[10];
	public:
		QuestionGenerator();
		void GenerateQuestions();


};

