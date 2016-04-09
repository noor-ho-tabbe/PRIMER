#ifndef Exercise_7_22_h
#define Exercise_7_22_h
#include <iostream>
#include <string>
using namespace std;
struct Person{
public:
	Person()=default;
	Person(const string sname,const string saddress):name(sname),address(saddress){}
	Person(istream &is){read(is,*this);}
	string getName()const {return name;}
	string getAddress()const {return address;}
private:
	string name;
	string address;
};

istream &read(istream &is,Person &person){
	is>>person.name<<person.address;
	return is;
}
ostream &print(ostream &os,const Person &person){
	os<<person.name<<person.address;
	return os;
}

#endif