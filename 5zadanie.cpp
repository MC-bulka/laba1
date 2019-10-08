#include <iostream>//подключаем библиотека
#include <math.h>//библиотека для математических функций
using namespace std;//стандартное пространство имен
int main ()//начало программы
{
    float a, b;//объявление дробных чисел
    cin >>a >>b;//ввод чисел
    cout << fabs(a+b) <<endl;//сумма
    cout <<fabs(a-b) <<endl;//разность
    cout <<fabs(a*b) <<endl;//произведение
    cout <<fabs(a/b) <<endl;//разность
return 0;//завершение программы
}
