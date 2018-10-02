#include <iostream>
#include <string>
using namespace std;


int cuentaElMayor(int n)
{
	int max = -1;
	int numero;
	for (int i = 0; i < n; i++)
	{
		cin >> numero;
		if (numero > max)
		{
			max = numero;
		}
	}
	return max;
}
int main()
{
	int toro;
	int velocidad;
	//cin >> toro;
	while (cin>> toro)
	{
		velocidad = cuentaElMayor(toro);
		cout << velocidad << endl;
		//cin >> toro;
		//system("PAUSE");

	}
	return 0;
}