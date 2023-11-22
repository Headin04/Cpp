// PhoneBook.cpp
#include "PhoneBook.hpp"
# include <iostream>
# include <sstream>
# include <stdio.h>


PhoneBook::PhoneBook()
{
	// std::cout << "Phonebook: Constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	// std::cout << "Destructor called" << std::endl;
}

void PhoneBook::addContact() {
    static size_t i;
    if (!std::cin.eof()) {
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

int getPositiveIntInput(std::string prompt) {
    std::string inputStr;
    int input;

    while (!std::cin.eof()) {
        std::cout << prompt;
        std::getline(std::cin, inputStr);
        std::istringstream iss(inputStr);
        if (!(iss >> input))
        {
            if (std::cin.eof())
                return input;
            std::cout << "Invalid input. Please enter a positive integer.\n";
        } 
        else if (input >= 0 && input <= 7)
            break;
        else
            std::cout << "Invalid input. Please enter a number between 0 and 7.\n";
    }
    return input;
}


void PhoneBook::search()
{
	this->displayContacts();
	if (this->contacts[0].getFirstName().empty())
		return ;
	int i = getPositiveIntInput("Enter index: ");
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