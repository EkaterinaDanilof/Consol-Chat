#include <iostream>
#include "registry_chat.h"

using namespace std;

// �������� ������� ���� 1

int main()
{
	setlocale(LC_ALL, "Russian"); // ����� ������� �����
	
	bool start = true;
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
		cout << "Enter    : Input 2 ) ������ ��������� , ������� 2" << endl;
		cout << "Chat     : Input 3 ) ����� ��� , ������� 3" << endl;
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
			start = false;
		}
		}

	} while (start);
	cout << " " << endl;
	cout << " Have a nice day. See you! " << endl;

	return 0;

}