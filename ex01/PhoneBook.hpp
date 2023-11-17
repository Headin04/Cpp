#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>

class PhoneBook
{
  public:
	PhoneBook();
	~PhoneBook();

	void addContact();
	void welcome();
	void search();
	void displayContacts();

	// Other public methods

  private:
	Contact contacts[8];
	// Private utility functions
};

#endif