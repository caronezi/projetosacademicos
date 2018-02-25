/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: leo
 *
 * Created on 25 de Fevereiro de 2018, 10:10
 */

#include <cstdlib>
#include <math.h>
#include <iostream>
using namespace std;

/*
 * 
 */
int main() { 
    float numero, numero2, resultado;
    int operador; 
     cout << "Digite um numero :" << endl;
      cin >> numero;
       cout <<" escolha o operador:" <<endl;
         cout <<" 1 para adicao , 2 para subitracao, 3 mutiplicacao, 4 divisao"  <<endl;
         cin  >> operador;
          cout << "escola o segundo numero " << endl;
            cin >> numero2;
                       
         switch (operador) {  
             case 1:
               resultado = numero + numero2;
               cout <<"o resultado e : "<< resultado << endl;
             break;
             case 2:
               resultado = numero - numero2;
               cout <<"o resultado e : " << resultado << endl;
             break;
             case 3 :
                resultado = numero * numero2; 
                cout << "o resultado e : " << resultado << endl;
                break;
             case 4 :
              resultado = numero /numero2;
              cout << "o  resultado e : " << resultado << endl;
               break;
         }    
    return 0;
}

