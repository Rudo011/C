#include <iostream>
#include <string>
void hello() {
	
	std::cout << "Hello my friend" << std::endl;
}

void go_out(){

	std::cout << "Go out my friend" <<std::endl;
}

std::string user_password ( std::string password ) {
	
	std::string valid_password = "2300";
	std::string error_massage;

	if ( password == valid_password ) {	
		error_massage = "Успешный вход";
	}
	else {
		error_massage = "В доступе отказоно";
	}
	return error_massage;
}

int main() {

	std::string user_pass;
	std::cout << " Введите пароль" << std::endl;
	std::cin >> user_pass;
	std::string error_massage = user_password ( user_pass);
	std::cout << error_massage << std::endl;

	if ( error_massage == 0 ) {
		hello ();
	}
	else {
		go_out ();
	}
	return 0;
}
