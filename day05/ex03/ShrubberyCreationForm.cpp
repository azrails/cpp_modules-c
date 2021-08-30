#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137, target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &s): Form(s)
{
    *this = s;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &s)
{
    if (this != &s)
    {
        Form::operator=(s);
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::action() const
{
std::ofstream fo(this->getTarget() + "_shrubbery");
fo << "             /\\               " << std::endl;
fo << "            <  >              " << std::endl;
fo << "             \\/               " << std::endl;
fo << "             /\\               " << std::endl;
fo << "            /  \\              " << std::endl;
fo << "           /++++\\             " << std::endl;
fo << "          /  ()  \\            " << std::endl;
fo << "          /      \\            " << std::endl;
fo << "         /~`~`~`~`\\           " << std::endl;
fo << "        /  ()  ()  \\          " << std::endl;
fo << "        /          \\          " << std::endl;
fo << "       /*&*&*&*&*&*&\\         " << std::endl;
fo << "      /  ()  ()  ()  \\        " << std::endl;
fo << "      /              \\        " << std::endl;
fo << "     /++++++++++++++++\\       " << std::endl;
fo << "    /  ()  ()  ()  ()  \\      " << std::endl;
fo << "    /                  \\      " << std::endl;
fo << "   /~`~`~`~`~`~`~`~`~`~`\\     " << std::endl;
fo << "  /  ()  ()  ()  ()  ()  \\    " << std::endl;
fo << "  /*&*&*&*&*&*&*&*&*&*&*&\\    " << std::endl;
fo << " /                        \\   " << std::endl;
fo << "/,.,.,.,.,.,.,.,.,.,.,.,.,.\\  " << std::endl;
fo << "           |   |              " << std::endl;
fo << "          |`````|             " << std::endl;
fo << "          \\_____/             " << std::endl;
fo.close();
}