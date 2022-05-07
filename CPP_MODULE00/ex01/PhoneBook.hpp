/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabusitt <kabusitt@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:06:43 by kabusitt          #+#    #+#             */
/*   Updated: 2022/02/28 17:49:45 by kabusitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <sstream>
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int index;
	int max_index;
public:
	PhoneBook();
	~PhoneBook();
	void search_phonebook();
	void add_contact();
};

#endif