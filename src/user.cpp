#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <fstream>

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
    };

  public:
    void signup() {
      fstream outfile("\nusers.txt", ios::app);
      NewUser user;
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
      outfile << user.firstname << " " << user.lastname << " " << user.email << " " << user.phone_no<< " " << user.id_no << " " << user.password << "\n";
      cout<<"\n**Successfully Added. Welcome to MajiPlus**\n";
      outfile.close();
    };
    void login() {
      std::string email;
      std::string password;

      cout << "\n Enter user email: \n";
      cin >> email;

      NewUser user;
    };

    int logout() {
      cout<<"\n**Thank you for using MajiPlus**\n";
      return 0;
    }

};
