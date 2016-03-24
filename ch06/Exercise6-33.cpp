#include <iostream>
#include <vector>
using namespace std;
using iter = vector<int>::iterator;
//vector<int>::iterator iter;
void pvec(iter beg,iter end){
	if(beg!=end){
		cout<<*beg<<endl;
		pvec(std::next(beg),end);
	}
	
}
int main(){
	vector<int> vec{1, 2, 3, 4, 5, 6, 89, 8, 9};
	pvec(vec.begin(),vec.end());
	return 0;
}