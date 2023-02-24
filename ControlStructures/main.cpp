#include<iostream>
using namespace std;

#define T

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Controls!" << endl;
#if defined T
	int t;
	cout << "Введите температуру ввоздуха: "; cin >> t;
	if (t > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif
	






}

