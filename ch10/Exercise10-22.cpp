#include <iostream>
using namespace std;

int main(){

	int lam=3;
	auto f=[&lam](){return --lam ? true:false;};

	while(f()){
		cout<<lam<<endl;
	}
	cout<<lam<<endl;
	return 0;
}