#include <iostream>
#include<fstream>
#include <vector>
#include <algorithm>

using namespace std;

int missEle(const vector<int>& arr){
	for(size_t i=1; i<arr.size(); ++i){
	if(arr[i] != arr[i-1]+1){
	return arr[i-1]+1;
	}
}
	return -1;
}

int main(){
	ifstream inputFile("in.txt");
	ofstream outputFile("out.txt");

	if(!inputFile){
	cerr<<"no input file"<<endl;
	return 1;
	}

	vector<int> arr;
	int num;

	while(inputFile>>num){
	arr.push_back(num);
	}

	inputFile.close();

	if(arr.empty()){
	cerr<<"no element in file"<<endl;
	return 1;
	}

	sort(arr.begin(),arr.end());
	int miss = missEle(arr);

	if(miss != -1){
	cout<<"Missing num: " << miss <<endl;
	outputFile << "Missing num: " << miss <<endl;
	}else{
	outputFile<<"no missing num" <<endl;
	cout<<"no missing num"<<endl;
	}

	outputFile.close();

	return 0;

}

