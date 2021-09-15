#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& name, int gts, int gte) :
	signed_(false), name_(name), grade_to_sign_(gts), grade_to_execute(gte) {
	if (grade_to_execute > 150 || grade_to_sign_ > 150)
		throw GradeTooHighException("Grade_FORM_Too_Low");
	if (grade_to_execute < 1 || grade_to_sign_ < 1)
		throw GradeTooLowException("Grade_FROM_Too_High");
}
Form::Form(const Form& other) :
	signed_(false), name_(other.getName()), grade_to_sign_(other.getGradeToSign()),
	grade_to_execute(other. getGradeToExecute()) {
}
Form::~Form() {
}
bool Form::isSigned() const {
	return signed_;
}
void Form::Action() const {
	
}
std::string Form::getName() const {
	return name_;
}
int Form::getGradeToSign() const {
	return grade_to_sign_;
}
int Form::getGradeToExecute() const {
	return grade_to_execute;
}
void Form::beSigned(const Bureaucrat& bureaucrat) {
	if (isSigned()) {
		std::cout << "Form " << getName() << " has been signed" << std::endl;
		return ;
	}
	if (bureaucrat.getGrade() > getGradeToSign()) {
		throw GradeTooHighException("Grade_BUREAUCRAT_Too_Low_For_Signed_FORM");
	}
	signed_ = true;
	bureaucrat.setSign(*this);
}
void Form::execute(const Bureaucrat& bureaucrat) {
	if (!isSigned() || bureaucrat.getGrade() > getGradeToExecute()) {
		throw GradeTooLowException("Grade_BUREAUCRAT_Too_Low_For_EXEC_FORM_or_FORM_NOT_SIGNED");
	}
	bureaucrat.executeForm(*this);
	Action();
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
	out << "Form a \"" << form.getName() << "\" has grade to sign " << form.getGradeToSign()
	<< " and has grade to execute " << form.getGradeToExecute() << ". Is form signed: " << std::boolalpha << form.isSigned() << std::endl; 
	return out;
}

Form::GradeTooHighException::GradeTooHighException(std::string str) : m_error(str) {}
const char* Form::GradeTooHighException::what() const throw() {return m_error.c_str();}
Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooLowException::GradeTooLowException(std::string str) : m_error(str) {}
const char* Form::GradeTooLowException::what() const throw() {return m_error.c_str();}
Form::GradeTooLowException::~GradeTooLowException() throw() {}

