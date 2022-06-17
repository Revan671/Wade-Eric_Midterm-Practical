#pragma once
class Question
{
public:
	Question();
	Question(char* prompt, int correctAns);
	~Question();
	char* GetPrompt();
	int GetCorrectAns();

private:
	char* mPrompt;
	int mCorrectAns;
};

