#include <iostream>
#include <string>
using namespace std;

istream& fun(istream& is){
	string buf;
	while(is>>buf){
		cout<<buf<<endl;
	}
	//is.clear();
	return is;
}

int main(){
	istream &is=fun(cin);
	//cout << is.rdstate() <<endl;
	return 0;
}