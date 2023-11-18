#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook book;
	book.welcome();
	std::string input = "";

	while (input.compare("EXIT") && !std::cin.eof())
	{
		if (input.compare("ADD") == 0)
			book.addContact();
		else if (input.compare("SEARCH") == 0)
			book.search();
		if (!std::cin.eof())
		{
			std::cout << "Enter new command: ";
			std::cin >> input;
		}
	}
	return (0);
}