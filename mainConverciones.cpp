//Marco Lanza Enero 20 2019 
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	system("color E");
	int numero;
	cout << "\n\n\tHola Mundo wasap!!\n\n";
	cout << "Converciones decimal a ----> binario, octal, hexadecimal\n\n";
	int otra = 1;
	while (otra == 1) {
		cout << "Ingrese numero: ";
		cin >> numero;
		int numeroOctal = numero;
		int numeroBinario = numero;
		int numeroHexadecimal = numero;
		//decimal 
		cout << "\n\n\nDECIMAL\n\n";
		cout << "=" + to_string(numero);
		//binario
		string cadenaBinario, cadenaOctal, cadenaHexadecimal;
		cout << "\n\n\nBINARIO\n\n";
		while (numeroBinario != 0)
		{
			if (numeroBinario % 2 == 0) cadenaBinario = "0" + cadenaBinario;

			else cadenaBinario = "1" + cadenaBinario;

			numeroBinario /= 2;
		}
		cout << "=" << cadenaBinario << endl;
		//Octal
		cout << "\n\n\nOCTAL\n\n";
		int sobrante;
		while (numeroOctal != 0)
		{
			sobrante = numeroOctal % 8;

			cadenaOctal = to_string(sobrante) + cadenaOctal;
			numeroOctal /= 8;
		}
		cout << "=" << cadenaOctal << endl;
		//Hexadecimal
		cout << "\n\n\nHEXADECIMAL\n\n";
		int sobranteHexa;
		while (numeroHexadecimal)
		{
			sobranteHexa = numeroHexadecimal % 16;
			cadenaHexadecimal = to_string(sobranteHexa) + cadenaHexadecimal;

			numeroHexadecimal /= 16;

		}
		cout << "=" << cadenaHexadecimal << endl;
		cout << "\n\nPresione el numero 1 + Enter para ingresar otro numero decimal, cualquier otro input para salir:";
		cin >> otra;
		cout << "\n\n\n";
	}
	cout << "\n\n\tFin de programa\n\n";
	system("pause");
}