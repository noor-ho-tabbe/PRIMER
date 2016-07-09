#include <iostream>
#include <string>
#include <map>
using namespace std;

void count_word(map<string ,size_t> &ma){
	string word;
	while(cin>>word){
		++ma[word];
		for(const auto &elem:ma){
			cout<<elem.first<<elem.second<<endl;
	}
	}
}
int main(){
	map<string,size_t> ma;
	count_word(ma);
	return 0;
}