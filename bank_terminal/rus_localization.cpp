#include <iostream>
#include <conio.h>

using namespace std;

double other_operation_rus(double balance) {
	double Balance = balance;
	while (true) {
		int other_operation;
		int choice;
		double sum;

		cout << "�������� ��������: " << endl
			<< "1 - �������         ������ ����� - 3" << endl
			<< "2 - ��������  ��������� �������� - 4" << endl;

		cin >> other_operation;

		switch (other_operation) {
		case 1:
			system("cls");
			cout << "��� �������: " << Balance << endl
				<< "������� Enter, ����� ����������.";
			_getch();
			break;
		case 2:
			system("cls");
			/*      //����� ������ ������ � ������� �������(�������)
			cout << "�������� ���������, �������� ������" << endl;
			FinalBalance -= 100;
			cin.get();
			*/
			cout << "������� � ������ ������ �� �������� " << endl
				<< "������� Enter, ����� ����������.";
			_getch();
			break;

		case 3:
			system("cls");
			while (true) {
				cout << "������� �������� �����: " << endl;
				cin >> sum;
				if (Balance >= sum) {
					system("cls");
					cout << "�������� ������." << endl
						<< "������� Enter, ����� ����������.";
					_getch();
					break;
				}
				else {
					while (true) {
						system("cls");
						cout << "������� ������� �����" << endl
							<< "���� ������� ������ ���� �����, ������� - 1" << endl
							<< "���� ������� ��������� ��������, ������� - 2" << endl;
						cin >> choice;
						if (choice == 1) {
							system("cls");
							break;
						}
						else if (choice == 2) {
							system("cls");
							break;
						}
					}
					if (choice == 2) {
						system("cls");
						break;
					}
				}
			}
			Balance -= sum;
			break;
		case 4:
			system("cls");
			return Balance;
			break;
		}

		system("cls");
	}
	return Balance;
}

double rus_localization(double balance) {

	setlocale(LC_ALL, "Russian");

	double FinalBalance = balance;
	int operation = 0;

	while (true) {
		cout << "�������� ��������: " << endl
			<< "1 - 100���               1000��� - 5" << endl
			<< "2 - 200���               2000��� - 6" << endl
			<< "3 - 300���       ������ �������� - 7" << endl
			<< "4 - 500���    ��������� �������� - 8" << endl;

		cin >> operation;

		switch (operation) {
		case 1:
			system("cls");
			cout << "�������� ���������, �������� ������" << endl;
			FinalBalance -= 100;
			cin.get();
			break;
		case 2:
			system("cls");
			cout << "�������� ���������, �������� ������" << endl;
			FinalBalance -= 200;
			cin.get();
			break;
		case 3:
			system("cls");
			cout << "�������� ���������, �������� ������" << endl;
			FinalBalance -= 300;
			cin.get();
			break;
		case 4:
			system("cls");
			cout << "�������� ���������, �������� ������" << endl;
			FinalBalance -= 500;
			cin.get();
			break;
		case 5:
			system("cls");
			cout << "�������� ���������, �������� ������" << endl;
			FinalBalance -= 1000;
			cin.get();
			break;
		case 6:
			system("cls");
			cout << "�������� ���������, �������� ������" << endl;
			FinalBalance -= 2000;
			cin.get();
			break;
		case 7:
			system("cls");
			FinalBalance = other_operation_rus(FinalBalance);
			break;

		case 8:
			system("cls");
			return FinalBalance;
			break;
		}
	}
	return FinalBalance;
}