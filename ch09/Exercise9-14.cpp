#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(){
	list<const char *> list1{"test1","test2","test3"};
	vector<string> vec(list1.cbegin(),list1.cend());
	for (const auto &ch : vec){
        cout << ch << endl;
	}

}


