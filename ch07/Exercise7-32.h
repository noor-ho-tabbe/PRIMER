#ifndef Exercise_7_32_h
#define Exercise_7_32_h
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Screen;

class Window_mgr{
public:
	using ScreenIndex=vector<Screen>::size_type;
	inline void clear(ScreenIndex);
private:
	vector<Screen> screens;
};
class Screen{
	friend void Window_mgr::clear(ScreenIndex);
public:
	using pos=string::size_type;
	Screen()=default;
	Screen(pos ht,pos wd,):height(ht),width(wd){}
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
	inline Screen& move(pos r, pos c);
    inline Screen& set(char c);
    inline Screen& set(pos r, pos c, char ch);
    const Screen& display(std::ostream &os) const { do_display(os); return *this; }

private:
	void do_display(ostream& os)const{
		os<<contents;
	}
private:
	pos cursor=0;
	pos height=0;
	pos width=0;
	string contents;
};
inline void Window_mgr::clear(ScreenIndex i){
	if(i>=screens.size()) return;
	Screen &s=screens[i];
	s.contents=string(s.height*s.width,'');

}
inline Screen& Screen::move(pos r, pos c)
{
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

