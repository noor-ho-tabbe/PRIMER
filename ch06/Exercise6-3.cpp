#include <iostream>
using namespace std;
int fact(int val){
	if(val==0||val==1){
		return 1;
	}
	return val*fact(val-1);
}
int main(){
	int j=fact(5);
	cout<<"5! is "<<j<<endl;
	return 0;
}