#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gradeSignReq, int gradeExReq) : name(name), isSigned(false), gradeSignReq(gradeSignReq), gradeExReq(gradeExReq)
{
	std::cout << "Form name, sign grade and execute grade constructor called" << std::endl;
	if (gradeSignReq < 1 || gradeExReq < 1)
	{
		throw GradeTooHighException("The grade requirements you put is too high");
	}
	else if (gradeSignReq > 150 || gradeExReq > 150)
	{
		throw GradeTooLowException("The grade requirements you put is too low");
	}
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form::Form(const Form& form) : name(form.name), isSigned(form.isSigned), gradeSignReq(form.gradeSignReq), gradeExReq(form.gradeExReq)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& form)
{
	std::cout << "Form assignment operator called" << std::endl;
	if (this != &form)
	{
		this->isSigned = form.getSigned();
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	os << form.getName() + ", form is " + (form.getSigned() ? "signed" : "not signed")  << " and requires grade " << form.getGradeSignReq() << " to sign and requires grade " << form.getGradeExReq() << " to execute.";
	return os;
}

const std::string Form::getName() const
{
	return (this->name);
}

bool Form::getSigned() const
{
	return (this->isSigned);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeSignReq)
		throw GradeTooLowException("Grade is too low to sign the form");
	this->isSigned = true;
}

int Form::getGradeSignReq() const
{
	return (this->gradeSignReq);
}

int Form::getGradeExReq() const
{
	return (this->gradeExReq);
}

Form::GradeTooHighException::GradeTooHighException(const std::string& msg) : _msg(msg)
{
}

const char* Form::GradeTooHighException::what() const throw()
{
	return (_msg.c_str());
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
}

Form::GradeTooLowException::GradeTooLowException(const std::string& msg) : _msg(msg)
{
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
}

const char* Form::GradeTooLowException::what() const throw()
{
	return (_msg.c_str());
}