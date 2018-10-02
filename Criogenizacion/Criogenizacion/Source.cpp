#include <iostream>
using namespace std;

void resuelve()
{
	long long int min, max;
	long long int numero;
	int nmin=0, nmax = 0;
	cin >> numero;
	min = numero;
	max = numero;
	while (numero != 0)
	{
		if (numero < min) 
		{ min = numero;
		nmin = 1; 
		}
		else if (numero == min)
		{ 
			nmin++;
		}
		if (numero > max) 
		{
			max = numero; 
			nmax = 1; }
		else if (numero == max) 
		{ nmax++; }
		cin >> numero;
	}
	cout << min << " " << nmin << " " << max << " " << nmax << endl;


}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		resuelve();
	}
	return 0;
}