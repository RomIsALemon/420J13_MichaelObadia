#include "UserAccount.h"
#include <iostream>
using namespace std;

UserAccount::UserAccount(int newID, std::string newUser, std::string newPassword) {
	id = newID;
	userName = newUser;
	password = newPassword;
}

bool Login(const std::string& enteredUserName, const std::string& enteredPassword) {

}
