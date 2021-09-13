#include <iostream>
using namespace std;
class employee{
	private:
		int salary;
	public:
		void setSalary(int s)
		{
			salary=s;
		}
		int getSalary()
		{
			return salary;
		}
};
int main()
{
	employee obj;
	obj.setSalary(5000);
	cout<<obj.getSalary();
	
	return 0;
}
