#include <iostream>
#include <string>

int main() {

    std::cout << "==========================\n";
    std::cout << "   DUNGEON OF MYLES\n";
    std::cout << "==========================\n";

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "\n";

    int health = 100;
    int attack = 15;
    int gold = 0;

    std::cout << "--- CHARACTER SHEET ---\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Health: " << health << "\n";
    std::cout << "Attack: " << attack << "\n";
    std::cout << "Gold: " << gold << "\n";

    return 0;
}
