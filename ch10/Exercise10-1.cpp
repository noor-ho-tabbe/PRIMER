#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int i=0;
	vector<int> vec;
	while(cin>>i){
		vec.push_back(i);
	}
	auto times=count(vec.begin(),vec.end(),5);
	cout<<"times="<<times<<endl;
	return 0;
}