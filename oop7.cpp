#include <iostream>
using namespace std;
class Car{
	public:
		string brand;
		string model;
		int year;
	Car(string x,string y,int z){
		brand=x;
		model=y;
		year=z;
		
	}
};
int main()
{
	Car obj1("BMW","X5",2008);
	Car obj2("Ford","R3",2006);
	cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<'\n';
	cout<<obj2.brand<<" "<<obj2.model<<" "<<obj2.year;
	return 0;
}
