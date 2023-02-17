#include "registry_chat.h"
#include <iostream>
//#include <locale.h> 
//#include <cstdlib>
#include <string>
//#include "chat_menu.h"
using namespace std;


/*void registry_chat::reg_user()
{

	vector<registry_chat> users_;
	string login, password, name;
	cout << "enter your login: ";
	cin >> login;

	for (auto& user : users_)
	{
		if (login == user.getUserLogin())
		{
			throw LoginErr();
		}
	}

	cout << "enter your password: ";
	cin >> password;
	if (size(password) < 8)
	{
		throw PassErr();
	}
	cout << "enter your name: ";
	cin >> name;
	for (auto& user : users_)
	{
		if (name == user.getUserName())
		{
			throw NameErr();
		}
	}
	registry_chat* user = new registry_chat(login, password, name);
	cout << "registration was successful!";


}*/

