/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:14:36 by azari             #+#    #+#             */
/*   Updated: 2023/08/18 06:57:31 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CPP
# define FRAGTRAP_CPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap{

public:

	~FragTrap();
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &other);
	void	highFivesGuys(void);
	FragTrap &operator=(FragTrap &other);
};

#endif