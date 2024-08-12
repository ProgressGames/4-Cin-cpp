#include <iostream>
using namespace std;

void main()
{
	int Var; // не инициализируем | don't initialize it


	cout << "Enter a number: "; // тут вводим число, которое сохраниться в след. строке | here we enter the number that will be saved in the trace. the line
	cin >> Var; // сохраняем число и вводим его в след. строке | we save the number and enter it in the trace. the line
	cout << "You entered a number: " << Var; // тут число сохранившееся в переменной Var ( введённое нами ) выводиться | here is the number stored in the Var variable (entered by us ) output
}

// cin ( си ин ) - это оператор ВВОДА, который используеться для считывания данных с клавиатуры и сохранения их в переменных. 
// cin - is an INPUT operator that is used to read data from the keyboard and store it in variables. 
