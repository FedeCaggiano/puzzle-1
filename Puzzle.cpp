#include <iostream>

using namespace std;

int a, b, c, valor, pos2;
bool bandera=false;

long long pos = 0; //Debe ser una variable grande para recibir la posicion 2023202320232023

int main(){
    do
    {
        cout<<endl<<"Ingrese la posicion del numero deseado:  ";
        cin>>pos;
        do
        {   
            bandera=false;
            a = 2023;
            b = 2024;
            c = 2025;
            valor = 0;

            if (pos==1)
                valor=a;
            else if (pos==2)
                valor=b;
            else if (pos==3)
                valor=c; 
            else if (pos>=4)
            {
                for (int i = 3; i < pos; i++)
                {
                    if (i>3 && a==2023 && b==2024 && c==2025)
                    {
                        cout<<endl<<"Repeticion de la serie a partir de pos: "<<i-2<<endl;
                        pos2 = i-3; //Guardo la posicion de la repeticion en una variable global
                        bandera=true;
                        break;
                    }
                    
                    valor = (a + b + c) %10000;
                    a=b;
                    b=c;
                    c = valor;
                }
            }

            if (bandera==true)
            {
                //Calcular el valor deseado a partir de la repeticion
                pos = pos%pos2;
                cout<<"Posicion equivalente "<<pos<<endl;
            }
           
        } while (bandera==true);    

        cout<<"Ultimos 4 digitos: ";
        cout.fill  ('0');    
        cout.width ( 4 );
        cout<<valor<<endl;
        
    } while (true);
    return 0;
}