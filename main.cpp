#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int x=7; // x от 0 до 15
    int y=10; // y от 0 до 20
    std::string move;
    while (true) {
        std::cout<<"[Программа]: Марсоход находится на позиции "<<x<<", "<<y<<", введите команду:\n";
        std::cout<<"[Оператор]: ";
        std::cin>>move;
        if (move=="W" || move=="w") {
            if (y+1<21) {
                ++y;
            }
        } else if (move=="A" || move=="a") {
            if (x-1>-1) {
                --x;
            }
        } else if (move=="S" || move=="s") {
            if (y-1>-1) {
                --y;
            }
        } else if (move=="D" || move=="d") {
            if (x+1<16) {
                ++x;
            }
        } else {
            std::cout<<"Введен неверный параметр, повторите ввод!\n";
        }
    }


}
