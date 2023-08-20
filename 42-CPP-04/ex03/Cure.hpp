/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:48:00 by azari             #+#    #+#             */
/*   Updated: 2023/08/20 16:48:01 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();

        Cure( Cure const & );
        Cure& operator=( Cure const & );

        virtual AMateria*   clone() const;
        virtual void        use(ICharacter& target);
};

#endif // CURE_HPP