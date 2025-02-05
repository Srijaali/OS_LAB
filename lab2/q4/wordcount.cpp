#include "wordcount.h"
#include <fstream>
#include <sstream>

int wordcount::countWords(const string& filename){
	ifstream file(filename);
	if(!file) return -1;

	int wordcount =0;
	string word;
	while(file>>word){
	wordcount++;
	}
	return wordcount;
} 
