#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<pair<string,int>> vec;
	string str;
	int i;
	while(cin>>str>>i){
		vec.push_back({str,i});
	}
	for(auto &ve:vec){
		cout<<ve.first<<ve.second<<endl;
	}
	return 0;
}