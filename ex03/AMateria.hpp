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

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
    public :
        AMateria();
        ~AMateria();
        AMateria(AMateria const &original);
        AMateria    &operator=(AMateria const &original);

        AMateria(std::string const &type);
        
        std::string const &getType() const; // Returns the materia type
        
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
};

#endif