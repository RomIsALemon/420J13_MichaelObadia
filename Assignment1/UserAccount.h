#include <iostream>
#ifndef USERACCOUNT_H
#define USERACCOUNT_H
class UserAccount
{
	private:
		std::string userName;
		std::string password;

	public: 
		int id;
		UserAccount(const int newID, const std::string newUser, const std::string newPassword);
		bool Login(const std::string& enteredUserName, const std::string& enteredPassword) {
			return enteredUserName == userName && enteredPassword == password;
		}
};

#endif

