/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabusitt <kabusitt@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:05:52 by kabusitt          #+#    #+#             */
/*   Updated: 2022/02/28 18:13:56 by kabusitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->max_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::search_phonebook()
{
	if (this->max_index > 0)
		while (1)
		{
			std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
			std::string input;
			for (int i = 0; i < this->max_index; i++)
			{
				this->contacts[i].print_preview(i + 1);
			}
			std::getline(std::cin, input);
			std::stringstream tmp(input);
			int index = 0;
			tmp >> index;
			if (index <= 0 || index > this->max_index)
			{
				std::cout << "Wrong input, please try again." << std::endl;
				continue;
			}
			this->contacts[index - 1].print_contact();
			break;
		}
	else
		std::cout << "No contacts found, please add a contact and try again." << std::endl;
}

void PhoneBook::add_contact()
{
	if (this->index > 7)
		this->index = 0;
	this->contacts[this->index].set_contact();
	if (this->max_index < 8)
		this->max_index++;
	this->index++;
}