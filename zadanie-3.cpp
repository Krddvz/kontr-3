#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Введите имя: ";
    cin >> name;

    cout << "Введите возраст: ";
    cin >> age;

    cout << "Имя: " << name
         << ", Возраст: " << age
         << " лет" << endl;

    return 0;
}
