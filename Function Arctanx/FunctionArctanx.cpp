#include <iostream>
#include <cmath>
using namespace std;


float F_arctan (float x);


int main ()
{

    float n, res;

    do
    {

        cout << " Insira um valor entre 0 e 1: " << endl;
        cin>> n;
    }
    while (!(n>=0&&n<=1));


    res = F_arctan (n);

    cout << " O arco tangente de " << n << " e " << res << endl;


    return 0;
}

float F_arctan (float x)
{
    float arctan = 0;
    int i;
    i = 0;
    float div = 2;
    while ( div >= 0.00001 )
    {
           div = 0;
           div = ( pow((-1),i) * pow( x, ((2*i)+1)  ) )/ ((2*i)+1);
           arctan = arctan + ( pow((-1),i) * pow( x, ((2*i)+1)  ) )/ ((2*i)+1);
           i++;

           if ( div < 0)
           {
               div = div * -1;
           }

    }

    return arctan;

}
