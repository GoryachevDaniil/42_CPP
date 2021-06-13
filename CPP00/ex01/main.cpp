#include "Contact.class.hpp"



int main(void)
{
	int i = 0;
	ContactClass	contacts[8];
	std::string		command;
	while(std::cout << COLOR_YELLOW"Enter ADD, SEARCH of EXIT:"COLOR_RESET << std::endl &&std::getline(std::cin, command))
	{
		if (std::cin.eof())
			exit(-1);
		if ("ADD" == command)
		{
			if(i < 8)
			{
				if (contacts[i++].addContact() == -1)
				{
					std::cout << COLOR_RED"All fields are empty."COLOR_RESET << std::endl;
					i--;
				}
				else
					std::cout << COLOR_GREEN"Contact added."COLOR_RESET << std::endl;
			}
			else
				std::cout<< COLOR_RED"Phonebook is full"COLOR_RESET <<std::endl;
		}
		else if ("SEARCH" == command)
			contacts->previewContacts(i, contacts);
		else if ("EXIT" == command)
			exit (0);
		else
			std::cout<< COLOR_RED"Unknown command. Please try again."COLOR_RESET <<std::endl;
	}
	return (0);
}
