#include "Question.h"

Question::Question() {}

Question::Question(char* prompt, char* ans1, char* ans2, char* ans3) {
	mPrompt = prompt;
	mAns1 = ans1;
	mAns2 = ans2;
	mAns3 = ans3;
}

Question::~Question() {}

char* Question::GetPrompt() {
	return mPrompt;
}

void Question::SetPrompt(char* prompt) {
	mPrompt = prompt;
}

char* Question::GetAns(int ans) {
	char* answer;
	switch (ans) {
	case 1:
		answer = mAns1;
		break;
	case 2:
		answer = mAns2;
		break;
	case 3:
		answer = mAns3;
		break;
	default:
		break;
	}

	return answer;
}

void Question::SetAns(char* ans, int ansNum) {
	switch (ansNum) {
	case 1:
		mAns1 = ans;
		break;
	case 2:
		mAns2 = ans;
		break;
	case 3:
		mAns3 = ans;
		break;
	default:
		break;
	}
}