// Contact.cpp
#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact : Constructor called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact : Desstructor called" << std::endl;
}

void Contact::setFirstName(const std::string &firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(const std::string &lastName)
{
	this->lastName = lastName;
}

void Contact::setNickname(const std::string &nickname)
{
	this->nickname = nickname;
}

// Other method implementations