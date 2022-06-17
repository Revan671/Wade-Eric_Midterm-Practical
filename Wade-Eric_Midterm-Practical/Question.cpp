#include "Question.h"

Question::Question() {}

Question::Question(char* prompt, int correctAns) {
	mPrompt = prompt;
	mCorrectAns = correctAns;
}

Question::~Question() {}

char* Question::GetPrompt() {
	return mPrompt;
}

int Question::GetCorrectAns() {
	return mCorrectAns;
}