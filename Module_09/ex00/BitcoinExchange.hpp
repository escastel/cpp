/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 12:34:42 by escastel          #+#    #+#             */
/*   Updated: 2025/01/08 16:59:55 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <math.h>
# include <map>

class BitcoinExchange
{
	private:
			std::map<std::string, float>	data;
			BitcoinExchange();
			BitcoinExchange(const BitcoinExchange &src);
			BitcoinExchange& operator = (const BitcoinExchange &src);
	public:
			BitcoinExchange(std::string input);
			~BitcoinExchange();
			void	saveData();
			void	manageInput(std::string input);
			void	printResult(std::string	str);
};

#endif