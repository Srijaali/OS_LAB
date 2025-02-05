#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

int missingEle(const vector<int>& arr){
	for(size_t i=1; i<arr.size(); ++i){
		if(arr[i] != arr[i-1]+1){
		return arr[i-1]+1;
		}
		}
	return -1;
}

int main(int argc, char* argv[]){
	if(argc<2){
	cerr<<"pls enter integers.."<<endl;
	return -1;
	}

	vector<int> arr;
	for(int i=1;i<argc;i++){
	try{
		arr.push_back(stoi(argv[i]));
	}catch(...){
		cerr<<"invalid.."<<endl;
		return 1;
		}
	}

	sort(arr.begin(),arr.end());
	int miss = missingEle(arr);

	if(miss == -1){
	cout<< "no missing element" <<endl;
	} 
	else{
	cout<< "missing elemet: " << miss <<endl;

	ofstream outputFile ("miss.txt");
	if(outputFile.is_open()){
	outputFile<<miss;
	outputFile.close();
	cout<<"content written in file" <<endl;
	}
	else{
	cerr<<"no file"<<endl;
	return 1;
	}
}
 

return 0;




}
