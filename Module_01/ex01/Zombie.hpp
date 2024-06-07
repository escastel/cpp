/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:11:32 by escastel          #+#    #+#             */
/*   Updated: 2024/06/07 18:13:20 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie{
	
	private:
			std::string	name;
	public:
			Zombie(std::string name);
			Zombie();
			~Zombie();
			void	announce(void);
			void	setName(std::string name);
};

Zombie* zombieHorde(int N,std::string name);

#endif