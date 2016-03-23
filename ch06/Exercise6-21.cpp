#include <iostream>
using namespace std;
int LargeNum(int a,int *b){
	if(a>*b){
		return a;
	}else{
		return *b;
	}
}
int LargeNum2(int a,int *b){
	return (a>*b)? a:*b;
}
int main(){
	int c=9;
	cout<<LargeNum(6,&c)<<endl;
	return 0;
}