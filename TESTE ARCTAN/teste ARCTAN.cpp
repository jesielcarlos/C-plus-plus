#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float div, x, arctan, i;
    i = 0;
    div = 2;

    cout << " X = "<<endl;
    cin>> x;

while ( div >= 0.00001 )
    {
           div = 0;
           div = ( pow((-1),i) * pow( x, ((2*i)+1)  ) )/ ((2*i)+1);
           cout<< " div = " << div<<endl;
           arctan = arctan + ( pow((-1),i) * pow( x, ((2*i)+1)  ) )/ ((2*i)+1);
           i++;

           if (div < 0 )
           {
               div = div * -1;
           }

    }

 return 0;
}
