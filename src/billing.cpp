#include <iostream>

using namespace std;

class Billing {

  private:

    int meter_reading;
    int previous_reading;
    int current_reading;
    int category_no;

  public:

    void caluclateBill(int category_no) {
      cout << "\nEnter the previous meter reading: ";
      cin >> previous_reading;
      cout << "\nEnter the current meter reading: ";
      cin >> current_reading;
      if (previous_reading > current_reading) {
        cout << "\nEnter the previous meter reading: ";
        cin >> previous_reading;
        cout << "\nEnter the current meter reading: ";
        cin >> current_reading;
      } else {
        meter_reading = current_reading - previous_reading;
        cout << "\nYour unit consumption is: " << meter_reading << "\n\n";

        switch (category_no)
        {
        case 1:
          /* code */
          if (meter_reading >= 0 && meter_reading <= 6) {
            cout << "\nYour bill is Ksh 360 \n";
          } else if (meter_reading >= 7 && meter_reading <= 20) {
            cout << "Your current bill is Ksh " << meter_reading * 85 << "\n";
          } else if (meter_reading >= 21 && meter_reading <= 50) {
            cout << "Your current bill is Ksh " << meter_reading * 105 << "\n";
          } else if (meter_reading >= 51 && meter_reading <= 100) {
            cout << "Your current bill is Ksh " << meter_reading * 120 << "\n";
          } else if (meter_reading >= 100 && meter_reading <= 300) {
            cout << "Your current bill is Ksh " << meter_reading * 150 << "\n";
          } else {
            cout << "Your current bill is Ksh " << meter_reading * 150 << "\n";
          }
          break;

        case 2:
          /* code */
          if (meter_reading >= 0 && meter_reading <= 6) {
            cout << "\nYour current bill is Ksh " << meter_reading * 69.33 << "\n";
          } else if (meter_reading >= 7 && meter_reading <= 20) {
            cout << "Your current bill is Ksh " << meter_reading * 104 << "\n";
          } else if (meter_reading >= 21 && meter_reading <= 50) {
            cout << "Your current bill is Ksh " << meter_reading * 135.2 << "\n";
          } else if (meter_reading >= 51 && meter_reading <= 100) {
            cout << "Your current bill is Ksh " << meter_reading * 166.4 << "\n";
          } else if (meter_reading >= 100 && meter_reading <= 300) {
            cout << "Your current bill is Ksh " << meter_reading * 208 << "\n";
          } else {
            cout << "Your current bill is Ksh " << meter_reading * 208 << "\n";
          }
          break;

        case 3:
          /* code */
          if (meter_reading >= 0 && meter_reading <= 6) {
            cout << "\nYour current bill is Ksh " << meter_reading * 69.33 << "\n";
          } else if (meter_reading >= 7 && meter_reading <= 20) {
            cout << "Your current bill is Ksh " << meter_reading * 104 << "\n";
          } else if (meter_reading >= 21 && meter_reading <= 50) {
            cout << "Your current bill is Ksh " << meter_reading * 135.2 << "\n";
          } else if (meter_reading >= 51 && meter_reading <= 100) {
            cout << "Your current bill is Ksh " << meter_reading * 166.4 << "\n";
          } else if (meter_reading >= 100 && meter_reading <= 300) {
            cout << "Your current bill is Ksh " << meter_reading * 208 << "\n";
          } else {
            cout << "Your current bill is Ksh " << meter_reading * 208 << "\n";
          }
          break;

        case 4:
          /* code */
          if (meter_reading >= 0 && meter_reading <= 600) {
            cout << "\nYour current bill is Ksh " << meter_reading * 40 << "\n";
          } else if (meter_reading >= 601 && meter_reading <= 1200) {
            cout << "Your current bill is Ksh " << meter_reading * 50 << "\n";
          } else {
            cout << "Your current bill is Ksh " << meter_reading * 90 << "\n";
          }
          break;

        case 5:
          cout << "Your current bill is Ksh " << meter_reading * 35 << "\n";
          break;

        case 6:
          /* code */
          cout << "\nYour current bill is Ksh " << meter_reading * 1.5 << "\n";
          break;

        default:
          cout << "\n Wrong cateogry";
          break;
        }
      }
    }

};
