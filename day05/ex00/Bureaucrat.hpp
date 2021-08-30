#pragma once
#include <string>
#include <iostream>

class Bureaucrat
{
private:
        std::string _name;
        int _grade;
public:
    Bureaucrat(std::string const &name = "Kekw", int grade = 150);
    Bureaucrat(Bureaucrat const &b);
    Bureaucrat &operator=(Bureaucrat const &b);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;

    void incGrade();
    void decGrade();
    
    class GradeTooHighException: public std::exception
    {
        public:
            GradeTooHighException(){}
            virtual ~GradeTooHighException() throw(){}
            virtual const char* what() const throw();
    };

    class GradeTooLowException: public std::exception
    {
        public:
            GradeTooLowException() {}
            virtual ~GradeTooLowException() throw(){}
            virtual const char* what() const throw();
    };

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &b);