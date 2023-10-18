// Lab_04_3.cpp
// < Зозюк Влад >
// Лабораторна робота № 4.6
// Вкладені цикли (while, repeat, for...to, for...downto)
// Варіант 8

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double S,S1;
	int k, n;

	S = 0;
	k = 1;
	while (k <= 10)
	{
		S1 = 0;
		n = 1;
		while (n <= k)
		{
			S1 += sin(k * n);
			n++;
		}
		S += S1 / k;
		k++;
	}
	cout << S << endl;


	S = 0;
	k = 1;
	do {
		S1 = 0;
		n = 1;
		do {
			S1 += sin(k * n);
			n++;
		} while (n <= k);
			S += S1 / k;
			k++;
	} while (k <= 10);
	cout << S << endl;


	S = 0;
	for (k = 1; k <= 10; k++)
	{
		S1 = 0;
		for (n = 1; n <= k; n++)
		{
			S1 += sin(k * n);
		}
		S += S1 / k;
	}
	cout << S << endl;


	S = 0;
	for (k = 10; k >= 1; k--)
	{
		S1 = 0;
		for (n = k; n >= 1; n--)
		{
			S1 += sin(k * n);
		}
		S += S1 / k;
	}
	cout << S << endl;
	
	return 0;
}