#include <stdlib.h>
#include <ctime>
#include <iostream>
#include<stdio.h>

using namespace std;

class User {
  private:
    struct NewUser{
      std::string firstname;
      std::string lastname;
      std::string email;
      std::string phone_no;
      std::string id_no;
      std::string password;
      std::string reg_no;
      std::string meter_no;
    };

  public:
    NewUser user;
    void signup() {
      cout << "Enter firstname: ";
      cin >> user.firstname;
      cout << "Enter lastname: ";
      cin >> user.lastname;
      cout << "Enter email: ";
      cin >> user.email;
      cout << "Enter Phone Number: ";
      cin >> user.phone_no;
      cout << "Enter ID Number: ";
      cin >> user.id_no;
      cout << "Enter password: ";
      cin >> user.password;

      cout<<"\n** Successfully Added. Welcome to MajiPlus **\n";
    };

    std::string getUsername() {
      return user.firstname + " " + user.lastname;
    };

    std::string getPassword() {
      return user.password;
    };

    std::string getEmail() {
      return user.email;
    }

    std::string generateCredentials() {
      time_t now = time(0);
      char* dt = ctime(&now);
      return dt;
    }

    void login() {
      int tries = 0;
      std::string email;
      std::string password;

      while (tries < 3 && email != getEmail() && password != getPassword())
      {
        cout << "\n Wrong credentials please try again";
        cout << "\nEnter your email: \n";
        cin >> email;
        cout << "Enter your password: ";
        cin >> password;
        tries ++;
      }
      cout << "Successfully Logged in";

    };

    int logout() {
      cout<<"\n**Thank you for using MajiPlus**\n";
      return 0;
    }

};
