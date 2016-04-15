#include <iostream>

#include <string>
#include <vector>
#include <fstream>
using namespace std;
void ReadFileToVec(const string& filename, vector<string>& vec)
{
    ifstream fs(filename);
    if (fs)
    {
        string buf;
        while (fs >> buf)
            vec.push_back(buf);
    }
}

int main()
{
    vector<string> vec;
    ReadFileToVec("/home/yoo/workplace/c++/Primer/ch08/text.txt", vec);
    for (const auto &str : vec)
        cout << str << endl;
    return 0;
}