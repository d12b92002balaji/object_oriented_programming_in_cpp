#include <iostream>
using namespace std;
class MyClass{
	public:
		void myFunction()
		{
			cout<<"Some content in parent class";
		}
};

class Myfather:public MyClass
{
	
};
class myGrandChild:public Myfather{
	
};
int main()
{
	myGrandChild obj;
	obj.myFunction();
	return 0;
}
