#include "UserAccount.h"
#include <iostream>
using namespace std;

UserAccount::UserAccount(const int newID, const std::string newUser, const std::string newPassword) {
	id = newID;
	userName = newUser;
	password = newPassword;
}
