#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int mian(){
	Sales_data d1("aa"),d2("aaaa"),d3("aaa"),d4("z");
	vector<Sales_data> v{d1,d2,d3,d4};
	sort(v.begin(),v.end(),[](const Sales_data &sd1,const Sales_data &sd2){
		return sd1.isbn().size()<sd2.isbn().size();
	});
	for(const auto &element:v){
		cout << element.isbn() << " ";
	}
    cout << std::endl;
}