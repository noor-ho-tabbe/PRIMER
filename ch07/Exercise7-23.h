#ifndef Exercise_7_23_h
#define Exercise_7_23_h
#include <string>
using namespace std;
class Screen{
public:
	using pos=string::size_type;
	Screen()=default;
	Screen(pos ht,pos wi,char c):height(ht),width(wi),contents(ht*wi,c){}
	char get() const {return contents[cursor];}
private:
	pos cursor=0;
	pos height=0;width=0;
	string contents;
};
#endif