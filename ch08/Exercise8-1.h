#ifndef Exercise_8_1_h
#define Exercise_8_1_h
#include <iostream>
#include <string>
using namespace std;

istream& fun(istream& is){
	string buf;
	while(is>>buf){
		cout<<buf<<endl;
	}
	is.clear();
	return is;
}
#endif