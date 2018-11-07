// NOMBRE Y APELLIDOS

#include <iostream>

#include <fstream>
using namespace std;

int dibujaFractales(long long int n)
{
	long long int fractales=0;
	if (n == 1) //caso recursivo
	{
		return 4 * n;
	}
	else
	{
		fractales = dibujaFractales(n / 2);
		fractales = (fractales * 4) + (n * 4);
	}
	return fractales;
}
bool resuelveCaso() {

	//Leer caso de prueba
	long long int n;
	if (cin >> n)
	{
		long long int k;
		k = dibujaFractales(n);
		cout << k << endl;
		return true;
	}

	//Resolver problema
	//Escribir resultado
	return false;
}


int main() {
	while (resuelveCaso());
	return 0;
}
	/*
	// ajuste para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
	std::ifstream in("casos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

	while (resuelveCaso());

	// restablecimiento de cin
#ifndef DOMJUDGE
	std::cin.rdbuf(cinbuf);
	//system("pause");
#endif
	return 0;
}*/