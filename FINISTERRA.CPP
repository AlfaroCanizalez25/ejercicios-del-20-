nclude <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int gamadasusuario = 0;
    int gamadasterminator = 0;
    for (int i = 0; i < 3; i++)
    {

        int huevo;
    cout << "ingrese una opcion:";
    cin>> huevo; // 1 2 3 
    

    int random = rand()%3;
    cout << "opcion terminator:" << random << endl;
    if(huevo==random)
    {
        cout << "es igual a empate:";
    }
    else  
    {
        if (huevo==1 && random==3) {
            gamadasusuario++;
            cout << "gana usuario:";
        }
        else if (huevo==2 && random==1) {
            gamadasusuario++;
            cout << "Gana usuario";
        }
        else if (huevo==3 && random==2) {

        gamadasusuario++;
        cout << "Gana usuario";
        }
        else {
gamadasterminator++;
        cout << " Gana terminator ";
        }

        }

   }

   cout << "partidas que gano usuario: " <<gamadasusuario ;
   cout << "partidas que gano terminator: " <<gamadasterminator ;

}
