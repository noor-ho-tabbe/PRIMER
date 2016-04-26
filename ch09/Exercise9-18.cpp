#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <deque>
#include <iterator>
using namespace std;
int main(){
	deque<string> input;
	for(string str;cin>>str;input.push_back(str));
	deque<string>::const_iterator iter;
	for(iter = input.cbegin();iter!=input.cend();iter++){
		cout<<*iter<<endl;
	}
	return 0;
}
