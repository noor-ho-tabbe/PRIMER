#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool isLongerThan5(string &str){
	return str.size()>=5;
}
void partition_words(vector<string> &vec){
	auto iter_longerLast=partition(vec.begin(),vec.end(),isLongerThan5);
	for(auto ve=vec.begin();ve!=iter_longerLast;ve++){
		cout<<*ve<<endl;
	}
}

int main(){
	vector<string> v{"11111","1111","22222","2222","33333","3333"};
	partition_words(v);
	return 0;
}