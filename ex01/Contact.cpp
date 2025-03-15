#include "Contact.hpp"

Contact::Contact()
{
	first_name = "";
	last_name = "";
}

Contact::~Contact()
{

}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
	time(&time_created);
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

std::string Contact::getLastName()
{
	return (last_name);
}

std::string Contact::getFirstName()
{
	return (first_name);
}

std::string Contact::getNickName()
{
	return (nickname);
}

std::string Contact::getPhoneNumber()
{
	return (phone_number);
}

std::string Contact::getDarkestSecret()
{
	return (darkest_secret);
}

time_t Contact::getTimeCreated()
{
	return (time_created);
}
