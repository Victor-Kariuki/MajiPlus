#include <iostream>

using namespace std;

class Billing {

  private:

    int meter_reading;
    int category_no;

  public:

    void caluclateBill(int category_no) {
      cout << "\nEnter the meter reading: \n";
      cin >> meter_reading;

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
        break;

      case 3:
        /* code */
        break;

      case 4:
        /* code */
        break;

      case 5:
        /* code */
        break;

      case 6:
        /* code */
        break;

      default:
        break;
      }
    }

};
