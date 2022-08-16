#include "Bureaucrat.hpp"

#include <string>
#include <iostream>

Bureaucrat::Bureaucrat( void )
: _name("X"), _grade(150) {
	std::cout << "default Bureaucrat " << _name << " with level " << _grade << " constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& ref ) {
	std::cout << "Bureaucrat copy contructor called " << _name << std::endl;
	*this = ref;
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& ref ) {
	std::cout << "illigal Bureaucrat copy assignment called" << std::endl;
	(void)ref;
	return (*this);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "default Bureaucrat " << _name << " destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
: _name(name), _grade(grade) {
	if (_grade < 1)
		throw (GradeTooHighException());
	else if (_grade > 150)
		throw (GradeTooLowException());
	std::cout << "default Bureaucrat " << _name << " with level " << _grade << " name/grade constructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &ref) {
	os << ref.getName() << ", bureaucrat grade " << ref.getGrade();
	return os;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
	std::cout << "Grade toooo high exception thrown in yo face" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
	std::cout << "Grade toooo low exception thrown in yo face" << std::endl;
}

void	Bureaucrat::increment() {
	this->_grade--;
	if (_grade < 1)
		throw (GradeTooHighException());
}

void	Bureaucrat::decrement() {
	this->_grade++;
	if (_grade > 150)
		throw (GradeTooLowException());
}

std::string	Bureaucrat::getName() const{
	return(this->_name);
}

int	Bureaucrat::getGrade() const{
	return(this->_grade);
}
