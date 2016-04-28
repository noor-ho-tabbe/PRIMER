#include <iostream>
#include <string>
using namespace std;

void Replace(string &s,string oldVal,string newVal){
	for(auto beg=s.begin();beg!=s.end();++beg){
		if(*beg==oldVal.front()) continue;
		if(distance(beg,s.end())<distance(oldVal.begin(),oldVal.end())) break;
		if(string{beg,beg+oldVal.size()}==oldVal){
			auto pos=distance(s.begin(),beg);
			s.erase(beg,beg+oldVal.size());
			s.insert(beg,newVal.begin(),newVal.end());
			beg = next(s.begin(), pos + newVal.size() - 1);
		}
	}
	
}
int main(){

	{
        string str{"To drive straight thru is a foolish, tho courageous act."};
        Replace(str, "thru", "through");
        Replace(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"To drive straight thruthru is a foolish, thotho courageous act."};
        Replace(str, "thru", "through");
        Replace(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        Replace(str, "thru", "thruthru");
        Replace(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"my world is a big world"};
        Replace(str, "world", "worldddddddddddddddddddddddddddddddddddddddddddddddd");
        std::cout << str << std::endl;
    }
	
}