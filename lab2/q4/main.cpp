#include <iostream>
#include "lettercount.h"
#include "wordcount.h"
#include "linecount.h"

int main(){
	string file="word.txt";

	lettercount letterCounter;
	wordcount wordCounter;
	linecount lineCounter;

	int letterCount = letterCounter.countLetters(file);
	int wordCount = wordCounter.countWords(file);
	int lineCount = lineCounter.countLines(file);

	if(letterCount == -1 || wordCount == -1 || lineCount == -1){
	cout<<"Error unable to open file" <<endl;
	return 1;
	}

	cout<<"file: " << file <<endl;
	cout<<"letters: " << letterCount<<endl;
	cout<<"Words: " <<wordCount<<endl;
	cout<<"Lines:" <<lineCount<<endl;

return 0;
}
