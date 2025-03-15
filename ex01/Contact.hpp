#include <iostream>
#include <ctime>

class Contact
{
	private:
		int index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		time_t 		time_created;
	public:
		Contact(); //Constructor
		~Contact(); //Destructor
		Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret); // parametised constructor

		//Member functions
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
		time_t		getTimeCreated();
};