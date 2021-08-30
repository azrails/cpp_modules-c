#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"



int	main(void) {

	srand(time(0));

	try
	{
		Bureaucrat				bob("Robert", 24);

		PresidentialPardonForm	pp("Larry");
		std::cout << pp << std::endl;
		RobotomyRequestForm		rr("Henry");
		std::cout << rr << std::endl;
		ShrubberyCreationForm	sc("Living_room");
		std::cout << sc << std::endl;

		bob.signForm(pp);
		bob.executeForm(pp);

		bob.signForm(rr);
		bob.executeForm(rr);

		bob.signForm(sc);
		bob.executeForm(sc);
	}
	catch (std::exception& e) {

		std::cerr << "Error : " << e.what() << std::endl;
	}



	return 0;
}