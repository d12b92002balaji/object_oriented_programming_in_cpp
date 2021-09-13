#include <iostream>
using namespace std;
class MyClass{
	public:
		int x;
		
	private:
		int y=30;
	
};
int main(){
	MyClass obj;
	obj.x=25;

	cout<<"public variable:"<<obj.x;
	
}
