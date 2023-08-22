/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:45:13 by azari             #+#    #+#             */
/*   Updated: 2023/08/22 13:24:38 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materias[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource &other);
		MateriaSource	&operator=(MateriaSource &other);
		void	learnMateria(AMateria *materia);
		AMateria	*createMateria(std::string const &type);
};
