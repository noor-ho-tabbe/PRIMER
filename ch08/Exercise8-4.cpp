#include <fstream>
#include <string>
#include <vector>
#include <iostream>

//using std::vector; using std::string; using std::ifstream; using std::cout; using std::endl;
using namespace std;
void ReadFileToVec(const string& fileName, vector<string>& vec)
{
    ifstream ifs(fileName);
    if (ifs)
    {
        string buf;
        while (getline(ifs, buf))
            vec.push_back(buf);
    }
}

int main()
{
    vector<string> vec;
    ReadFileToVec("/home/yoo/workplace/c++/Primer/ch08/text.txt", vec);
    for (const auto &str : vec){
        cout << str << endl;
    }
    return 0;
}
