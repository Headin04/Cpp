#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <array>

class PhoneBook
{
  public:
	PhoneBook();
	~PhoneBook();

	void addContact(const Contact &contact);

	// Other public methods

  private:
	std::array<Contact, 8> contacts;

	// Private utility functions
};

#endif