#include<iostream>
using namespace std;

#define T

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Controls!" << endl;
#if defined T
	int t;
	cout << "������� ����������� ��������: "; cin >> t;
	if (t > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� �������" << endl;
	}
#endif
	






}

