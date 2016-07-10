#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int  main(){
	vector<string> vec;
	string word;
	while(cin>>word){
		if(std::find(vec.begin(),vec.end(),word)!=vec.end()){
			cout<<"include:"<<word<<endl;
		}else{
			vec.push_back(word);
		}
	}
	for(auto const &a:vec){
		cout<<a<<endl;
	}
	return 0;
}