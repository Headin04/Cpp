// PhoneBook.cpp
#include "PhoneBook.hpp"
# include <iostream>
# include <stdio.h>


PhoneBook::PhoneBook()
{
	// std::cout << "Phonebook: Constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	// std::cout << "Destructor called" << std::endl;
}

void PhoneBook::addContact()
{
	std::cout << "Add contact" << std::endl;
	static size_t i;
	if (!std::cin.eof())
	{
		this->contacts[i % 8].setFirstName();
		this->contacts[i % 8].setLastName();
		this->contacts[i % 8].setNickname();
		this->contacts[i % 8].setPhoneNumber();
		this->contacts[i % 8].setDarkestSecret();
	}
	i++;
}

void PhoneBook::welcome()
{
	std::cout << "Welcome to the phone book! The available commands are EXIT, ADD and SEARCH." << std::endl;
}

std::string TruncateAndDot(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}


void PhoneBook::displayContacts()
{
	size_t	i = 0;

	while (i <= 7)
	{
		// std::cout << "Bien ici" << std::endl;
		std::cout << std::setw(10) << i << std::right << "|";
		std::cout << std::setw(10) << std::right << TruncateAndDot(this->contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << std::right << TruncateAndDot(this->contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << std::right << TruncateAndDot(this->contacts[i].getNickname()) << std::endl;
		i++;
	}
}

void PhoneBook::search()
{
	size_t i;
	this->displayContacts();
	std::cout << "Enter the index you chose: ";
	std::cin >> i;
	while (i > 7 || this->contacts[i].getFirstName().empty())
	{
		std::cout << "Wrong index, Enter the index again: ";
		std::cin >> i;
	}
	if (!std::cin.eof())
	{
		std::cout << "First Name: " << this->contacts[i].getFirstName() << std::endl;
		std::cout << "Last Name: " << this->contacts[i].getLastName() << std::endl;
		std::cout << "Nickame: " << this->contacts[i].getNickname() << std::endl;
		std::cout << "Phone Number: " << this->contacts[i].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->contacts[i].getDarkestSecret() << std::endl;
	}
}

// Private utility implementations