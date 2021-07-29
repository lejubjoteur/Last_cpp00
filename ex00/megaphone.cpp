/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 10:10:05 by qgimenez          #+#    #+#             */
/*   Updated: 2021/07/28 12:00:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	upperString(char *str) {
	int i = -1;

	while (str[++i])
		str[i] = toupper(str[i]);
	std::string s = str;
	return s;
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argv[++i])
	{
		if (i > 1)
			std::cout << " ";
		std::cout << upperString(argv[i]);
	}
	std::cout << "" << std::endl;
	return 0;
}
