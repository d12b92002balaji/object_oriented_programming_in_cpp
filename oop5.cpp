#include <iostream>
using namespace std;
class Car{
	public:
	int Speed(int maxspeed);
	
};

int Car::Speed(int maxspeed)
{
	return maxspeed;
}
int main()
{
	Car obj;
	cout<<obj.Speed(200);
	return 0;
}
