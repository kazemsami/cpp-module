#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool isSigned;
	const int gradeSignReq;
	const int gradeExReq;
	Form();
protected:
	Form(std::string name, int gradeSignReq, int gradeExReq);
public:
	virtual ~Form();
	Form(const Form& form);
	Form& operator=(const Form& form);
	const std::string getName() const;
	bool getSigned() const;
	int getGradeSignReq() const;
	int getGradeExReq() const;
	void beSigned(const Bureaucrat& bureaucrat);
	void execute(Bureaucrat const & executor) const;
	virtual void formAction() const = 0;
	class GradeTooHighException : public std::exception
	{
	private:
		std::string _msg;
	public:
		GradeTooHighException(const std::string& msg);
		~GradeTooHighException() throw();
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	private:
		std::string _msg;
	public:
		GradeTooLowException(const std::string& msg);
		~GradeTooLowException() throw();
		const char* what() const throw();
	}; 
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif