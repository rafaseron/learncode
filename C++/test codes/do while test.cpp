#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#define constante 10
using namespace std;


int main (){
setlocale(LC_ALL, "portuguese");

// declaração
int iVar = 0;

//processamento
do
{
    cout << "\n" << iVar;
    iVar++;
} while (iVar<=10);

system("PAUSE");
return 0;
}