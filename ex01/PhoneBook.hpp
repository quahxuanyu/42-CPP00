#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int	current_index;
	public:
		PhoneBook(void); // constructor
		void	add();
		void	search();
};