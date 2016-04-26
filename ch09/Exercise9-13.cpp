#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;
int main(){
	list<int> list(5,4);
	vector<int> vec(5,5);

	vector<double> vec1(list.begin(),list.end());
	for(auto i:list){
		cout<<i<<endl;
	}
	for(auto t:vec1){
		cout<<t<<endl;
	}

	vector<double> vec2(vec.begin(),vec.end());
	for(auto i:vec){
		cout<<i<<endl;
	}
	for(auto t:vec2){
		cout<<t<<endl;
	}
	return 0;

}