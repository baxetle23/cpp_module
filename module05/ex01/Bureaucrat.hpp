#pragma once
#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat {
private:
	const std::string name_;
	int grade_;
	Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& other);
public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat& other);
	const std::string& getName() const;
	int getGrade() const;
	void setSign(const Form& form) const;
	~Bureaucrat();

	class GradeTooHighException : public std::exception {
	private:
		std::string m_error;
	public:
		GradeTooHighException(std::string str);
		const char* what() const throw();
		~GradeTooHighException() throw();
	};
	class GradeTooLowException : public std::exception {
	private:
		std::string m_error;
	public:
		GradeTooLowException(std::string str);
		const char* what() const throw();
		~GradeTooLowException() throw();
	};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);