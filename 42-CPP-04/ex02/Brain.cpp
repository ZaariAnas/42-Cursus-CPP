#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain::Brain(Brain &other)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = other;
}

Brain	&Brain::operator=(Brain &other)
{
	if (this != &other)
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}
