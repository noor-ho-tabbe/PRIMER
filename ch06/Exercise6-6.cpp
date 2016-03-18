#include <iostream>
using namespace std;
int example(int i){
	static int val=0;
	val+=i;
	return val;
}
int main(){
	for(int i=0;i<=10;i++){
		cout<<example(i)<<endl;
	}
	return 0;
}