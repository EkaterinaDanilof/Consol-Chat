#include <iostream>
#include "registry_chat.h"

using namespace std;

// Итоговое задание Блок 1

int main()
{
	setlocale(LC_ALL, "Russian"); // задаём русский текст
	
	bool start = true;
	int x = 0;

	cout << " " << endl;
	cout << "Summary Homework Topic 1" << endl;
	//cout << "Итоговое задание Блок 1" << endl;
	cout << " " << endl;
	cout << "This is chat." << endl;
	cout << " " << endl;

	do
	{
		cout << "------------------------------------------- " << endl;
		cout << "Registry : Input 1 ) Регистрация , введите 1" << endl;
		cout << "Enter    : Input 2 ) Личные сообщения , введите 2" << endl;
		cout << "Chat     : Input 3 ) Общий чат , введите 3" << endl;
		cout << endl;
		cout << "Exit     : Input 7 ) Выход из программы    7" << endl;
		cout << "------------------------------------------- " << endl;


		//cout << "Введите " << endl;
		cin >> x;


		switch (x)
		case 1:
		{
			{
				//Регистрация;
				cout << "registry_chat" << endl;
				cout << " " << endl;
				registry_chat regist;
				//try {
					regist.reg_user();
				//}
				//catch (exception& e)
				//{
				//	cout << e.what();
				//}
				break;
			}

		case 2:
		{
			//Вход в chat
			//enter_chat();
			cout << "enter_chat" << endl;
			cout << " " << endl;

			break;
		}
		case 3:
		{
			//Просто вход в chat
			cout << "just_chat" << endl;
			cout << " " << endl;
			//chat_menu();
			//just_chat;
			break;
		}

		case 7:
		{
			start = false;
		}
		}

	} while (start);
	cout << " " << endl;
	cout << " Have a nice day. See you! " << endl;

	return 0;

}