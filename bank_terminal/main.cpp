#include "Header.h"
#include <string>
#include <array>
#include <conio.h>
#include <iostream>

using namespace std;

double main_operation(double balance) {

	double FinalBalance = 0;

	int localization = 0;

	cout << "Выберите язык: " << endl
		<< "1 - Русский" << endl
		<< "2 - Английский" << endl;

	cin >> localization;

	switch (localization) {
	case 1:
		system("cls");
		//localization = 
		FinalBalance = rus_localization(balance);
		break;
	case 2:
		system("cls");
		//localization = 
		FinalBalance = eng_localization(balance);
		break;
	default:
		localization = 0;
		break;
	}
	/*if (localization == 1) {
	  break;
	}*/
	return FinalBalance;
}

struct BankCard {
	double card_number;
	double password;
	double balance;
	string name;

	BankCard(double card_number, double password, double balance, string name) {
		this->card_number = card_number;
		this->password = password;
		this->balance = balance;
		this->name = name;
	}

};

int main() {
	setlocale(LC_ALL, "Russian");

	array<BankCard, 4> bankCards{
	BankCard(11111111111 ,1111, 5423, "Gamer"),
	BankCard(11111111112, 1112, 6221, "Jenya"),
	BankCard(11111111113, 1113, 11420.47, "Valera"),
	BankCard(11111111114, 1114, 300, "Volodjik") };

	while (true) {

		bool authentication = false;
		double card;
		double pass;

		cout << "Вставьте свою карту" << endl;
		cout << "Push your card" << endl;

		cin >> card;

		system("cls");

		for (auto card_ID : bankCards) {
			if (card == card_ID.card_number) {
				authentication = true;
				cout << "Введите пароль." << endl << "Enter the password:" << endl;
				cin >> pass;
				system("cls");
				if (pass == card_ID.password) {
					card_ID.balance = main_operation(card_ID.balance);
				}
				else {
					cout << "Неверный пароль." << endl << "Нажмите Enter, чтобы продолжить.";
					//cin.ignore();
					//cin.get();

					_getch();
					system("cls");
				}
			}
		}
		if (authentication == false) {
			cout << "Неверная карта." << endl << "Нажмите Enter, чтобы продолжить.";
			//cin.ignore();
			//cin.get();

			_getch();
			system("cls");
		}
	}
	return 0;
}