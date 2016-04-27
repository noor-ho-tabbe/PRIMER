#include <iostream>
#include <deque>
#include <list>
#include <string>
using namespace std;
int main(){
	list<int> list{1,2,3,4,5,6,7,8,9};
	deque<int> deq1;
	deque<int> deq2;
	for(auto iter=list.begin();iter!=list.end();iter++){
		if(*iter%2==1){
			deq2.push_back(*iter);
		}else{
			deq1.push_back(*iter);
		}
	}
	for(auto iter1 = deq1.begin();iter1!=deq1.end();iter1++){
		cout<<"deque1----->"<<*iter1<<endl;
	}
	for(auto iter2 = deq2.begin();iter2!=deq2.end();iter2++){
		cout<<"deque2----->"<<*iter2<<endl;
	}
	return 0;
}
