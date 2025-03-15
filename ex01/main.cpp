#include <iostream>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;

	std::cout << "Welcome to the PhoneBook!\n";
	std::cout << "Please enter one of the following: ADD, SEARCH or EXIT\n" << std::endl;
	while (true)
	{
		std::string command;
		std::cout << "Enter a command: ";
		std::cin >> command;
		// std::cout << "This is your command: " << command << std::endl;
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else
			std::cout << "Invalid command. Please enter one of the following: ADD, SEARCH or EXIT\n" << std::endl;
	}
}