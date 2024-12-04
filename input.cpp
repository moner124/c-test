#include <iostream>
int main(){
// cout (insertion operator)
//cin >> (extraction operator)

// std::string name;
// int age;
// std::cout << "what is your name : ";
// std::cin >> name;
// std::cout << "Hello " << name << "\n";   
// std::cout << "what is your age : ";
// std::cin >> age;
// std::cout << " you are " << age << " years old  " ;


//but we have problem if you type our full name will not print or age will print 0 
//becuaes we take the two ansowers 
//we can fix that just we have to add funcation std::getline(std::cin , name);
//lets tryit

std::string name;
int age;


std::cout << "what is your name full name  : " ;
std:getline(std::cin , name);
std::cout << "Hello " << name << "\n";

std::cout << "what is you age : ";
std::cin >> age ;
std::cout << "your are " << age << " year old ";




    return 0;        
}
