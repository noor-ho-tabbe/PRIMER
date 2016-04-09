#ifndef Exercise_7_21_h
#define Exercise_7_21_h
#include <iostream>
#include <string>
using namespace std;
class Sales_data{
	friend istream &read(std::istream &is, Sales_data &item);
    friend ostream &print(std::ostream &os, const Sales_data &item);
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
public:
	Sales_data()=default;
	Sales_data(const string &s):bookNo(0){}
	Sales_data(const string &s, unsigned n, double p):bookNo(s),units_sold(n),revenue(n*p){}
    Sales_data(istream &is) { read(is, *this);}

    string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);

private:
	string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
};

Sales_data& combine(const Sales_data& rhs){
	units_sold+=rhs.units_sold;
	revenue+=rhs.revenue;
	return *this;
}


istream &read(std::istream &is, Sales_data &item){
	double price=0;
	is>>item.bookNo>>item.units_sold>>price;
	item.revenue=price*item.units_sold;
	return is;
}
ostream &print(std::ostream &os, const Sales_data &item){
	os<<item.isbn()<<""<<item.units_sold<<""<<item.revenue;
	return os;
}
Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
	Sales_data sum=lhs;
	sum.combine(rhs);
	return sum;
}
#endif
