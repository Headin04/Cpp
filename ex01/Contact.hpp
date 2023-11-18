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

	void setFirstName();
	void setNickname();
	void setLastName();
	void setPhoneNumber();
	void setDarkestSecret();

	// Other setters

	std::string getFirstName() const;
	std::string getNickname() const;
	std::string getLastName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

	// Other getters
  private:
	std::string firstName;
	std::string nickname;
	std::string lastName;
	std::string phoneNumber;
	std::string darketSecret;
	// Other member variables
};

#endif