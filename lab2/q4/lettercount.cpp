#include "lettercount.h"
#include <fstream>
#include <cctype>

int lettercount::countLetters(const string& filename){
	ifstream file(filename);
	if(!file) return -1;

	int lettercount = 0;
	char ch;
	while (file.get(ch)){
		if(isalpha(ch))
	 lettercount++;
}

	return lettercount;

}
