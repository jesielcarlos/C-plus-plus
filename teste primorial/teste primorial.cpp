#include <iostream>
using namespace std;
int main ()
{

    int num,i,j,div,p = 1;
    cout<<" DIGITE O NUMERO CUJO PRIMORIAL DEVE SER CALCULADO : ";
    cin>>num;

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
            p *= i;
        }
    }
    cout << " PRIMORIAL = "<<p;




  return 0;
}
