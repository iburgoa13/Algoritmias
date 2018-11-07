#include <iostream>

using namespace std;


void tresdedos(int n)
{
	if (n >= 6) { tresdedos(n / 6); }

		cout << n % 6;
	
}

void resuelve()
{
	int n;
	std::cin >> n;
	int numero;
	for (int i = 0; i < n; i++)
	{
		std::cin >> numero;
		tresdedos(numero);
		cout << endl;
	}
}

int main()
{
	resuelve();
	return 0;
}