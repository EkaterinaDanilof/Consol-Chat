#include <iostream>
#include <locale.h> 
#include <cstdlib>
//#include "chat_menu.h"
//#include "chat_one.h"
//#include "chat_all.h"
//#include "enter_chat.h"
#include "registry_chat.h"
#include "registry_chat.cpp"
using namespace std;

// �������� ������� ���� 1

int main()
{
	setlocale(LC_ALL, "Russian"); // ����� ������� �����
	system("chcp 1251"); // ����������� ��������� �������

	int x = 0;
	
	cout << " " << endl;
	cout << "Summary Homework Topic 1" << endl;
	//cout << "�������� ������� ���� 1" << endl;
	cout << " " << endl;
	cout << "This is chat." << endl;
	cout << " " << endl;

	do
	{
		cout << "------------------------------------------- " << endl;
		cout << "Registry : Input 1 ) ����������� , ������� 1" << endl;
		cout << "Enter    : Input 2 ) ���� � chat , ������� 2" << endl;
		cout << "Chat     : Input 3 ) ������ chat , ������� 3" << endl;
		cout << endl;
		cout << "Exit     : Input 7 ) ����� �� ���������    7" << endl;
		cout << "------------------------------------------- " << endl;


		//cout << "������� " << endl;
		cin >> x;
		

		switch (x)
		case 1:
		{
			{
				//�����������;
				cout << "registry_chat" << endl;
				cout << " " << endl;
				//��� ����� ���� �������� ������. ���� �������� ������ � registry_chat, �� �������� ������.
				vector<registry_chat> users_;
				try {
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
				}
				catch (exception& e)
					{
					cout << e.what();
					}
				break;
			}

		case 2:
		{
			//���� � chat
			//enter_chat();
			cout << "enter_chat" << endl;
			cout << " " << endl;
			break;
		}
		case 3:
		{
			//������ ���� � chat
			cout << "just_chat" << endl;
			cout << " " << endl;
			//chat_menu();
			//just_chat;
			break;
		}

		case 7:
		{

		}
		}

	} while (x != '7');
	cout << " " << endl;
	cout << " Have a nice day. See you! " << endl;

	return 0;
	
}
