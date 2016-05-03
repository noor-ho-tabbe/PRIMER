#include <iostream>
#include <string>
using namespace std;
int main(){
	auto add=[](const int a,const int b){
		return a+b;
	};
	cout<<add<<endl;
	return 0;
}