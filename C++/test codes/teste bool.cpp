#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#define numVidas 3.14 //teste define como constante sem ocupar memoria RAM

using namespace std;


int main (){
fflush(stdin);
// declaração de variavel
bool var1;
string auxtrue;
string auxfalse;

// entrada de dados
cout << "are u a student? true/false?"; 
cin >> auxtrue;

// processamento
if (auxtrue == "true"){
var1 = 1;
} else var1 = 0;

// saida
cout << var1;
cout << "seu numero de vidas: " << numVidas; //teste define como constante sem ocupar memoria RAM

system("PAUSE"); // system pause pra vc n esquecer

return 0;
}