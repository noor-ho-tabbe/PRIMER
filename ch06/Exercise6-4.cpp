#include <iostream>
using namespace std;
void interaction(){
	int num;
	cout<<"please input a positive number:";
	while(cin>>num&&num<0){
		cout<<"please input a positive number again:";
	}
	cout<<num;
	unsigned long long result=1;
	while(num>1){
			result*=num--;
	}
	cout<<"! is";
	if(result){
		cout<<result<<endl;
	}else{
		cout<<num<<"is too big!"<<endl;
	}
}

int main(){
	interaction();
	return 0;
}