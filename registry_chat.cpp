#include <iostream>
#include "registry_chat.h"
using namespace std;


shared_ptr<registry_chat> registry_chat::getUserByLogin(const string& login) const
{
	for (auto& user : users_)
	{
		if (login == user.getUserLogin())
			return make_shared<registry_chat>(user);
	}
	return nullptr;
}

shared_ptr<registry_chat> registry_chat::getUserByName(const string& name) const
{
	for (auto& user : users_)
	{
		if (name == user.getUserName())
			return make_shared<registry_chat>(user);
	}
	return nullptr;
}

void registry_chat::reg_user()
{


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

	cout << "password protection: enter at least 8 characters";
	cout << "enter your password: " << endl;
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
	registry_chat user = registry_chat(login, password, name);
	cout << "registration was successful!"<<endl;
	users_.push_back(user);
	currentUser_ = make_shared<registry_chat>(user);

}
