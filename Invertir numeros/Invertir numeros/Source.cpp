// NOMBRE Y APELLIDOS

#include <iostream>

#include <fstream>
using namespace std;


struct sol {
	int numero=0;
	int pot=1;
};/*
    Precondicion:  0 <= n <= 2^31 - 1
*/
sol invertir(int n){	sol solucion;	if (n == 0)	{		return solucion;	}	else	{		solucion = invertir(n / 10);		solucion.numero += solucion.pot *(n % 10);		solucion.pot = solucion.pot * 10;	}	return solucion;}/*    Postcondicion: solucion = invertir(n/10)*/
bool resuelveCaso() {

	int n;
	if (cin >> n)
	{
		sol solucion = invertir(n);
		cout << solucion.numero << endl;
		return true;

	}
	else
	{
		return false;
	}

}


int main() {

	// ajuste para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
	std::ifstream in("casos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

	while (resuelveCaso());

	// restablecimiento de cin
#ifndef DOMJUDGE
	std::cin.rdbuf(cinbuf);
	system("pause");
#endif
	return 0;
}