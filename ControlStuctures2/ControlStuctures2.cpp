#include<iostream>
#include<conio.h>
using namespace std;

#define WHILE_1
//#define WHILE_2


void main()
{
	setlocale(LC_ALL, "");
#if define WHILE_1
	int i = 0; // Счетчик цикла
	int n; // Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i++ << " Hello" << endl;
		//i++;
	}
#endif

	char key; // КОД нажатой клавиши
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (true);

}