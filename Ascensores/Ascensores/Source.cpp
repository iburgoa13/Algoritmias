
#include <iostream>
using namespace std;




int resuelve( int &n)
{
	 int contador = 0;
	int piso=n;
	std::cin >> n;
	while (n >= 0)
	{
		/*
		if (piso > n) // 5   3  = 2
		{
			contador += piso - n;
		}
		else if (piso < n) // 3   5
		{
			contador += n - piso;
		}
		*/
		contador += abs(piso - n);
		piso = n;
		std::cin >> n;
	}

	return contador;
}


int main()
{
	 int inicio;
	std::cin >> inicio;
	while (inicio >=0)
	{
		std::cout << resuelve(inicio) << endl;
		std::cin >> inicio;
	}
	return 0;
}