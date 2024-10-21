#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__

#include "AForm.hpp"
#include <string>

class RobotomyRequestForm: public AForm{
	private:
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& rhs);

		void	operator=(const RobotomyRequestForm& rhs);
};
#endif