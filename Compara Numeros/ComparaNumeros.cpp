#include <iostream>
using namespace std;
int main ()
{
    int numeros[25] = {1,2,3,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int concurso[15];
    int quant_num_que_sairam[25];
    int quant_num_que_nao_sairam[25];
    int i,j,k;

    for ( i=0 ; i<25 ; i++)
    {
        quant_num_que_sairam[i] = 0;
        quant_num_que_nao_sairam[i] = 0;
    }

    cout << " DIGITE O CONCURSO PARA SER COMPARADO "<<endl;

    for ( i=0 ; i<15 ; i++)
    {
        cin>> concurso[i];
    }

    for ( j=0 ; j<25 ; j++ )
    {

        for ( k=0 ; k<15 ; k++ )
        {
            if ( numeros[j] == concurso[k] )
            {
               quant_num_que_sairam[j] = quant_num_que_sairam[j] + 1;

            }

        }

    }

    cout<< " NUMEROS QUE SAIRAM " << endl << endl;

    for ( i=0 ; i<25 ; i++ )

    {
        cout << " NUMERO "<< i << " = " <<  quant_num_que_sairam[i] << endl;
    }


}