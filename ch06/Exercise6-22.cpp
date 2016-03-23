#include <iostream>
using namespace std;
void swap_ptr(int* &_p1, int* &_p2);
int main()
{
    int a, b;
    int *p1=&a, *p2=&b;

    cout<<"Plz enter:\n";
    while(cin>>a>>b)
    {
        p1=&a, p2=&b;   //make sure p1-->a and p2-->b, otherwise funny things will happen
                        //and look like the swap_ptr doesn't work.

        swap_ptr(p1, p2);
        cout<<*p1
                <<" "
                    <<*p2
                        <<"\n";
    }

    return 0;
}

void swap_ptr(int* &_p1, int* &_p2)
{
    int *temp = _p1;
    _p1 = _p2;
    _p2 = temp;
}