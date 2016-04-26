#include <iostream>
#include <list>
#include <vector>
using namespace std;

void VecEquLi(list<int> list,vector<int > vec){
	cout<<(vector<int>(list.begin(),list.end())==vec ? "true" : "false")<<endl;

	
}
int main(){
	vector<int> vec3{1,2,3,4};

	list<int> list{1,2,3,4};
	VecEquLi(list,vec3);
	return 0;
}