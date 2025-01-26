#include <iostream>
#include "UserAccount.h"
#include "string" //for getline to work
using namespace std;

UserAccount makeAccount() {
	int id;
	std::string user;
	std::string pass;
	while (true) {
		cout << "Enter account ID: " << endl;
		cin >> id;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Must be a number. Try again." << endl;
			continue;
		}
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Enter a username: " << endl;
		getline(cin, user);
		cout << "Enter a password: " << endl;
		getline(cin, pass);
		cout << "ID: " << id << " User " << user << " password " << pass << endl;
		return UserAccount(id, user, pass);
		break;
	}
}

int main() {
	UserAccount acc = makeAccount();
	while (true) {
		std::string loginUser;
		std::string loginPass;
		cout << "Login:" << endl;
		cout << "Enter username: " << endl;
		getline(cin, loginUser);
		cout << "Enter password: " << endl;
		getline(cin, loginPass);
		if (acc.Login(loginUser, loginPass) == false) {
			cout << "Invalid username or password. Try again" << endl;
			continue;
		}
		else {
			cout << "Login Successful!" << endl;
			cout << "Account ID: " << acc.id << endl;
			break;
		}
	}
	return 0;
}
