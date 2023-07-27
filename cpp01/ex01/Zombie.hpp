/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:27:30 by azari             #+#    #+#             */
/*   Updated: 2023/07/27 10:10:27 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie{

	std::string name;

public:

	Zombie();
	~Zombie();
	Zombie(std::string name);
	void	setName(std::string name);
	void	announce(void);
};

Zombie	*zombieHorde(int n, std::string name);

#endif