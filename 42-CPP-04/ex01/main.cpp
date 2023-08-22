/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azari <azari@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:29:11 by azari             #+#    #+#             */
/*   Updated: 2023/08/22 11:01:28 by azari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main( void )
{
	std::cout << "\n\033[1;34m-----------[ Basic Dog ]-----------\033[0m\n" << std::endl;
    Dog basic;
    {Dog tmp = basic;}
	std::cout << "\n\033[1;34m-----------[ Animal ]-----------\033[0m\n" << std::endl;
	const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	std::cout << "\n\033[1;34m> Animal Desctruction\033[0m\n" << std::endl;
	for ( int i = 0; i < 4; i++ )
	{
		std::cout << "\033[1;34m>>>> \033[0m";
        delete animals[i];
    }
	// std::cout << "\n\033[1;34m-----------[ WrongAnimal ]-----------\033[0m\n" << std::endl;
	// const WrongAnimal* animals2[4] = { new WrongCat(), new WrongCat(), new WrongCat(), new WrongCat() };
	// std::cout << "\n\033[1;34m> WrongAnimal Desctruction\033[0m\n" << std::endl;
	// for ( int i = 0; i < 4; i++ )
	// {
	// 	std::cout << "\033[1;34m>>>> \033[0m";
    //     delete animals2[i];
    // }
	std::cout << "\n\033[1;34m> Basic Dog Desctruction\033[0m\n" << std::endl;
	return 0;
}

// class A {
// 	std::string name;
//     virtual void f(){
// 		std::cout << "foo";
// 	}
// };

// class B {
// 	std::string name;
//     void f(){
// 		std::cout << "foo";
// 	}
// };

// int main()
// {
// 	void *P;
// 	std::string S;
//     std::cout << "Size of String: " << sizeof(S) << " bytes" << std::endl;
//     std::cout << "Size of pointer: " << sizeof(P) << " bytes" << std::endl;
//     std::cout << "Size of class A: " << sizeof(A) << " bytes" << std::endl;
//     std::cout << "Size of class B: " << sizeof(B) << " bytes" << std::endl;

//     return 0;
// }

// class A {
// public:
// 	A(){
// 		std::cout << "Constructor B"<< std::endl;
// 	}
//     virtual ~A(){
// 		std::cout << "Destructor A"<< std::endl;
// 	}
// };

// class B : public A{
// public:
// 	B(){
// 		std::cout << "Constructor B"<< std::endl;
// 	}
//     ~B(){
// 		std::cout << "Destructor B"<< std::endl;
// 	}
// };

// class C : public B{
// public:
// 	C(){
// 		std::cout << "Constructor C" << std::endl;
// 	};
//     ~C(){
// 		std::cout << "Destructor C" << std::endl;
// 	}
// };


// int main()
// {
// 	B* c = new C();
// 	delete c;
//     return 0;
// }