//NOMBRE y APELLIDOS


#include <iostream>
#include <fstream>
using namespace std;



int resuelveCaso(int h, int c) {
	int x = h % c;
	if (x == 0)
		return (h / c)*10;
	else
		return ((h/c)+1)*10;
}

int main() {
	// Para la entrada por fichero.



	unsigned int numCasos,h;
	std::cin >> numCasos;
	std::cin >> h;
	// Resolvemos
	while(numCasos!=0 && h!=0) {
		cout << resuelveCaso(numCasos,h) << endl;
		std::cin >> numCasos;
		std::cin >> h;
	}


	return 0;
}