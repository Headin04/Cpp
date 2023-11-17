// PhoneBook.cpp
#include "PhoneBook.hpp"
# include <iostream>


PhoneBook::PhoneBook()
{
	std::cout << "Phonebook: Constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor called" << std::endl;
}

void PhoneBook::addContact()
{
	std::cout << "Add contact" << std::endl;
}

void PhoneBook::welcome()
{
	std::cout << "Welcome to the phone book!" << std::endl;
}

void PhoneBook::displayContacts()
{
	size_t	i = 0;

	while (i <= 8)
	{
		std::cout << "Bien ici" << std::endl;
		//std::cout << std::setw(10) << i << std::right << "|";
		// std::cout << std::setw(10) << std::right << this->contacts[i].getFirstName().substr(0, 10 - 1) << "|";
		// std::cout << std::setw(10) << std::right << this->contacts[i].getLastName().substr(0, 10 - 1) << "|";
		// std::cout << std::setw(10) << std::right << this->contacts[i].getNickname().substr(0, 10 - 1) << std::endl;
		i++;
	}
}

void PhoneBook::search()
{
	this->displayContacts();
	std::cout << "Bien dans search" << std::endl;
}

// Private utility implementations