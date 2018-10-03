#include <iostream>
using namespace std;


void cuantosSaltos(int n,int &a, int &b, int primero)
{
	int tipo;
	for (int i = 0; i < n;i++)
	{
		cin >> tipo;
		if (tipo > primero) { a++; primero = tipo; }
		else if (tipo < primero) { b++; primero = tipo; }
	}

}

void resuelve()
{
	int x; 
	int primeraAltura;
	cin >> x;	
	cin >> primeraAltura;
	int arriba = 0, abajo = 0;
	cuantosSaltos(x-1,arriba, abajo,primeraAltura);
	cout << arriba << " " << abajo << endl;
}


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		resuelve();
	}
}