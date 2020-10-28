#include <iostream>
using namespace std;
int main ()
{
    int Fprimorial(int x);
     int numero_termos;
     int i, termo;

     cout << " DIGITE A QUANTIDADE DE TERMOS DA SEQUENCIA " <<endl;
     cin >> numero_termos;
     cout<< endl;

     for ( i =0 ; i < numero_termos ; i++)
     {
         termo = Fprimorial(i);
         cout << termo << endl;
     }


return 0;

}

int Fprimorial(int num)
     {
         int i,j,div,res = 1;
      for(i=2;i<=num;i++)
    {
        div=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                div=1;
                break;
            }
        }
        if(div!=1)
        {
            res *= i;
        }
    }
    return res;



     }

