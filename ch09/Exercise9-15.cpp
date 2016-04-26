#include <iostream>
#include <vector>
using namespace std;

void VecEqu(vector<int> vec1,vector<int > vec2){
	cout<<(vec1==vec2 ? "true" : "false")<<endl; 
}

int main(){
	vector<int> vec3{1,2,3,4,6};
	vector<int> vec4{1,2,3,4,5};
	VecEqu(vec3,vec4);
	return 0;
}