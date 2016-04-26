#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <list>
#include <iterator>
using namespace std;
int main(){
	list<string> input;
	for(string str;cin>>str;input.push_back(str));
	list<string>::const_iterator iter;
	for(iter = input.cbegin();iter!=input.cend();iter++){
		cout<<*iter<<endl;
	}
	return 0;
}
