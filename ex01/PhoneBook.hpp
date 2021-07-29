#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "ClassContact.hpp"
# include <limits>
# include <iomanip>

class PhoneBook {
	public:

	PhoneBook();
	~PhoneBook();

	int  nbContact();
	void addContact();
	void displayRepertory();

	private:

	Contact _contact[8];
	int		_nb;
};

#endif