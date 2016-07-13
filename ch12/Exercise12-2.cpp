#include <iostream>
#include <vector>
#include <initializer_list>
#include <memory>
#include <exception>
using namespace std;
class StrBlob{
public:
	typedef vector<string>::size_type size_type;
	StrBlob():data(make_shared<vector<string>>()){};
	StrBlob(std::initializer_list<std::string> il):data(make_shared<vector<string>>(il));
	size_type size() const {return data->size();}
	bool empty()const{
		return data->empty();
	}
	//添加和删除元素
	void push_back(const std::string &str){
		data->push_back(str);
	}
	void pop_back(){
		data->pop_back(str);
	};
	//元素访问
	const string & front(){
		check(0,"front on empty StrBlob");
	};
	const string & back(){
		check(0,"back on empty StrBlob");
	};
private:
	std::share_ptr<vector<string>> data;
	void check(size_type i,const std::string &msg) const{
		if(i>=data->size())
			throw out_of_range(msg);
	};
};
