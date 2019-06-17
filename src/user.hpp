#include <string>

class User
{
private:
  /* data */
  std::string firstname;
  std::string lastname;
  std::string email;
  int phone_no;
  int id_no;

public:
  void signup(std::string new_firstname, std::string new_lastname, std::string new_email, int new_phone_no, int new_id_no);
};

