#include <iostream>
using namespace std;
int generate(){
	static int i=0;
	return i++;
}
int main(){
	for(int i=0;i<10;i++){
		cout<<generate()<<endl;
	}
	return 0;
}