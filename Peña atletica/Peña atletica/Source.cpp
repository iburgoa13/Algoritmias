#include <iostream>
#include <fstream>
using namespace std;

int esPar(int n)
{
	if (n % 2 == 0)
	{
		return 1;
	}
	else return 0;
}

void resuelveCaso() {
	int n;
	int contador = 0;
	int loteria;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> loteria;
		contador += esPar(loteria);
	}
	cout << contador << endl;

}

int main() {
	// Para la entrada por fichero.
	unsigned int numCasos;
	std::cin >> numCasos;
	// Resolvemos
	for (int i = 0; i < numCasos; ++i) {
		resuelveCaso();
	}
}
