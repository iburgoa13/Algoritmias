#include<iostream>
using namespace std;


bool esPolidivisible(long long int n,int &x)
{
	bool prueba;
	int aux;
	if (n <= 9)
	{
		 aux = n % x;
		if (aux == 0) { return true; }
		return false;
	}
	else
	{
		prueba = esPolidivisible(n / 10,x);
		x++;
		 aux = n % x;
		prueba = prueba && aux == 0;
	}
	return prueba;
}

void resuelve()
{
	long long int n;
	bool poli;
	int cont = 1;
	while (std::cin >> n)
	{
		poli = esPolidivisible(n,cont);
		if (poli)
		{
			cout << "POLIDIVISIBLE" << endl;
		}
		else
		{
			cout << "NO POLIDIVISIBLE" << endl;
		}
		cont = 1;
	}
}

int main()
{
	resuelve();
	return 0;
}