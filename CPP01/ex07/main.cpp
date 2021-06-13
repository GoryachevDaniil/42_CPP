#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <memory>
#include <fstream>
# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

void	handle_error(std::string error){
	std::cout << COLOR_RED << error << COLOR_RESET <<std::endl;
	exit(0);
}

int main(int argc, char **argv){
	if(argc == 4){
		// if (argv[2] == "" || argv[3] == "")
			// handle_error("Empty string");
		std::string new_file_name = argv[1];
		new_file_name += ".replace";
		std::string arg_2 = argv[2];
		std::string arg_3 = argv[3];
		std::ifstream file;
		file.open(argv[1], std::ios::in);
		if (!file)
			handle_error("File could not be opened for reading!");
		std::ofstream replaced(new_file_name);
		while (file){
			std::string strInput;
			getline(file, strInput);
			for(int i = 0; i < (int)strInput.size(); i++)
				if (strInput[i] == argv[2][0])
					if (strInput.substr(i, arg_2.length()) == argv[2])
					{
						strInput.replace(i, arg_2.length(), argv[3]);
						i += arg_3.length() - 1;
					}
			if (file.eof())
				replaced << strInput;
			else
				replaced << strInput << std::endl;
		}
		file.close();
		std::cout << COLOR_GREEN "The replace has been made!" COLOR_RESET << std::endl;
	}
	else
		handle_error("Invalid number of arguments!");
	return (0);
}
