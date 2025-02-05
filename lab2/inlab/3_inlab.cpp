#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){

	if(argc<2){
	cerr<<"give int as input"<<endl;
	return 1;
	}

	ifstream file1(argv[1]);
	if(!file1){
	cout<<"Error no file"<<endl;
	return 1;
	}
	cout<<"content: "<<endl;
	string con;
	while(getline(file1,con)){
	cout<<con<<endl;
	}
	file1.close();


	vector<int> arr;
	for(int i=2; i<argc; i++){
	arr.push_back(stoi(argv[i]));
	}

	sort(arr.begin(),arr.end());
	cout<<"Sorted: "<<endl;
	for(int num:arr){
	cout<<num<<" ";
	}
	cout<<endl;

	return 0;
}
	







