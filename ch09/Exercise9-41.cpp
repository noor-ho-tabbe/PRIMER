#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	vector<char> vec{'a','b','c','d'};

    string str(vec.begin(), vec.end());
    cout << str << endl;
	return 0;
}