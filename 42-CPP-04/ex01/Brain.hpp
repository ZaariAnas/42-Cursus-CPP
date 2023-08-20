/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:09:23 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 09:47:07 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{

	std::string ideas[100];
public:
	Brain();
	~Brain();
	Brain(Brain &other);
	Brain	&operator=(Brain &other);
};

#endif