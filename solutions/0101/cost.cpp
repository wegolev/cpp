/*
Задание по программированию «Расчёт стоимости товара»
Написать программу вычисления стоимости покупки товара с учётом скидки. 
Если исходная стоимость товара больше A рублей, 
то на неё устанавливается скидка в X процентов. 
Если исходная стоимость товара больше B рублей, 
то на неё устанавливается скидка в Y процентов.
На вход программе даны пять вещественных чисел: 
N, A, B, X, Y (A < B) - где N - исходная стоимость товара. 
Выведите стоимость покупки товара с учётом скидки.
*/

#include <iostream>

using namespace std;

int main() {
    float N, A, B, X, Y;
    cin >> N >> A >> B >> X >> Y;
    if (N > A) {
        cout << N - (N * X / 100) << endl;
    }
    if (N > B) {
        cout << N -(N * Y /100) << endl;
    }
}