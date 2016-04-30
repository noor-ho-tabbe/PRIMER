#include <iostream>
#include <algorithm>
#include <string>
#include <list>
using namespace std;
int main(){
	string str;
	list<string> li;
	while(cin>>str){
		li.push_back(str);
	}
	auto times=count(li.begin(),li.end(),"222");
	cout<<"times="<<times<<endl;
	return 0;
}