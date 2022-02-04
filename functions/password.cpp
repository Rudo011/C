#include <iostream>
#include <string>

void hello () {
    
    std::cout << "Hello, my friend" << std::endl;
}

void Goodbye () {

    std::cout << "Goodbye, my friend" << std::endl;
}

std::string check_pass (std::string password)
{
    std::string valid_pass = "qwerty123";
    std::string error_message;
    if ( password == valid_pass ) {
        error_message = "Доступ разрешен.";
    } 
    else {
        error_message = "Неверный пароль!";
    }
    return error_message;
}

int main()
{    
    std::string user_pass;
    std::cout << "Введите пароль: ";
    getline (std::cin, user_pass);
    std::string error_msg = check_pass (user_pass);
    std::cout << error_msg << std::endl;

    if ( user_pass == "qwerty123" ) {
	hello(); 
    }
    else {
	Goodbye();
    }
    return 0;

}	
