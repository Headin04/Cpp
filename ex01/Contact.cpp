// Contact.cpp
#include "Contact.hpp"

Contact::Contact()
{
	// std::cout << "Contact : Constructor called" << std::endl;
}

Contact::~Contact()
{
	// std::cout << "Contact : Desstructor called" << std::endl;
}

void Contact::setFirstName()
{
	if (!std::cin.eof())
	{
		std::cout << "Enter the first Name: ";
		std::cin >> this->firstName;
	}
}

void Contact::setLastName()
{
	if (!std::cin.eof())
	{
		std::cout << "Enter the last Name: ";
		std::cin >> this->lastName;
	}
}

void Contact::setNickname()
{
	if (!std::cin.eof())
	{
		std::cout << "Enter the Nickname: ";
		std::cin >> this->nickname;
	}
}

void Contact::setPhoneNumber()
{
	if (!std::cin.eof())
	{
		std::cout << "Enter the Phone Number: ";
		std::cin >> this->phoneNumber;
	}
}

void Contact::setDarkestSecret()
{
	if (!std::cin.eof())
	{
		std::cout << "Enter the Darkest Secret: ";
		std::cin >> this->darketSecret;
	}
}

std::string Contact::getFirstName() const
{
	return (this->firstName);
}

std::string Contact::getLastName() const
{
	return (this->lastName);
}

std::string Contact::getNickname() const
{
	return (this->nickname);
}

std::string Contact::getPhoneNumber() const
{
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return (this->darketSecret);
}
// Other method implementations