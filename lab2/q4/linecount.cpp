#include "linecount.h"
#include <fstream>
#include <string>
using namespace std;

int linecount::countLines(const string& filename){
	ifstream file(filename);
	if(!file) return -1;

	int linecount = 0;
	string line;
	while(getline(file,line)){
	linecount++;
	}
	return linecount;
}
