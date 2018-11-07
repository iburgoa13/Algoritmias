#include <iostream>
#include <string>
using namespace std;
const int MAX = 15;
void resuelve();
void cucuruchoC(int c, int v, string pal, bool &primero);
int main()
{
	int casos;
	int i = 0;
	cin >> casos;
	while (i < casos)
	{
		resuelve();
		cout << endl;
		i++;
	}
	return 0;
}
void resuelve()
{
	int choco, vainilla;
	string palabra = "";
	cin >> choco >> vainilla;
	bool primero = true;

	cucuruchoC(choco, vainilla, palabra,primero);

}
void cucuruchoC(int c, int v, string pal,bool &primero)
{
	if (c == 0 && v == 0 && primero)
	{
		cout << pal;
		primero = false;
		return;
	}
	if (c == 0 && v == 0 && !primero)
	{
		cout << " " + pal;
		return;
	}

	if (c > 0)
	{
		cucuruchoC(c - 1, v, pal + 'C',primero);
	}
	if (v > 0)
	{
		cucuruchoC(c, v - 1, pal + 'V',primero);
	}

}