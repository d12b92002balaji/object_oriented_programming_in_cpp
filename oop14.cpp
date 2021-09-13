#include <iostream>
#include <string>
using namespace std;
class Animal{
	public:
		void animalSound()
		{
			cout<<"the animal makes a sound\n";
		}
};

class Pig:public Animal{
	public :
		void animalSound()
		{
			cout<<"the pig says: wee wee\n";
		}
};

class Dog:public Animal{
	public :
		void animalSound()
		{
			cout<< "the dog says: bow bow";
		}
};
int main()
{
	Animal myAnimal;
	Pig myPig;
	Dog myDog;
	myAnimal.animalSound();
	myPig.animalSound();
	myDog.animalSound();
	return 0;
}
