#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	if (this != &brain)
	{
		std::copy(brain.ideas, brain.ideas + 100, this->ideas);
	}
}

Brain& Brain::operator=(const Brain& brain)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &brain)
	{
		std::copy(brain.ideas, brain.ideas + 100, this->ideas);
	}
	return (*this);
}
