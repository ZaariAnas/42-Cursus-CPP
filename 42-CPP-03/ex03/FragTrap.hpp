/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:14:36 by azari             #+#    #+#             */
/*   Updated: 2023/08/17 09:41:20 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CPP
# define FRAGTRAP_CPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: virtual public ClapTrap{

public:

	~FragTrap();
	FragTrap();
	FragTrap(std::string name);
	void	attack(const std::string& name);
	void	highFivesGuys(void);
};

#endif