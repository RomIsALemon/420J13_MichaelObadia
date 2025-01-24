#include <iostream>
#ifndef USERACCOUNT_H
#define USERACCOUNT_H
class UserAccount
{
	private:
		int id;
		std::string userName;
		std::string password;

	public: 
		UserAccount(const int newID, const std::string newUser, const std::string newPassword);
		bool Login(const std::string& enteredUserName, const std::string& enteredPassword);
};

#endif

