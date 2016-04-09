#ifndef Exercise_7_24_h
#define Exercise_7_24_h
#include <string>
using namespace std;
class Screen{
public:
	using pos=string::size_type;
	Screen()=default;
	Screen(pos ht,pos wi):height(ht),width(wi){}
	Screen(pos ht,pos wi,char c):height(ht),width(wi),contents(ht*wd,c){}
private:
	pos cursor=0;
	pos height=0;width=0;
	string contents;
};
#endif