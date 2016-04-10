#include <vector>
class NoDefault{
public:
	NoDefault(int a){};

};

class C{
public:
	C():nodefault(0){};
	NoDefault nodefault;
};

