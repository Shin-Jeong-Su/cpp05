#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__

#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm: public AForm{
	private:
		std::string	_target;
	public:
				RobotomyRequestForm();
		virtual	~RobotomyRequestForm();
				RobotomyRequestForm(std::string target);
				RobotomyRequestForm(const RobotomyRequestForm& rhs);

		virtual void	execute(const Bureaucrat& executor) const;

		RobotomyRequestForm&	operator=(const RobotomyRequestForm& rhs);
};
#endif