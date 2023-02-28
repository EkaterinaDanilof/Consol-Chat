#pragma once
#include <string>
#include <exception>
#include<memory>
#include <vector>
using namespace std;

class LoginErr : public exception
{
	const char* what() const /*noexception*/ override { return "ERROR! This login already exists"; }
};
class NameErr :public exception
{
	const char* what() const /*noexception*/ override { return "ERROR! This name already exists"; }
};
class PassErr :public exception
{
	const char* what() const /*noexception*/ override { return "ERROR! Too short password"; }
};

class registry_chat
{
private:
	const string login_;
	string password_;
	string name_;
	vector<registry_chat> users_;
	shared_ptr<registry_chat> currentUser_ = nullptr;
public:
	
	registry_chat() {};
	registry_chat(const string& login, const string& password, const string& name) : login_(login), password_(password), name_(name) {}

	const string& getUserLogin() const { return login_; }

	const string getUserPassword() const { return password_; }
	void setUserPassword(const string& password) { password_ = password; }

	const string getUserName() const { return name_; }
	void setUserName(const string& name) { name_ = name; }
	void reg_user();
	shared_ptr<registry_chat> getUserByLogin(const string& login) const;
	shared_ptr<registry_chat> getUserByName(const string& name) const;
	

};


