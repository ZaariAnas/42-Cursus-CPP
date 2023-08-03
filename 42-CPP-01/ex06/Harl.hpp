/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 06:58:21 by azari             #+#    #+#             */
/*   Updated: 2023/08/03 08:54:31 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>

class Harl{

	// Harl();
	// ~Harl();
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:

	void	complain(std::string level);
};

typedef void (Harl::*t_comms) (void);

#endif