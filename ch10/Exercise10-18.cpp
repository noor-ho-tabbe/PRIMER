#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>
using namespace std;

void biggies_partition(vector<string> &words,size_t sz){
	elimDups(words);
	stable_sort(words.begin(),words.end(),[](const string &a,const string &b){
		return a.size()<b.size();
	});
	auto pivot = partition(words.begin(), words.end(),[sz](const std::string &s){
        return s.size() >= sz;}
    );
	for(auto it = vs.cbegin(); it != pivot; ++it){
		std::cout << *it << " ";
	}
}