/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:37:38 by qgimenez          #+#    #+#             */
/*   Updated: 2021/07/28 12:05:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	public:

	Contact();
	Contact(std::string firstName, std::string lastName, std::string nickName,
	std::string phoneNumber, std::string darkestSecret);
	~Contact();
	void afficher();
	void moreInfo();

	private:

	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif