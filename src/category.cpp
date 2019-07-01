#include <iostream>

using namespace std;

class Category {

  private:
    int categoryChoice;

  public:
    void GetCategory(int category_no) {
      switch (category_no) {
        case 1:
          cout << "You picked Residential Household";
          break;
        case 2:
          cout << "You picked Commercial/Industrial";
          break;
        case 3:
          cout << "You picked Gorvenment Institiutions";
          break;
        case 4:
          cout << "You picked Schools & Colleges";
          break;
        case 5:
          cout << "You picked Water Kiosks";
          break;
        case 6:
          cout << "You picked Resale at Water Kiosk";
          break;
        default:
          cout << "Not a valid choice please pick again";
          break;
      };
    }
};
