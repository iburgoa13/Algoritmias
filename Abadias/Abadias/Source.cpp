//NOMBRE y APELLIDOS
//IKER BURGOA HA CAMBIADO TODO


#include <iostream>
#include <fstream>
using namespace std;

int calculaCordillera(int n, int v[])
{
	int num = 1;
	int i = n - 1;
	int aux = v[i];
	while (i > 0)
	{
		if (v[i - 1] > aux)
		{
			num++;
			aux = v[i - 1];
		}

		i--;
	}
	return num;
}

void resuelveCaso(int n) {
	int abadia[100000];
	for (int i = 0; i < n; i++)
	{
		std::cin >> abadia[i];
	}
	cout <<calculaCordillera(n, abadia) << endl;

	//resuelve aqui tu caso
	   //Lee los datos
	   //Calcula el resultado
	   //Escribe el resultado
}

int main() {
	// Para la entrada por fichero.

	unsigned int numCasos;
	std::cin >> numCasos;
	while (numCasos != 0)
	{
		resuelveCaso(numCasos);
		std::cin >> numCasos;
	}
	// Resolvemos
	/*
	for (int i = 0; i < numCasos; ++i) {
		resuelveCaso();
	}
	*/


	return 0;
}