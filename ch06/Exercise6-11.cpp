#include <iostream>
using namespace std;
void reset(int &i){
	i=0;
}

int main(){
	int i=10;
	reset(i);
	cout<<"i="<<i<<endl;
	return 0;
}