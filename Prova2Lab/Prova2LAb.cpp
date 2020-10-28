#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX=100;



int num_aleatorios (int p, int q )
{
    return (rand ()%(q - p  + 1) + p);
}

void gera_matriz (int mat [][MAX], int n)
{
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            mat [i][j] =(num_aleatorios (1,9));
            cout << mat [i][j]<< "  ";
        }
        cout << endl;
    }
}

void matriz_problema (int mat [][MAX],int vet [], int n, int c1, int c2)
{
    int v1[n], v2[n], i, j;

    for ( i = 0; i < n ; i++)
    {
            v1[i] = mat [i][c1];
            v2 [i] = mat [i] [c2];

    }

    for (int i = 0 ; i < n; i++)
    {
        for (j = 0 ; j < n ; j++)
        {

            if (v1[i] == v2[j])
            {

                vet [i] = 0;
                break;

            }
            else{
                vet[i] = v1[i];
              }


        }
    }

}


int main ()
{

    srand (time (0));
    int n, vi1, vi2;

    int matA [MAX][MAX];
    cout << " Informe a ordem da matriz quadrada: " << endl;
    cin>>n;

    int v[n];

    cout << " Matriz gerada: " <<endl;

    gera_matriz (matA,n);

    cout << " Informe o indice do 1o. vetor coluna: "<<endl;
    cin>>vi1;
    cout << " Informe o indice do 1o. vetor coluna: "<<endl;
    cin>>vi2;

    matriz_problema (matA, v, n, vi1, vi2);


    cout << " Valores que pertecem ao 1o. vetor coluna e não pertecem ao 2o.: " << endl;

for (int i = 0 ; i < n ; i++)
    {
          if ( v[i] != 0)
            {

          cout << v[i] << " ";
          }
    }

   return 0;
}
