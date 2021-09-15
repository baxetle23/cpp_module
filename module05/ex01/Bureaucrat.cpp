#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name) {
	if (grade > 150)
		throw GradeTooHighException("Grade_BUREAUCRAT_Too_Low");
	if (grade < 1)
		throw GradeTooLowException("Grade_BUREAUCRAT_Too_High");
	grade_ = grade;
	std::cout << getName() << " has a grade " << getGrade() << " created" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat& other) :
	name_(other.getName()),
	grade_(other.getGrade()) {
}
const std::string& Bureaucrat::getName() const {
	return name_;
}
int Bureaucrat::getGrade() const {
	return grade_;
}
void Bureaucrat::setSign(const Form& form) const {
	std::cout << getName() << " signed " << form.getName() << std::endl;
}
Bureaucrat::~Bureaucrat(){
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
	out << bureaucrat.getName() << " has a grade " << bureaucrat.getGrade() << std::endl;
	return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string str) : m_error(str) {}
const char* Bureaucrat::GradeTooHighException::what() const throw() {return m_error.c_str();}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string str) : m_error(str) {}
const char* Bureaucrat::GradeTooLowException::what() const throw() {return m_error.c_str();}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}