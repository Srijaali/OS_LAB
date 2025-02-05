#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char*argv[]){
	if(argc<2){
	cerr<<"Please provide integers"<<endl;
	return 1;
	}

	int sum=0;
	for(int i=1;i<argc;i++){
	try{
	sum+= stoi(argv[i]);
	}catch(...){
	cerr<<"invalid input"<<argv[i]<<endl;
	return 1;
	}
}

double avg=static_cast<double>(sum)/(argc-1);
cout<<"SUM: " << sum<<endl;
cout<<"AVG: " <<avg<<endl;

return 0;
}
