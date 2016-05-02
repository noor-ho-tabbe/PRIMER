#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>
using namespace std;
bool is_shorter(string const &s1,string const &s2){
	return s1.size()<s2.size();
}

void elimdups(vector<string> &vec){
	sort(vec.begin(),vec.end());
	auto end_unique=unique(vec.begin(),vec.end());
	vec.erase(end_unique,vec.end());
}

int main(){
	vector<string> ve{"the","quick","red","fox","jumps","over","zhe","slow","red","turtle"};
	elimdups(ve);
	stable_sort(ve.begin(),ve.end(),is_shorter);
	for(const auto &s:ve){
		cout<<s<<endl;
	}
	return 0;
}
