#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	std::cout << "Bureaucrat name and grade constructor called" << std::endl;
	if (grade < 1)
	{
		throw GradeTooHighException("The grade you put is too high");
	}
	else if (grade > 150)
	{
		throw GradeTooLowException("The grade you put is too low");
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	if (this != &bureaucrat)
	{
		this->grade = bureaucrat.getGrade();
	}
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	std::cout << "Bureaucrat assignment operator called" << std::endl;
	if (this != &bureaucrat)
	{
		this->grade = bureaucrat.getGrade();
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() + ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return os;
}

const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::signForm(Form& form)
{
	try {
		form.beSigned(*this);
		std::cout << this->name + " signed " + form.getName() << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << this->name + " couldn't sign " + form.getName() + " because " << ex.what() << std::endl;
	}
}

void Bureaucrat::incrementGrade()
{
	std::cout << "incrementGrade member function called" << std::endl;
	if (this->grade <= 1)
		throw GradeTooHighException("The grade is too high to increment");
	this->grade--;
}

void Bureaucrat::decrementGrade()
{
	std::cout << "decrementGrade member function called" << std::endl;
	if (this->grade >= 150)
		throw GradeTooLowException("The grade is too low to decrement");
	this->grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string& msg) : _msg(msg)
{
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return (_msg.c_str());
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string& msg) : _msg(msg)
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return (_msg.c_str());
}