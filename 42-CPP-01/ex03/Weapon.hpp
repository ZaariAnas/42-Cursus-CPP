/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:27:31 by azari             #+#    #+#             */
/*   Updated: 2023/08/01 13:46:35 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>

class Weapon{
	
	std::string _type;	
public:
	
	Weapon(std::string);
	~Weapon();
	const std::string &getType(void) const;
	void	setType(std::string type);
};

#endif