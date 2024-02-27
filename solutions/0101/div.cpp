/*
Задание по программированию «Деление»
Дано два целых числа A и B в диапазоне от 0 до 1 000 000 включительно. 
Напишите программу, которая вычисляет целую часть частного от деления A на B.
Если B = 0, выведите "Impossible".
*/

#include<iostream>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    if (B != 0)
    {
        cout << A / B << endl;
    }
    else
    {
        cout << "Impossible" << endl;
    }
}