/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:30:38 by escastel          #+#    #+#             */
/*   Updated: 2024/06/07 15:23:42 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::~PhoneBook(){}
PhoneBook::PhoneBook(){
	_index = 0;
	_count = 0;
}

void	PhoneBook::addContact(){
	if (_count == 8)
	{
		std::cout << "PhoneBook is full.\nThe new contact will replace the oldest one" << std::endl;
		if (_index > 7)
			_index = 0;
	}
	_contacts[_index].saveContact();
	std::cout << "Contact has been saved" << std::endl;
	if (_count < 8)
		_count++;
	_index++;
}

void	PhoneBook::searchContact(){
	int	i;
	int	input_index;
	std::string input;

	if (_count == 0)
		std::cout << "PhoneBook is empty" << std::endl;
	else if (_count != 0)
	{
		_contacts->printSearch(1, 0);
		for (i = 0; i < _count; i++)
			_contacts[i].printSearch(0, i + 1);
		while (1)
		{
			std::cout << "Choose contact index: ";
			std::getline(std::cin, input);
			if (input[0] >= '1' && input[0] <= '8' && !input[1])
			{
				input_index = (input[0] - '1');
				if (input_index < _count)
				{
					_contacts[input_index].printContact();
					break ;
				}
				else
					std::cout << "Wrong input: Please, choose a correct index" << std::endl;
			}
			else
				std::cout << "Wrong input: Please, choose a correct index" << std::endl;
		}
	}
}

void	PhoneBook::pbSoftware(){
	std::string	input;
	
	while (1)
	{
		std::cout << "\n             »»—————- CHOOSE AN OPTION —————-««\n" << std::endl;
		std::cout << "             »»————————- ADD        ————————-««" << std::endl;
		std::cout << "             »»————————- SEARCH     ————————-««" << std::endl;
		std::cout << "             »»————————- EXIT       ————————-««\n" << std::endl;
		std::cout << "→ WRITE YOUR OPTION: ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break ;
		if (input == "ADD")
		{
			addContact();
			continue ;
		}
		if (input == "SEARCH")
		{
			searchContact();
			continue ;
		}
		else
			std::cout << "Wrong input: Please, choose a correct option" << std::endl;
	}
}