/*-------------------------------------------------------------------<Header>-
 Name: ex_02.cpp
 Title: —
 Description: Напишите программу для вывода результата деления 10/3 с четырьмя
 знаками после десятичной точки. Для этого используйте функции-члены класса
 ios. Напишите вторую версию этой программы, используя манипуляторы
 ввода/вывода.
 -------------------------------------------------------------------</Header>-*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {

    // 1
    cout << setprecision(5) << 10. / 3. << endl;

    // 2
    cout.precision(5);
    cout << 10. / 3. << "\n\n";

     
    return 0;
}