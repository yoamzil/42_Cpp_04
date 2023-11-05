/* ************************************************************************************** */
/*																						  */
/*                                                						d8b		888       */
/*                                                  					Y8P		888       */
/*                                                      						888       */
/*		888  888	  .d88b.   	8888b.  	88888b.d88b.	88888888	888 	888       */
/*		888  888 	d88""88b     	"88b 	888 "888 "88b    	d88P 	888 	888       */
/*		888  888 	888  888 	.d888888 	888  888  888		d88P   	888 	888       */
/*		Y88b 888 	Y88..88P 	888  888 	888  888  888	  d88P    	888 	888       */
/*		"Y88888  	"Y88P"  	"Y888888 	888  888  888	88888888 	888 	888       */
/*	  		 888																          */
/*		Y8b d88P																          */
/*		"Y88P"									By: yoamzil <yoamzil@student.1337.ma>     */
/*																						  */
/* ************************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";

    pointer = new Brain();
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete pointer;
}

Cat::Cat(Cat const &original)
{
    std::cout << "Cat copy constructor called" << std::endl;
	
    *this = original;
}

Cat  &Cat::operator=(Cat const &original)
{
    if (this != &original)
    {
		delete pointer;
		this->pointer = new Brain(*original.pointer);
        this->type = original.type;
    }
    return (*this);
}

// std::ostream    &Cat::operator<<(std::ostream &out, Cat &cat)
// {
//     out << cat.getType;
// }

void    Cat::makeSound() const
{
    std::cout << "Meeeowww" << std::endl;
}