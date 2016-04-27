#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int > vec{1,2,3};
	cout<<vec[0]<<endl;
	cout<<vec.at(1)<<endl;
	cout<<*vec.begin()<<endl;
	cout<<*vec.end()<<endl;
	return 0;
}