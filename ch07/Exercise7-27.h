#ifndef Exercise_7_27_h
#define Exercise_7_27_h
#include <string>
#include <iostream>
using namespace std;
class Screen{
public:
	using pos=string::size_type;
	Screen()=default;
	Screen(pos ht,pos wi):height(ht),width(wi){}
	Screen(pos ht,pos wi,char c):height(ht),width(wi),contents(ht*wi,c){}
	inline Screen &move(pos r,pos c);
	inline Screen &set(char c);
	inline Screen &set(pos r,pos c,char ch);
	const Screen& display(ostream &os)const {
		do_display(os);
		return *this;
	} 
private:
	void do_display (ostream &os)const{
		os<<contents;
	}
private:
	pos cursor=0;
	pos height=0;
	pos width=0;
	string contents;
};

inline Screen& Screen::move(pos r, pos c){
	cursor = r*width + c;
	return *this;
}

inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(pos r, pos c, char ch)
{
    contents[r*width+c] = ch;
    return *this;
}

#endif