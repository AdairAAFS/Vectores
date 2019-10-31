#include <iostream>
#include <cstdlib>
using namespace std;
void pausa();
void Suma()
{
	float a, b, c;
	cout << "Has elejido Sumar" << endl;
	cout << "Introduce el primer valor: " << endl;
	cin >> a;
	cout << "Introduce el segundo valor";
	cin >> b;
	c = a + b;
	cout << "El resultado es: " << c << endl;
}
void Resta()
{
	float a, b, c;
	cout << "Has elejido Restar" << endl;
	cout << "Introduce el primer valor: " << endl;
	cin >> a;
	cout << "Introduce el segundo valor: " << endl;
	cin >> b;
	c = a - b;
	cout << "El resultado es: " << c << endl;
}
void Multiplicacion()
{
	float a, b, c;
	cout << "Has elejido Multiplicar" << endl;
	cout << "Introduce el primer valor: " << endl;
	cin >> a;
	cout << "Introduce el segundo valor: " << endl;
	cin >> b;
	c = a * b;
	cout << "El resultado es: " << c << endl;
}
void Dividir()
{
	float a, b, c;
	cout << "Has elejido Dividir" << endl;
	cout << "Introduce el primer valor: " << endl;
	cin >> a;
	cout << "Introduce el segundo valor: " << endl;
	cin >> b;
	c = a / b;
	cout << "El resultado es: " << c << endl;
}
int main()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("color 2");
		system("cls");
		cin.clear();
		cout << "Calculadora" << endl;
		cout << "----------" << endl;
		cout << "Sumar (1)" << endl;
		cout << "Restar (2)" << endl;
		cout << "Multiplicar (3)" << endl;
		cout << "Dividir (4)" << endl;
		cout << "Salir (5)" << endl;
		cout << "Elije una opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			Suma();
			pausa();
			break;
		case '2':
			system("cls");
			Resta();
			pausa();
			break;
		case '3':
			system("cls");
			Multiplicacion();
			pausa();
			break;
		case '4':
			system("cls");
			Dividir();
			pausa();
			break;
		case '5':
			bandera = true;
			break;
		default:
			system("cls");
			cout << "Opcion no valida" << endl;
			pausa();
			break;
		}
	} while (bandera != true);
	return 0;
}
void pausa()
{
	cout << "Pulsa una tecla para continuar...";
	getwchar();
	getwchar();
}