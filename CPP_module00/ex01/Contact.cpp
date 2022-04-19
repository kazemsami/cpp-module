/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabusitt <kabusitt@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:28:10 by kabusitt          #+#    #+#             */
/*   Updated: 2022/02/28 17:59:30 by kabusitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->info[0] = "First name";
	this->info[1] = "Last name";
	this->info[2] = "Nickname";
	this->info[3] = "Phone number";
	this->info[4] = "Darkest secret";
}

Contact::~Contact()
{
}

void Contact::print_preview(int index)
{
	std::cout << '|' << std::setw(10) << index;
	for (int i = 0; i < 3; i++)
	{
		std::cout << '|';
		if (this->contact[i].length() > 10)
			std::cout << this->contact[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->contact[i];
	}
	std::cout << '|' << std::endl;
}

void Contact::set_contact()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter a " << this->info[i] << ": ";
		std::getline(std::cin, this->contact[i]);
		if (this->contact[i].empty())
		{
			std::cout << "Field can't be empty! please try again!" << std::endl;
			--i;
		}
	}
}

void Contact::print_contact()
{
	for (int i = 0; i < 5; i++)
		std::cout << this->info[i] << ": " << this->contact[i] << std::endl;
}