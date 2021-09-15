#pragma once
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form {
private:
	bool signed_;
	const std::string name_;
	const int grade_to_sign_;
	const int grade_to_execute;
	Form();
	virtual void Action() const = 0;
public:
	Form& operator=(const Form&);
	Form(const std::string& name, int, int);
	Form(const Form&);
	virtual ~Form() = 0;
	bool isSigned() const;
	std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(const Bureaucrat& bureaucrat);
	void execute(const Bureaucrat& bureaucrat);

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

std::ostream& operator<<(std::ostream& out, const Form&);