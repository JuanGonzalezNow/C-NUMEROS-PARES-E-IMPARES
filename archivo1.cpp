#include <iostream>

using namespace std;

int suma(int a, int b)
{
    return a + b;
}

int main()
{
    int contadorP = 0;
    int contadorI = 0;
    int arr[10];
    cout << " |=== CONTADOR DE NUMEROS PARES E IMPARES ===| "<<endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> arr[i];
        if((arr[i]%2)==0)
        {
           contadorP++;
        }else
        {
           contadorI++;
        }
    }

    cout<<" NUMEROS PARES "<<contadorP;
    cout<<" NUMEROS PARES "<<contadorI;



    return 0;
}

