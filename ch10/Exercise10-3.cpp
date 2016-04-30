#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int main(){
	vector<int > vec{1,2,3,4,5,6,7,8,9,0};
	int sum=accumulate(vec.cbegin(),vec.cend(),0);
	cout<<"sum="<<sum<<endl;
	return 0;
}