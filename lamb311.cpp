#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = x * x;
	// ����� 1: ������������ � ��������� ����
	if (x < 4)
		B = 4 pow(x, 7) - pow(x, 5) + pow(x, 3) - 2;
	if (4 <= x && x <= 7)
		B = atan(((abs(x) + 1) / 2) + 8, 3x;
	if (x = > 7)
		B = In abs(2x + exp(4x + 1);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x < 4)
		B = 4 pow(x, 7) - pow(x, 5) + pow(x, 3) - 2;
	else
		if (x > 7)
			B = cos(x);
		else
			B = In abs(2x + exp(4x + 1);
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
