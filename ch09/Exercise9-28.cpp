#include <iostream>
#include <forward_list>
using namespace std;
void find_and_insert(forward_list<string> &list,string str1,string str2){
	auto prev=list.before_begin();
	for(auto iterlist=list.begin();iterlist!=list.end();prev=iterlist++){
		if(*iterlist==str1){
			list.insert_after(iterlist,str2);
			return ;
		}
	}
	list.insert_after(prev,str2);
}

int main(){
	forward_list<string> list={"123","456","789"};
	string str1="123";
	string str2="777";
	find_and_insert(list,str1,str2);
	for(auto fow=list.begin();fow!=list.end();fow++){
		cout<<*fow<<endl;
	}
	return 0;
}