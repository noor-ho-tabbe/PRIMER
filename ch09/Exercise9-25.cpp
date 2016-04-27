#include <iostream>
#include <vector>
#include <list>
#define len  (sizeof(ia) / sizeof(ia[0]))
using namespace std;
int main(){
	int ia[]={0,1,1,2,3,5,8,13,21,55,89};
	vector<int> vec;
	list<int> list;
	for(int i=0;i!=len;i++){
		vec.push_back(ia[i]);
	}
	for(int j=0;j!=len;j++){
		list.push_back(ia[j]);
	}
	auto vec1=vec.begin();
	while(vec1!=vec.end()){
		if(*vec1%2){
			vec1=vec.erase(vec1);
		}else{
			++vec1;
		}
	}
	auto list1=list.begin();
	while(list1!=list.end()){
		if(*list1%2){
			++list1;
		}else{
			list1=list.erase(list1);
			
		}
	}
	for(auto vec11=vec.begin();vec11!=vec.end();vec11++){
		cout<<*vec11<<endl;
	}
	for(auto list11=list.begin();list11!=list.end();list11++){
		cout<<*list11<<endl;
	}

}