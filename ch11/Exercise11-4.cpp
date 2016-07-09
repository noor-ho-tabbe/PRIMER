#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <cctype>


void count_word(std::map<std::string ,int> &ma){
	std::string word;
	while(std::cin>>word){
		for(auto &a:word){
			a=tolower(a);
		}
		word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end());
		++ma[word];
	}
	for(const auto &elem:ma){
		std::cout<<elem.first<<elem.second<<std::endl;
	}
}
int main(){
	std::map<std::string,int> ma;
	count_word(ma);
	return 0;
}