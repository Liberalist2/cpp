#include <iostream>

int early_years_dog = 2; // dogs age 21 human years in the first 2 years
int early_years_human = 21;

int main() {
    std::string dog_name;
    int dog_age, human_years;

    std::cout << "Enter your dog's name: ";
    std::cin >> dog_name;

    std::cout << "Enter your dog's age in years: ";
    std::cin >> dog_age;

    if (dog_age <= early_years_dog)
        human_years = 10*dog_age + (dog_age > 1);
    else
        human_years = early_years_human + (dog_age-2)*4; // after the first 2 years they age 4 years each

    std::cout << "My name is " << dog_name << "! Ruff Ruff, I am " << human_years << " years old in human years.\n";    

}