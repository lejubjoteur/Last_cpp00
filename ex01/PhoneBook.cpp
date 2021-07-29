#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	_nb = 0;
}

PhoneBook::~PhoneBook() {

}

void	PhoneBook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "Veuillez entrer le prenom du nouveau contact:" << std::endl;
	std::cin >> firstName;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Veuillez entrer le nom du nouveau contact:" << std::endl;
	std::cin >> lastName;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Veuillez entrer le surnom du nouveau contact:" << std::endl;
	std::cin >> nickName;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Veuillez entrer le numero du nouveau contact:" << std::endl;
	std::cin >> phoneNumber;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Veuillez entrer le secret le plus sombre du nouveau contact:" << std::endl;
	getline(std::cin, darkestSecret);

	if (_nb > 7) {
		std::string rep;
		while (rep != "y" && rep != "n")
		{
			std::cout << "Le repertoire est plein. Voulez vous supprimer le plus vieux contact? (y/n)" << std::endl;
			getline(std::cin, rep);
			if (std::cin.eof() || rep == "n")
				break ;
			else if (rep == "y") {
				for (int i = 0; i < 7; i++) {
					_contact[i] = _contact[i + 1];
				}
				_contact[7] = Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
				break ;
			}
			rep.clear();
			std::cin.clear();
		}
	}
	else {
		_contact[_nb] = Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
		_nb++;
	}
	darkestSecret.clear();
	std::cin.clear();
}

void	PhoneBook::displayRepertory()
{
	std::string title[4] = {"index", "first name", "last name", "nickname"};
	int i = -1;
	int index = -1;

	if (_nb <= 0) {
		std::cout << "Le repertoire est vide!" << std::endl;
		return;
	}
	std::cout.setf(std::ios::right);
	std::cout << " -------------------------------------------" << std::endl;
	while(++i < 4) {
		std::cout << "|";
		std::cout.width(10);
		std::cout.fill(' ');
		std::cout << title[i];
	}
	std::cout << "|" << std::endl;
	i = -1;
	while (++i < _nb)
	{
		std::cout << "|";
		std::cout.width(10);
		std::cout.fill(' ');
		std::cout << i << "|";
		_contact[i].afficher();
	}
	std::cout << " -------------------------------------------" << std::endl;
	std::cout << "Veuillez saisir un index pour plus d\'information." << std::endl;
	while (!(std::cin >> index) || index < 0 || index > i - 1)
	{
		if (std::cin.eof())
			break ;
		if (std::cin.fail()) {
			std::cout << "Erreur de saisie, recommencez:" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else {
			std::cout << "Erreur index incorrect, recommencez:" << std::endl;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	if (index >= 0 && index <= i - 1)
		_contact[index].moreInfo();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}