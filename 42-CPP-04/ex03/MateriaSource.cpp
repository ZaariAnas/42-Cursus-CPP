/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:06:19 by azari             #+#    #+#             */
/*   Updated: 2023/08/22 14:32:17 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
	// std::cout << "A New MateriaSource Was Born" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->materias[i])
			delete this->materias[i];
	// std::cout << "A MateriaSource Was Destroyed" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource& other)
{
	// std::cout << "Copying an MateriaSource" << std::endl;
	*this = other;
}


MateriaSource &MateriaSource::operator=(MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->materias[i])
			{
				delete this->materias[i];
				this->materias[i] = NULL;
			}
			this->materias[i] = other.materias[i]->clone();
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = materia;
			std::cout << this->materias[i]->getType() << " Materia learned " << std::endl;
			break;
		}
	}	
	if (i > 3)	
		std::cout << materia->getType() << " Materia not learned" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] && this->materias[i]->getType() == (type))
			return this->materias[i]->clone();
	}
	return 0;
}
