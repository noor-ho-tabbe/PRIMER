#include <iostream>
using namespace std;
void swap(int *a,int *b);
void swap(int *a,int *b){
	
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int n1,n2;
	cout<<"Please input a and b:\n";
	while(cin>>n1>>n2){
		swap(&n1,&n2);
		cout<<n1<<" "<<n2<<endl;
	}
	return 0;
}