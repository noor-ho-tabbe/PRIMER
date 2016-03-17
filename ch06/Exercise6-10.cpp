#include <iostream>

swap();
swap(a,b){
	int tmp=a;
	a=*(&b);
	b=tmp;
}
int main(){
	swap(1,2);
}