#include<iostream>
#include<conio.h>
using namespace std;

#define WHILE_1
//#define WHILE_2


void main()
{
	setlocale(LC_ALL, "");
#if define WHILE_1
	int i = 0; // ������� �����
	int n; // ���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << i++ << " Hello" << endl;
		//i++;
	}
#endif

	char key; // ��� ������� �������
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (true);

}