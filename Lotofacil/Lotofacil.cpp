#include <iostream>
using namespace std;


long int fat(int x)
{
	  if(x==0 || x==1)
      {
          return 1;
      }
	  else
		  {
		      return (x * fat(x-1));
		  }
}


int main ()
{
    unsigned int n=0,p=0,n_p=0,n_pfat=0,nfat=0,pfat=0;
    long int C;

    cout << " QUANTIDADE DE NUMEROS PARA O AGRUPAMENTO " << endl<<endl;
    cin >> n;
    cout << " DIGITE QUANTOS NUMEROS TEM O GRUPO " << endl<<endl;
    cin >> p;
    nfat = fat(n);
    cout << "nfat = "<<nfat<<endl;
    pfat = fat(p);
    cout << "pfat = "<<pfat<<endl;
    n_p = n - p;
    cout << "n - p = "<<n_p<<endl;
    n_pfat = fat(n_p);
    cout << "n_pfat = "<<n_pfat<<endl;

    C = nfat/( pfat * n_pfat );

    cout << C << " COMBINACOES POSSIVEIS DE " << n << " NUMEROS EM GRUPOS DE "<< p << endl<<endl;




    return 0;
}
