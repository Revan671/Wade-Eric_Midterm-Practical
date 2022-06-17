#pragma once
class Question
{
public:
	Question();
	Question(char* prompt, char* ans1, char* ans2, char* ans3, int correctAns);
	~Question();
	char* GetPrompt();
	void SetPrompt(char* prompt);
	char* GetAns(int ans);
	void SetAns(char* ans, int ansNum);

private:
	char* mPrompt;
	char* mAns1;
	char* mAns2;
	char* mAns3;
	int mCorrectAns;
};

