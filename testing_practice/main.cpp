#include <iostream>

class MyClass
{					 // The class
	private:				 // Access specifier
		int age;		 // Attribute (int variable)
		std::string name; // Attribute (string variable)
	public:
		MyClass(std::string str, int num); // Constructor
		void printString(std::string extra);
		void printNum(int add);
};

MyClass::MyClass(std::string str, int num)
{
	age = num;
	name = str;
}

void MyClass::printString(std::string extra_string)
{
	std::cout << name << extra_string << "\n";
}

void MyClass::printNum(int add)
{
	std::cout << age + add << "\n";
}

int main()
{
	MyClass myObj("John", 21); // Create an object of MyClass
	MyClass myObj2("Beaver", 12);

	// Print attribute values
	std::cout << "Object 1" << "\n";
	myObj.printString(" - Person 1");
	myObj.printNum(0);
	myObj.printNum(5);
	// std::cout << myObj.myNum << "\n";
	// std::cout << myObj.myString << "\n";

	std::cout << "\nObject 2" << "\n";
	myObj2.printString(" - Person 2");
	myObj2.printNum(0);
	myObj2.printNum(5);
	// std::cout << myObj2.myNum << "\n";
	// std::cout << myObj2.myString << "\n";
	return 0;
}
