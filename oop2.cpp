#include <iostream>
#include <string>
using namespace std;
class Car{
	public:
		string brand;
		string model;
		int year;
};
int main()
{
	Car obj;
	obj.brand="BMW";
	obj.model="X5";
	obj.year=2006;
	Car obj2;
	obj2.brand="Audi";
	obj2.model="Q8";
	obj2.year=2008;
	cout<<obj.brand<<" "<<obj.model<<" "<<obj.year<<'\n';
	cout<<obj2.brand<<" "<<obj2.model<<" "<<obj2.year;
	return 0;
}
