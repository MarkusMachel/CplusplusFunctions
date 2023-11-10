#include <iostream>

void happyBirthday(std::string name, int age); //function prototype. Tells the compiler that the function exists and will be defined later in the code.
double square(double length);

int main() {
    //function = a block of reusable code
    std::string name = "Bjarne";
    int age = 70;

    happyBirthday(name, age);

    // return keyword is used to return a value from a function
    double length = 5.5;
    double area = square(length);
    std::cout << "The area of the returned function is " << area << "cm^2" <<"\n";
    

    return 0;
}

void happyBirthday(std::string name, int age) {
    for (int i = 0; i < 4; i++) {
        std::cout << "Happy Birthday " << name << "! You are " << age << " years old!\n" ;
    }
    std::cout <<"\n";
}

double square(double length) {
    double area = length * length;
    std::cout << "The area of the square is " << area << "\n";
    return area;
}