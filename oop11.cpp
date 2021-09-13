#include <iostream>
#include <string>
using namespace std;

class Vehicle{
	public:
		string brand="Ford";
		void honk(){
			cout<<"tuut tuut! \n";
		}
};
class Car :public Vehicle
{
	public:
		string model="mustang";
		
		
};
int main()
{
	Car obj;
	obj.honk();
	cout<<obj.brand+" "+" "+obj.model;
	return 0;
}
