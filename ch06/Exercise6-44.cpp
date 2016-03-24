#include <iostream>
#include <string>
using namespace std;

inline bool isShoter(const string &s1,const string &s2){
	return s1.size() <s2.size();
}
int main(){
	string s1="abc",s2="abcde";
	cout<<isShoter(s1,s2)<<endl;
	return 0;
}