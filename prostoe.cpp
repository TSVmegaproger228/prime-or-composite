#include <iostream>
#include <cstdio>
using namespace std;
int i = 0;
int main() {
    cout << "Enter number: ";
    int s;
    cin >> s;
    int j = 2;
    int flag = 0;
    for (i = 2; i < s; i++) {
        if (s % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout << s << " is prime number\n"; //написано ан английском, так как кириллица превращается в странный набор букв при выводе
    }
    else {cout << s << " is composite number\n";}
    cout << "\nFor escape enter any symbol and click 'enter'\n"; /*не знаю как сделать иначе,
    чтобы окно не закрывалось после завершения программы*/
    cin >> i;  
}
