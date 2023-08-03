/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 07:45:47 by azari             #+#    #+#             */
/*   Updated: 2023/07/27 09:25:57 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie{

	std::string name;

public:

	~Zombie();
	Zombie(std::string name);
	void	announce(void);
};

Zombie	*newZombie(std::string n);
void randomChump(std::string name);
#endif