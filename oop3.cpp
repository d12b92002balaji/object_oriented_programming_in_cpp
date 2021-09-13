#include <iostream>
#include <string>
using namespace std;
class MyClass{
	public:
		void myMethod(){
			cout<<"called method";
		}
};
int main()
{
	MyClass obj;

	obj.myMethod();
	return 0;
}
