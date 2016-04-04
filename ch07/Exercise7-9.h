#ifndef Exercise_7_9_h
#define Exercise_7_6_h
#include <iostream>
#include <string>
using namespace std;

struct Person{
	string getName() const{
		return name;
	}
	string getAddress() const{
		return address;
	}
	string name;
	string address;
};
istream &read(istream &is,Person &person){
	is>>person.name>>person.address;
	return is;
} 
ostream &print(ostream &os,Person &person){
	os<<person.name<<person.address;
	return os;
}

#endif
