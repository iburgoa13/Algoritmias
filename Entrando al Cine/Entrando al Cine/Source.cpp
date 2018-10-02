#include <iostream>
#include <string>
using namespace std;
const int MAX = 10000;
void paresImpares(int v[], int n);
void totalVecinos();
int main()
{
	int ncas;
	cin >> ncas;
	for (int i = 0; i < ncas; i++)
	{
		totalVecinos();
	}
	return 0;
}
void totalVecinos()
{
	int vec, v[MAX];
	cin >> vec;
	for (int i = 0; i < vec; i++)
	{
		cin >> v[i];
	}
	paresImpares(v, vec);
}
void paresImpares(int v[], int n)
{
	int i = 0, cont = 0;
	string sn = "SI ";
	while (i < n && v[i] % 2 == 0)
	{
		i++;
		cont++;
	}
	while (i < n)
	{
		if (v[i] % 2 == 0)
		{
			sn = "NO";
		}
		i++;
	}
	if (sn != "NO")
	{
		cout << sn << cont << "\n";
	}
	else
	{
		cout << sn << endl;
	}
}