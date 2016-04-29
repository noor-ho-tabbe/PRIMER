#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	vector<string> v={"123","134","156.2"};
	int i=0;
	double d=0.00;
	for(auto vec=v.begin();vec!=v.end();vec++){
		i+=stoi(*vec);
	}
	for(auto vec=v.begin();vec!=v.end();vec++){
		d+=stod(*vec);
	}
	cout<<d<<endl;
	cout<<i<<endl;
	return 0;
}