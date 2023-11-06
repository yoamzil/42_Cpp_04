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

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Dog *basic  = new Dog();
	// {
	// Dog *tmp = new Dog(*basic);
	// delete basic;
	// delete tmp;
	// }

	int	count = 1;
	Animal *animalAarry[count];

	for (int i = 0; i < (count / 2); i++)
	{
		animalAarry[i] = new Cat();
	}
	for (int i = (count / 2); i < count; i++)
	{
		animalAarry[i] = new Dog();
	}
	for (int i = 0; i < count; i++)
	{
		delete animalAarry[i];
	}
	return (0);
}
