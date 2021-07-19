#include <iostream>
using namespace std;

void escreva (int x, int *y)
{
	for (int i = 0; i < x; ++i)
	{
		cout << i << "[" << y[i] << "]" << endl;
	}
}

void insertion_sort (int x, int *array)
{
	for(int i = 1; i < x; ++i)
	{
		int aux = array[i];
		int j = i - 1;
		cout << "[" << j << "]= " << array[j] << ", [" << j + 1 << "]: " << array[j + 1];
		cout << endl;
		while(aux <= array[j] && j >= 0)
		{
			cout << "[" << j << "]= " << array[j] << ", [" << j + 1 << "]: " << array[j + 1];
			array[j + 1] = array[j];
			--j;
			cout << " - trocou!" << endl;
		}
		array[j + 1] = aux;
		cout << endl;
	}
}

int main(int argc, char** argv)
{
	int v[8] = {3, 6, 1, 7, 2, 5, 4, 0};
	escreva(8, v);
	insertion_sort(8, v);
	escreva(8, v);

	return 0;
}
