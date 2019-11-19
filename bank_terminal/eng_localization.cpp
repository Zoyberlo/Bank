#include <iostream>
#include <conio.h>

using namespace std;

double other_operation_eng(double balance) {
	double Balance = balance;
	while (true) {
		int other_operation;
		int choice;
		double sum;

		cout << "Select an operation:" << endl
			<< "1 - Balance         Other amount - 3" << endl
			<< "2 - Transfer  Complete operation - 4" << endl;

		cin >> other_operation;

		switch (other_operation) {
		case 1:
			system("cls");
			cout << "Your balance: " << Balance << endl
				<< "Press Enter to continue.";
			_getch();
			break;
		case 2:
			system("cls");
			cout << "The function is currently not working. " << endl
				<< "Press Enter to continue.";
			_getch();
			break;
		case 3:
			system("cls");
			while (true) {
				cout << "Enter the desired amount : " << endl;
				cin >> sum;
				if (Balance >= sum) {
					system("cls");
					cout << "Take the money." << endl
						<< "Press Enter to continue.";
					_getch();
					break;
				}
				else {
					while (true) {
						system("cls");
						cout << "Amount Too Big" << endl
							<< "If you want to enter a different amount, click - 1" << endl
							<< "If you want to complete the operation, click - 2" << endl;
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
	}
	return Balance;
}

double eng_localization(double balance) {

	double FinalBalance = balance;
	int operation = 0;

	while (true) {                  //
		cout << "Select an operation:  " << endl
			<< "1 - 100hrn               1000hrn - 5" << endl
			<< "2 - 200hrn               2000hrn - 6" << endl
			<< "3 - 300hrn      Other operations - 7" << endl
			<< "4 - 500hrn    Complete operation - 8" << endl;

		cin >> operation; // потом сделать со switch()

		switch (operation) {
		case 1:
			system("cls");
			cout << "Operation completed, take the money" << endl;
			FinalBalance -= 100;
			cin.get();
			break;
		case 2:
			system("cls");
			cout << "Operation completed, take the money" << endl;
			FinalBalance -= 200;
			cin.get();
			break;
		case 3:
			system("cls");
			cout << "Operation completed, take the money" << endl;
			FinalBalance -= 300;
			cin.get();
			break;
		case 4:
			system("cls");
			cout << "Operation completed, take the money" << endl;
			FinalBalance -= 500;
			cin.get();
			break;
		case 5:
			system("cls");
			cout << "Operation completed, take the money" << endl;
			FinalBalance -= 1000;
			cin.get();
			break;
		case 6:
			system("cls");
			cout << "Operation completed, take the money" << endl;
			FinalBalance -= 2000;
			cin.get();
			break;
		case 7:
			system("cls");
			FinalBalance = other_operation_eng(FinalBalance);
			break;
		case 8:
			system("cls");
			return FinalBalance;
			break;
		}
		//  return FinalBalance;
	}
	return FinalBalance;
}