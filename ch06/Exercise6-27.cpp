#include <iostream>
#include <initializer_list>
using namespace std;
int sum(initializer_list<int> ini){
	int sum=0;
	for(auto i:ini){
		sum+=i;
	}
	return sum;
}
int main(){
	cout<<sum({1,2,3,4,5,6,7})<<endl;
	return 0;

}