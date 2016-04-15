#include <iostream>
#include <sstream>
#include <string>
using namespace std;

istream& fun(istream &is){
	string buf;
	while(is>>buf){
		cout<<buf<<endl;
	}
	iss.clear();
	return is;
}

int main(){
	istringstream iss("hello");
	fun(iss);
	return 0;
}