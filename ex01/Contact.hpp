// Contact.hpp
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
  public:
	Contact();
	~Contact();

	void setFirstName(const std::string &firstName);
	void setNickname(const std::string &nickname);
	void setLastName(const std::string &lastName);

	// Other setters

	std::string getFirstName() const;
	std::string getNickname() const;
	std::string getLastName() const;

	// Other getters

  private:
	std::string firstName;
	std::string nickname;
	std::string lastName;	
	// Other member variables
};

#endif