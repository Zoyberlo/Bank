#include <iostream>
#include <conio.h>

using namespace std;

double other_operation_rus(double balance) {
	double Balance = balance;
	while (true) {
		int other_operation;
		int choice;
		double sum;

		cout << "Выберите операцию: " << endl
			<< "1 - Балланс         Другая сумма - 3" << endl
			<< "2 - Переводы  Завершить операцию - 4" << endl;

		cin >> other_operation;

		switch (other_operation) {
		case 1:
			system("cls");
			cout << "Ваш балланс: " << Balance << endl
				<< "Нажмите Enter, чтобы продолжить.";
			_getch();
			break;
		case 2:
			system("cls");
			/*      //здесь делать работу с другими счетами(сложина)
			cout << "Операция завершена, заберите деньги" << endl;
			FinalBalance -= 100;
			cin.get();
			*/
			cout << "Функция в данный момент не работает " << endl
				<< "Нажмите Enter, чтобы продолжить.";
			_getch();
			break;

		case 3:
			system("cls");
			while (true) {
				cout << "Введите желаемую сумму: " << endl;
				cin >> sum;
				if (Balance >= sum) {
					system("cls");
					cout << "Заберите деньги." << endl
						<< "Нажмите Enter, чтобы продолжить.";
					_getch();
					break;
				}
				else {
					while (true) {
						system("cls");
						cout << "Слишком большая сумма" << endl
							<< "Если желаете ввести иную сумму, нажмите - 1" << endl
							<< "Если желаете завершить операцию, нажмите - 2" << endl;
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
		cout << "Выберите операцию: " << endl
			<< "1 - 100грн               1000грн - 5" << endl
			<< "2 - 200грн               2000грн - 6" << endl
			<< "3 - 300грн       Другие операции - 7" << endl
			<< "4 - 500грн    Завершить операцию - 8" << endl;

		cin >> operation;

		switch (operation) {
		case 1:
			system("cls");
			cout << "Операция завершена, заберите деньги" << endl;
			FinalBalance -= 100;
			cin.get();
			break;
		case 2:
			system("cls");
			cout << "Операция завершена, заберите деньги" << endl;
			FinalBalance -= 200;
			cin.get();
			break;
		case 3:
			system("cls");
			cout << "Операция завершена, заберите деньги" << endl;
			FinalBalance -= 300;
			cin.get();
			break;
		case 4:
			system("cls");
			cout << "Операция завершена, заберите деньги" << endl;
			FinalBalance -= 500;
			cin.get();
			break;
		case 5:
			system("cls");
			cout << "Операция завершена, заберите деньги" << endl;
			FinalBalance -= 1000;
			cin.get();
			break;
		case 6:
			system("cls");
			cout << "Операция завершена, заберите деньги" << endl;
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