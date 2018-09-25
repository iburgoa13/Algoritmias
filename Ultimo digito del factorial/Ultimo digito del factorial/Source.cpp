//IKER BURGOA 


#include <iostream>
#include <fstream>
using namespace std;

int factorial(int n)
{
	int factorial = 0;
	switch (n)
	{
	case 0: factorial = 1;
		break;
	case 1: factorial = 1;
		break;
	case 2: factorial = 2;
		break;
	case 3: factorial = 6;
		break;
	case 4: factorial = 4;
		break;
	}
	/*
	if (n > 4) { factorial = 0;}
	else
	{
		for (int i = 2; i <= n; i++)
		{
			factorial = factorial * i;
		}
		factorial = factorial % 10;
	}*/
	
	return factorial;
}

void resuelveCaso() {
	int n;
	cin >> n;
	cout << factorial(n) << endl;
}

int main() {
	


	unsigned int numCasos;
	std::cin >> numCasos;
	// Resolvemos
	for (int i = 0; i < numCasos; ++i) {
		resuelveCaso();
	}



	//system("PAUSE");

	return 0;
}