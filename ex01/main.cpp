/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:22:51 by qgimenez          #+#    #+#             */
/*   Updated: 2021/07/28 14:46:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"
#include "PhoneBook.hpp"
# include <iomanip>

int		main()
{
	std::string cmd;
	PhoneBook phonebook;

	while (cmd != "EXIT" && cmd != "ADD" && cmd != "SEARCH" && cmd != "EXIT")
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
