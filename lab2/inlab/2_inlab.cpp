#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
	if(argc<2){
	cerr<<"give input"<<endl;
	return 1;
	}

	ifstream file1(argv[1]);
	if(!file1){
	cerr<<"no file exists"<<endl;
	return 1;
	}

	string line;
	while(getline(file1,line)){
	cout << line << endl;
	}

	file1.close();

	return 0;
}


