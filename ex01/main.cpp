#include "ClassContact.hpp"
#include "PhoneBook.hpp"

int		main()
{
	std::string cmd;
	PhoneBook phonebook;

	while (cmd != "EXIT" && cmd != "ADD" && cmd != "SEARCH")
	{
		std::cout << "Veuillez entrer la commande ADD, SEARCH ou EXIT." << std::endl;
		getline(std::cin, cmd);
		if (cmd == "EXIT" || std::cin.eof())
			break ;
		else if (cmd == "SEARCH")
			phonebook.displayRepertory();
		else if (cmd == "ADD")
			phonebook.addContact();
		cmd.clear();
		std::cin.clear();
	}
	return (0);
}
