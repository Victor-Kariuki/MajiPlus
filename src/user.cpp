#include <user.hpp>

// signup method definition

void User::signup(std::string new_firstname, std::string new_lastname, std::string new_email, int new_phone_no, int new_id_no) {
  firstname = new_firstname;
  lastname = new_lastname;
  email = new_email;
  phone_no = new_phone_no;
  id_no = new_id_no;
}
