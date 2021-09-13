#include<iostream>
#include<string>
using namespace std;
class MyClass{
	public:
	int id ;
	string name;
	
};

int main(){
	MyClass obj1;
	obj1.id=1;
	obj1.name="dheepan balaji";
	cout<<"id:"<<obj1.id<<'\n';
	cout<<"name:"<<obj1.name;
	return 0;
}
