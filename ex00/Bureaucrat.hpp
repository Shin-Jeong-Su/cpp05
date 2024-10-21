#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <string>
#include <iostream>

class Bureaucrat{
	private:
		std::string		_name;
		int	_grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& rhs);
		~Bureaucrat();
		std::string&	getName();
		int				getGrade();
		Bureaucrat&	operator=(const Bureaucrat& rhs);
};
std::iostream&	operator<<
#endif