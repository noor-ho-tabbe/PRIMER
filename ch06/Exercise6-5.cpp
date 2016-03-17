#include <iostream>
using namespace std;
template <typename T>
T abs(T i){
	return i>0 ? i:-i;
}
int main(){
	cout<<abs(5)<<endl;
	return 0;
}