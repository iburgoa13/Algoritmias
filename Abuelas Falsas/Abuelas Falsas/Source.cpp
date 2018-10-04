#include <iostream>
#include <string>

using namespace std;
const int MAX = 100;


void resuelve()
{
	//string real[MAX]; tambien se puede hacer pero así la gestión es más rapida
	string real;
	string nombre;
	std::cin >> nombre;
	int nietos;
	int contador = 0;
	cin.get();
	std::cin >> nietos;
	cin.get();
	for (int i = 0; i < nietos; i++)
	{
		std::cin >> real;
		if (nombre == real) { contador++; }
	}
	if (nombre.compare(real)==0 && nietos >1 && contador ==1)
	{
		std::cout << "VERDADERA" << endl;
	}
	else
	{
		std::cout << "FALSA" << endl;
	}
}

int main()
{
	int n;
	std::cin >> n;
	cin.get();
	for (int i = 0; i < n; i++)
	{
		resuelve();
		
	}
	return 0;
}