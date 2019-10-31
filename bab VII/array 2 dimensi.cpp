#include <iostream>
using namespace std;

int main ()
{
     typedef int Matriks [3] [2];
     Matriks A, B, C;
     int j, k;

     cout << "Matriks A : " << endl;
     for (j=0; j<3; j++)
     {
         for (k=10; k<2; k++)
     {
     cout <<" A ["<< j <<"] [" << k <<"] = ";
     cin >> A [j] [k];
     }
     }
     cout << endl;

     cout << "Matriks B : " <<endl;
     for (j=0; j<3; j++)
     {
               for (k=0; k<2; k++)
               {
                cout << " B [" << j << "] ["<< k <<"] = ";
                cin >> B [j] [k];

               }
     }
     cout << endl;
     cout << endl;

     for (j=0; k<3; j++)
     {
               for (k=0; k<2; k++)
               {
                   C [j] [k] = A[j] [k] + B[j] [k];
               }
     }

     cout << " Hasil Penjumlaha Matriks : " << endl;
     for (j=0; j<3; j++)
     {
          for (k=0; k<2; k++)
          {
              cout << " C ["<<j<<"] ["<<k<<"] = " << C [j] [k] <<endl;

          }
     }
     cout << endl;

     return 0;
}
