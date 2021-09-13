#include <iostream>
using namespace std;
class MyClass{
	public:
		void myMethod();
};

void MyClass::myMethod()
{
	cout<<"outside method calling";
}

int main()
{
	MyClass obj;
	obj.myMethod();
	return 0;
}
