
#include <iostream>

using namespace std;


/*Leia uma matriz 5 x 5. Leia tamb�m um valor X.O programa dever� fazer uma busca desse valor na matriz e,
ao final, escrever a localiza��o(linha e coluna) ou uma mensagem de �n�o encontrado�.*/

void ler_mattriz(int** m, int l, int c) {
	for (int i = 0; i < l; i++){
		for (int j = 0; j < c; j++){
			cout << "informe os elementos da matriz: ";
			cin >> m[i][j];

		}
	}


}

void busca(int** m, int l, int c, int x) {
	bool encontrado = false;
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (m[i][j] == x)
			{
				cout << "O valor " << x << " foi encontrado na posi��o [" << i << "][" << j << "]." << endl;
				encontrado = true;
			}

		}
}
	if (!encontrado)
	{
		cout << "O valor " << x << " n�o foi encontrado na matriz." << endl;
	}

}


int main() {

	const int l = 5;
	const int c = 5;
	int x=0;
	int** matriz = new int* [l];
	for (int i = 0; i < l; i++)
	{
		matriz[i] = new int[c];
	}


	ler_mattriz(matriz, l, c);

	cout << "Informe o valor a ser buscado na matriz: ";
	cin >> x;

	busca(matriz, l, c, x);









}