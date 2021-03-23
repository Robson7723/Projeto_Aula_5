#include <cstdlib>
#include <string.h>
#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

int NumLa; 
double MedLa1, MedLa2, MedLa3, T, Area, p, a;
string poligono, cont;

int main() {
    
    setlocale (LC_ALL, "Portuguese");
    
    Menu:
    
    system("clear");
    
    cout<<"\n\n\n------Area de um Polígono-------";
    cout<<"\nQuantos lados tem o Polígono?...";
    cin>>NumLa;
   
    
    if (NumLa < 3 )
       {
       
        cout<<"\nNão é um Polígono!!..";
        
        cout<<"\n\nPara calcular novamente digite[S] ou [N] para encerrar.";
        cin>>cont;
   
          if (cont == "S"  || cont == "s")
             goto Menu;
          else
              exit(0);
       }
    
    else if (NumLa == 3)
       {
        
        poligono = "Triângulo";
        cout<<"\nA figura é um triangulo. Informe a medida do 1º lado: ";
        cin>> MedLa1;
        cout<<"\nInforme a medida do 2º lado: ";
        cin>> MedLa2;
        cout<<"\nInforme a medida do 3º lado: ";
        cin>> MedLa3;
        
        T = (MedLa1 + MedLa2 + MedLa3)/2;
        Area = sqrt (T*(T-MedLa1)*(T-MedLa2)*(T-MedLa3));
              
        }
    else if (NumLa == 4)
        {
        
        poligono = "Quadrado";
        cout<<"\nA figura é um quadrado. Informe a medida do lado: ";
        cin>> MedLa1;
        
        Area = (MedLa1 * MedLa1);
        
        }
    
    else if (NumLa == 5)
        
       {
        
        poligono = "Pentâgono";
        cout<<"\nA figura é um pentagono. Informe a medida dos lados: ";
        cin>> MedLa1;
        
	p = (MedLa1 * 5)/2;
	a = (MedLa1 / 2) / 0.726;
        Area = (p * a);
        
       }
    
    else
       if (NumLa > 5 )
       {
       
        cout<<"\nPolígono não identificado!!..";
        
        cout<<"\n\nPara calcular novamente digite[S] ou [N] para encerrar.";
        cin>>cont;
   
          if (cont == "S"  || cont == "s")
             goto Menu;
          else
              exit(0);
       }
    cout << fixed << setprecision(2);
    cout<<"\nO poligono é um "<<poligono<<" e sua area é: "<<Area<<" centimetros quadrados!!"<<endl;
    
    system("sleep 4");
    system("clear");
    
    cout<<"\nPara calcular novamente digite[S] ou [N] para encerrar.";
    cin>>cont;
    
    if (cont == "S"  || cont == "s")
        goto Menu;
    else
    
       exit(0);
        
    return 0;
}

