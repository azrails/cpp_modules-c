#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

#include <cstdlib> // srand
#include <ctime> // time
#include <iostream> // cout


int	main(void) {

	srand(time(0));

	Bureaucrat	bob("Robert", 1);
	Intern		someRandomIntern;
	Form*		form;

	{
		form = someRandomIntern.makeForm("presidential pardon", "Joe Mama");
		if (form != NULL) {
			bob.signForm(*form);
			bob.executeForm(*form);
		}
		std::cout << "-----------" << std::endl;
	}


	{
		form = someRandomIntern.makeForm("shrubbery creation", "Bedroom");
		if (form != NULL) {
			bob.signForm(*form);
			bob.executeForm(*form);
		}
		std::cout << "-----------" << std::endl;
	}


	{
		form = someRandomIntern.makeForm("robotomy request", "Bendy");
		if (form != NULL) {
			bob.signForm(*form);
			bob.executeForm(*form);
		}
		std::cout << "-----------" << std::endl;
	}


	{
		form = someRandomIntern.makeForm("lol idk", "Jafar");
		if (form != NULL) {
			bob.signForm(*form);
			bob.executeForm(*form);
		}
	}

	return 0;
}