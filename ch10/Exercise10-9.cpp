#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void elimdups(vector<string> &vec){
	sort(vec.begin(),vec.end());
	auto end_unique=unique(vec.begin(),vec.end());
	vec.erase(end_unique,vec.end());
}
int main(){
	vector<string> ve{"the","quick","red","fox","jumps","over","zhe","slow","red","turtle"};
	elimdups(ve);
	for(auto i:ve){
		cout<<i<<endl;
	}
	return 0;
}