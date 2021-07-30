#include "ClassContact.hpp"

Contact::Contact()
{
	
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret) :
_firstName(firstName),
_lastName(lastName),
_nickName(nickName),
_phoneNumber(phoneNumber),
_darkestSecret(darkestSecret) {
	
}


Contact::~Contact()
{
	
}

void	displayInfo(std::string str) {
	std::string tmp;

	tmp = str;
	if (tmp.size() >= 10) {
		tmp[9] = '.';
		tmp.resize(10);
	}
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << tmp << "|";
}

void	Contact::afficher()
{
	displayInfo(_firstName);
	displayInfo(_lastName);
	displayInfo(_nickName);
	std::cout << std::endl;
}

void	Contact::moreInfo()
{
	std::cout << "First name :" << _firstName << std::endl;
	std::cout << "Last name :" << _lastName << std::endl;
	std::cout << "Nickname :" << _nickName << std::endl;
	std::cout << "Phone number :" << _phoneNumber << std::endl;
	std::cout << "Darkest secret :" << _darkestSecret << std::endl;
}