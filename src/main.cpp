#include <iostream>
#include "user.cpp"
#include "category.cpp"
#include "billing.cpp"

void billUser(int category_no) {
  Billing bill;
  bill.caluclateBill(category_no);
}

int main(int argc, char const *argv[])
{
  /* code */
  User user;
  Category category;

  int userChoice;
  cout << "\n ***************************** \n  \t Welcome to MajiPlus \t \t \n ***************************** \n";
  cout << " 1) Login \n";
  cout << " 2) Signup \n";
  cout << " 3) Exit \n";

  cout << "Enter you option here: ";
  cin >> userChoice;

  int category_no;
  if (userChoice == 1)
  {
    user.login();
  } else if (userChoice == 2) {
    user.signup();
    cout << "\n Weclome to Maji Plus\nPlease login to confirm your credentials";
    user.login();
    cout << user.generateCredentials();
    cout << "\nHi "<< user.getUsername() <<", Welcome to MajiPlus\nHere is a list of customer categories: - \n";
    cout << "\n1) Residential Household \n2) Commercial/Industrial \n3) Government Institutions" <<
    "\n4) Schools and Colleges \n5) Water Kiosks \n6) Resale at Water Kiosk\n";
    cout << "\nPick a category that best suites your need: ";
    cin >> category_no;
    category.GetCategory(category_no);
    billUser(category_no);
  } else {
    user.logout();
  }
}

