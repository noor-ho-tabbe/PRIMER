#include <iostream>
#include <string>
using namespace std;
string pre_suffix(const string &name, const string &pre,const string &su){
	string ret(name);
	ret.insert(0,pre);
	ret.append(su);
	return ret;
} 
int main(){
	string name("abjd");
	cout<<pre_suffix(name, "Mr.", ",Jr.")<<endl;
	return 0;
}