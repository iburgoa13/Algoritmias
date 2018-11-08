#include<iostream>
#include<cstdlib>
#include<string.h>
#include <string>



using namespace std;

bool haybuhos(const string &pal, int i, int j)
{
	bool b;
	if (i >= j) { return true; }
	else if (pal[i] == ' ')
	{
		b= haybuhos(pal, i + 1, j);
	}
	else if (pal[j] == ' ')
	{
		b = haybuhos(pal, i, j - 1);

	}
	else if (tolower(pal[i]) == tolower(pal[j]))
	{
		b = haybuhos(pal, i + 1, j - 1);
	}
	else b = false;
	return b;
	/*
	if (i >= j && !pal.empty())
	{
		return true;
	}
	else if (pal.empty())
	{
		return false;
	}
	else if (pal[i] == ' ')
	{
		haybuhos(pal, i + 1, j);
	}
	else if (pal[j] == ' ')
	{
		haybuhos(pal, i, j - 1);

	}
	else if(tolower(pal[i])== tolower(pal[j]))
	{
		haybuhos(pal, i + 1, j - 1);
	}
	else
		return false;
	*/
}
int main()
{
	string palabra;
	getline(cin, palabra);
	int i = 0;
	while (palabra!="XXX")
	{
		

		 if (haybuhos(palabra, 0,palabra.size() - 1))
		{
			cout << "SI" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		getline(cin, palabra);
	}
	return 0;
}