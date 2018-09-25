//Iker Burgoa


#include <iostream>
#include <fstream>
#include <string>
using namespace std;



void resuelveCaso() 
{
	string nombre;
	getline(cin,nombre);
	nombre = nombre.substr(3, nombre.length());
	cout << "Hola," << nombre << "." << endl;
}

int main() {
	// Para la entrada por fichero.


	unsigned int numCasos;
	std::cin >> numCasos;
	cin.get();
	// Resolvemos
	for (int i = 0; i < numCasos; ++i) {
		resuelveCaso();
	}




	return 0;
}