#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int i = 0;
int main() {
    cout << "Enter number: ";
    int s;
    cin >> s;
    int flag = 0;
    if (s % 2 == 0) {flag = 1;}
    else {
        for (i = 3; i <= pow(s, 1/2) + 1; i = i + 2) {
            if (s % i == 0) {
                flag = 1;
                break;}
                }
                }
    if (s == 0 || s == 1) {cout << s << " isn't composite and isn't prime";}
    else if (flag == 0) {
        cout << s << " is prime number\n"; //написано ан английском, так как кириллица превращается в странный набор букв при выводе
    }
    else {cout << s << " is composite number\n";}
    cout << "\nFor escape enter any symbol and click 'enter'\n"; /*не знаю как сделать иначе,
    чтобы окно не закрывалось после завершения программы*/
    cin >> i;  
}
