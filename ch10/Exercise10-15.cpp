#include <iostream>
#include <string>
using namespace std;
int main(){
	int a=3;
	auto add=[a](const int b){
		cout<<b<<endl;
		return a+b;
	};

	cout<<add(a)<<endl;
	return 0;
}