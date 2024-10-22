#include <string>
#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
:AForm("ShrubberyCreationForm", 145, 137),_target("no target"){

}
ShrubberyCreationForm::~ShrubberyCreationForm(){

}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
:AForm("ShrubberyCreationForm", 145, 137),_target(target){

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs)
:AForm("ShrubberyCreationForm", 145, 137),_target(rhs._target){

}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const{
	checkRequiremenetsForExecuting(executor);
	std::ofstream	file;
	if (!file){
		throw(std::runtime_error("Error: Open file in ShrubberyCreationForm executing\n"));
	}
	file.open(_target+"_shrubbery");
	file<<"            .        +          .      .          .\n";
	file<<"     .            _        .                    .\n";
	file<<" ,              /;-._,-.____        ,-----.__\n";
	file<<"((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n";
	file<<" `                 \\   _|`\"=:_::.`.);  \\ __/ /\n";
	file<<"                     ,    `./  \\:. `.   )==-'  .\n";
	file<<"   .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n";
	file<<".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n";
	file<<"      .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n";
	file<<" .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n";
	file<<"  `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n";
	file<<"             \\:  `  X` _| _,\\/'   .-'\n";
	file<<".               \":._:`\\____  /:'  /      .           .\n";
	file<<"                   \\::.  :\\/:'  /              +\n";
	file<<"  .                 `.:.  /:'  }      .\n";
	file<<"          .           ):_(:;   \\           .\n";
	file<<"                     /:. _/ ,  |\n";
	file<<"                  . (|::.     ,`                  .\n";
	file<<"    .                |::.    {\\n";
	file<<"                     |::.\\  \\ `.\n";
	file<<"                     |:::(\\    |\n";
	file<<"             O       |:::/{ }  |                  (o\n";
	file<<"              )  ___/#\\::`/ (O \"==._____   O, (O  /`\n";
	file<<"         ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n";
	file<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\W~~~~~~~~~~~~\\|/~~\n";
	file.close();
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs){
	if (&rhs == this){
		return (*this);
	}
	_target = rhs._target;
	return (*this);
}