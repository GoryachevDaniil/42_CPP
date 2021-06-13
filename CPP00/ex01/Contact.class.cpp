#include "Contact.class.hpp"

std::string	ContactClass::m_field_name[11] = {
	"first name",
	"last_name",
	"nickname",
	"login",
    "postal_address",
    "email_address",
    "phone_number",
    "birthday_date",
    "favorite_meal",
    "underwear_color",
    "darkest_secret"
};

ContactClass::ContactClass(){
	for(int i = 0; i < 11; i++){
		this->m_fields[i] = "empty";
	}
};

int ContactClass::addContact()
{
	for(int i = 0; i < 11; i++){
		std::cout << ContactClass::m_field_name[i] << ": ";
		std::getline(std::cin, this->m_fields[i]);
	}
	for(int i = 0; i < 11; i++){
		if (this->m_fields[i] != "")
			return (1);
	}
	return (-1);
};


void ContactClass::previewContacts(int i, ContactClass contacts[8])
{
	ContactClass	preveiw_contacts[8];
	std::string		command;

	for(int j = 0; j < i; j++){
		for(int n = 0; n < 3; n++){
			preveiw_contacts[j].m_fields[n] = previewValue(contacts[j].m_fields[n]);
		}
	}
	if (i == 0)
	{
		std::cout << COLOR_RED"Phonebook is empty."COLOR_RESET << std::endl;
		return ;
	}
	else
	{
		std::cout << " ------------------------------------------- " << std::endl;
		std::cout << "|" << std::setw(10) << "Index" << "|" << std::setw(10) << "First name"
			<< "|" << std::setw(10) << "Last name" << "|" << std::setw(10) << "Nikname" << "|"<< std::endl;
		std::cout << " ------------------------------------------- " << std::endl;
		for(int j = 0; j < i; j++){
			std::cout << "|" << std::setw(10) << j + 1 << "|" << std::setw(10)
				<< preveiw_contacts[j].m_fields[0] << "|" << std::setw(10)
				<< preveiw_contacts[j].m_fields[1] << "|" << std::setw(10)
				<< preveiw_contacts[j].m_fields[2] << "|" << std::endl;
		}
	}

	while (std::cout << COLOR_MAGENTA"Enter index (1 to " << i << "):"COLOR_RESET << std::endl && std::getline(std::cin, command) && command != "RETURN")
	{
		if (!isdigit(command[0]))
			std::cout << COLOR_RED"Invalid index."COLOR_RESET << std::endl;
		else if (isdigit(command[0]) &&  (std::stoi(command) < 1 || std::stoi(command) > i))
			std::cout << COLOR_RED"Invalid index."COLOR_RESET << std::endl;
		else if (isdigit(command[0]) &&  (std::stoi(command) >= 1 || std::stoi(command) <= i))
		{
			showContacts(std::stoi(command), contacts);
			return ;
		}
		std::cout << COLOR_YELLOW"Enter RETURN to return or try again."COLOR_RESET << std::endl;
	}
};

std::string	ContactClass::previewValue(std::string value)
{
	std::string rezalt;
	if (value.size() > 10)
		rezalt = value.substr(0, 9) + ".";
	else
		return (value);
	return(rezalt);
};

void	ContactClass::showContacts(int count, ContactClass contacts[8])
{
	for(int i = 0; i < 11; i++){
		std::cout << ContactClass::m_field_name[i] << ": " << contacts[count - 1].m_fields[i] << std::endl;
	}
};
