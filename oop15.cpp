#include<iostream>
using namespace std;
int main()
{
	try{
		int age =13;
		if(age<=18)
		{
			cout<<"access accepted";
			
		}
		else
		{
			throw(age);
		}
	}
	catch(int myNum)
	{
		cout<<"access denied \n";
		cout<<"Age is :"<<myNum;
	}
}
