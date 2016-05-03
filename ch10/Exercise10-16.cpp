#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void elimdups(vector<string> &vs)
{
   	sort(vs.begin(), vs.end());
    auto new_end = unique(vs.begin(),vs.end());
    vs.erase(new_end, vs.end());
}

void biggies(vector<string> &words,vector<string>::size_type sz){
	elimdups(words);
	stable_sort(words.begin(),vords.end(),[](const string &a,const string &b){return a.size()<b.size();});
	auto wc=find_if(words.begin(),words.end(),[](sz)(string const &a){return a.size()> =sz});


}