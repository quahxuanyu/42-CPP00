#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	current_index = 0;
}

int		get_oldest_index(Contact contacts[8])
{
	int	oldest_index;
	time_t	oldest_time;

	oldest_time = contacts[0].getTimeCreated();
	oldest_index = 0;
	for (int i = 1; i < 8; i++)
	{
		if (contacts[i].getTimeCreated() < oldest_time)
		{
			oldest_time = contacts[i].getTimeCreated();
			oldest_index = i;
		}
	}
	return (oldest_index);
}

void	PhoneBook::add()
{
	std::string input[5];
	int	i;

	i = -1;
	while (++i < 5)	
	{
		if (i == 0)
		{
			std::cout << "Enter first name: ";
			std::cin >> input[i];
		}
		else if (i == 1)
		{
			std::cout << "Enter last name: ";
			std::cin >> input[i];
		}
		else if (i == 2)
		{
			std::cout << "Enter nickname: ";
			std::cin >> input[i];
		}
		else if (i == 3)
		{
			std::cout << "Enter phone number: ";
			std::cin >> input[i];
		}
		else if (i == 4)
		{
			std::cout << "Enter darkest secret: ";
			std::cin >> input[i];
		}
	}
	if (current_index == 8)
		i = get_oldest_index(contacts);
	else
	{
		i = current_index;
		current_index++;
	}
	contacts[i] = Contact(input[0], input[1], input[2], input[3], input[4]);
}

std::string truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) +".");
	else
		return (std::string(10 - str.length(), ' ') + str);
}

void PhoneBook::search()
{
	std::string input;

	std::cout << "INDEX|FIRST NAME|LAST NAME |NICKNAME  |" << std::endl;
	for (int i = 0; i < current_index; i++)
	{
		// time_t timeCreated = contacts[i].getTimeCreated();
		// std::cout << ctime(&timeCreated);
		std::cout << "    " << i << "|";
		std::cout << truncate(contacts[i].getFirstName()) << "|";
		std::cout << truncate(contacts[i].getLastName()) << "|";
		std::cout << truncate(contacts[i].getNickName()) << "|" << std::endl;
	}
	std::cout << "Enter the index of the contact you want to see: ";
	std::cin >> input;
	if (input.length() == 1 && input[0] >= '0' && input[0] <= '7' && input[0] - '0' < current_index)
	{
		int index = input[0] - '0';
		std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
		std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[index].getNickName() << std::endl;
		std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Invalid input" << std::endl;
}