#include <iostream>

int main()

{
    const int MAX = 80; // оголошуЇмо константу - максимальну довжину р€дка
    char str[MAX];
    cout << "Input string: "; // виводимо п≥дказку
    cin >> str; // програма готова до введенн€ (в к≥нц≥ - натиснути Enter)
    cout << "YouТve input: " << str << endl; // вивести введений р€док на екран
    return 0;
}
