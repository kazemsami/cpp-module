/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabusitt <kabusitt@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 15:09:57 by kabusitt          #+#    #+#             */
/*   Updated: 2022/02/28 17:26:13 by kabusitt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class Contact
{
private:
	std::string contact[5];
	std::string info[5];
public:
	Contact();
	~Contact();
	void set_contact();
	void print_preview(int index);
	void print_contact();
};

#endif
