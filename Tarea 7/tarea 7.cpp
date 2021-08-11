#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
# include <math.h>
# include <iomanip>
# include <ctype.h>
using namespace std;
int main(){
setlocale(LC_ALL, "spanish");
system ("color 02");
char m,d, t;
char rp;
float a,b,result;

cout<< "Bienvenido"<<endl;
cout<< "Seleccione la operacion a realizar:"<< endl;
cout<< "*Multiplicación (m)"<< endl;
cout<< "*Convertir dolares a quetzales (d)"<< endl;
cout<< "*Calcular el área de un triangulo (t)"<< endl;
cout<< "*presione [enter] para comenzar o presione [N] para salir"<< endl;
cin>> m;
system("cls");
cout<< "Ingrese el número, cantidad o la base:"<<endl;
cin>>a;
system("cls");
cout<< "Ingrese otro número o la altura:"<<endl;
cin>>b;
system("cls");

if (m=='m'){
result=a*b;
}
else

if (m=='d'){
result=a*7.75;
}
else

if (m=='t'){
result=(a*b)/2;
}
else

system("cls");
cout<<"El Resultado de su operacion es:"<<result<<endl;
{
cout<<"\nDesea otra operacion [enter] o presione [N] para salir?";
rp=toupper(getch());
if (rp=='N') ;
}
return(0);
}

