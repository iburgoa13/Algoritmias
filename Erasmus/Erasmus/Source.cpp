#include <iostream>
#include <math.h>
//funciona
using namespace std;
const int MAXP = 100000;
int main()
{
	int pais;
	cin >> pais;
	while (pais != 0)
	{
		long long int est;
		long long int npar = 0, test = 0, tpar = 0;
		for (int i = 0; i < pais; i++)
		{
			cin >> est;
			test += est;
			npar += (pow(est, 2) - est) / 2;
		}
		tpar = (pow(test, 2) - test) / 2;
		tpar -= npar;
		cout << tpar << endl;
		cin >> pais;
	}
	return 0;
}

