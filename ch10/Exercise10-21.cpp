#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::vector;
using std::count_if;
using std::string;

std::size_t biggerThan6(vector<string> const&vec){
	return count_if(vec.begin(),vec.end(),[](string const&str){
		return str.size()>6;
	});
}

int main(){
	vector<string> v{"111111","2133423","qweqewq","111","2"};
	std::cout<<biggerThan6(v)<<std::endl;
	return 0;
}
