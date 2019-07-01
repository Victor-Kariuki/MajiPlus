#include <iostream>

using namespace std;

class Category {

  private:
    int categoryChoice;

  public:
    void GetCategory(int category_no) {
      switch (category_no) {
        case 1:
          cout << "You picked Residential Household \n";
          break;
        case 2:
          cout << "You picked Commercial/Industrial \n";
          break;
        case 3:
          cout << "You picked Gorvenment Institiutions \n";
          break;
        case 4:
          cout << "You picked Schools & Colleges \n";
          break;
        case 5:
          cout << "You picked Water Kiosks \n";
          break;
        case 6:
          cout << "You picked Resale at Water Kiosk \n";
          break;
        default:
          cout << "Not a valid choice please pick again \n";
          break;
      };
    }
};
