#include <iostream>
using namespace std;
void swap(int &a,int &b);
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int n1, n2;
	while(cin>>n1>>n2){
		swap(n1,n2);
		cout<<n1<<" "<<n2<<endl;
	}
	return 0;
}