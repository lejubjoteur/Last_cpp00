/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:00:20 by qgimenez          #+#    #+#             */
/*   Updated: 2021/07/28 16:52:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::cout.width(10);
	std::cout.fill(' ');
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
	std::cout << "Prenom :" << _firstName << std::endl;
	std::cout << "Nom :" << _lastName << std::endl;
	std::cout << "Surnom :" << _nickName << std::endl;
	std::cout << "Telephone :" << _phoneNumber << std::endl;
	std::cout << "Secret le plus sombre :" << _darkestSecret << std::endl;
}