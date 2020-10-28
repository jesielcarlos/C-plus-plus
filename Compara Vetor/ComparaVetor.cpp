#include <iostream>
using namespace std;
int main ()
{
    int v1[4];
    int v2[4];
    int vs[4];

    int n;
    int i,j;

    cout << " DIGITE O PRIMEIRO VETOR " << endl;

    for (i=0 ; i<4 ; i++)
    {
        cin >> v1[i];
    }

    cout << " DIGITE O SEGUNDO VETOR " << endl;

    for (i=0 ; i<4 ; i++)
    {
        cin >> v2[i];
    }

    for (i=0 ; i<4 ; i++)
    {
        for (j=0 ; j<4 ; j++)
        {
            if ( v1[i] == v2[j])
            {
                vs[i] = 0;
                break;
            }
            else
            {
               vs[i] = v1[i] ;
            }

        }
    }


    cout << endl << endl;

    for ( i=0 ; i<4 ; i++)
    {
        cout << vs[i] << "   " << endl;
    }

    return 0;
}
