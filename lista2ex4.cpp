#include <iostream>
#include <locale.h>
using namespace std;
int main (int argc, char**argv)
{
	setlocale(LC_ALL, "");
	int b;
	int h;
	int a;
	cout << "digite o valor da base :";
	cin >> b;
	cout << "digite o valor da altura :";
	cin >> h;
	a=b*h;
	cout << "a área do retângulo calculada :" << a << endl;
	
	if (a>100)
	{
		cout << "terreno grande";	
	}
		
		return 0;
	
	
}