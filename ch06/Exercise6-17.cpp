#include <iostream>
#include <string>
using namespace std;
bool isUppercase(const string &s){
	for(auto c : s){
		if(isupper(c)){
			return true;
		}
	}
	return false;
}
void uppercaseTolowercase(string &s){
	for(auto &c: s){
		if(isupper(c)){
			c=tolower(c);
		}
	}
}
int main(){
	string str("hello worlD");
	cout<<"isUppercase="<<isUppercase(str)<<endl;
	uppercaseTolowercase(str);
	cout<<str<<endl;
	return 0;
}