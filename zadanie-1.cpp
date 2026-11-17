#include <iostream>
#include <string>
using namespace std;

bool palindrome(string s, int left, int right) {
    if (left >= right) {
        return true;
    }
    if (s[left] != s[right]) {
        return false;
    }
    return palindrome(s, left + 1, right - 1);
}

int main() {
    string s;
    cout << "Введите строку: ";
    getline(cin, s);
    if (palindrome(s, 0, (int)s.size() - 1)) {
        cout << "Строка является палиндромом";
    }
    else {
        cout << "Строка не является палиндромом";
    }
    return 0;
}
