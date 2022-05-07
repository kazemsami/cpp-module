/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabusitt <kabusitt@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:37:14 by kabusitt          #+#    #+#             */
/*   Updated: 2022/02/28 17:43:25 by kabusitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phonebook;
	while (1)
	{
		std::string input;
		std::cout << "Type one of these commands - SEARCH, ADD or EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "SEARCH")
			phonebook.search_phonebook();
		else if (input == "ADD")
			phonebook.add_contact();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Wrong command, please try again." << std::endl;
	}
	return (0);
}