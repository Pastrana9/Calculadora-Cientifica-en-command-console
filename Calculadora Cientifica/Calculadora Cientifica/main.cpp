//
//  main.cpp
//  Calculadora Cientifica
//
//  Created by Manuel Pastrana Blazquez on 24/2/23.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
   char operador;
   double num1, num2, resultado;

   cout << "Bienvenido a la calculadora científica en C++" << endl;

   cout << "Por favor ingrese el primer número: ";
   cin >> num1;

   cout << "Por favor ingrese el operador (+, -, *, /, ^, r, sin, cos, tan, asin, acos, atan, sinh, cosh, tanh, asinh, acosh, atanh, log, log10, exp, ceil, floor): ";
   cin >> operador;

   if (operador == 'r') {
       resultado = sqrt(num1);
   } else if (operador == 'sin') {
       resultado = sin(num1);
   } else if (operador == 'cos') {
       resultado = cos(num1);
   } else if (operador == 'tan') {
       resultado = tan(num1);
   } else if (operador == 'asin') {
       resultado = asin(num1);
   } else if (operador == 'acos') {
       resultado = acos(num1);
   } else if (operador == 'atan') {
       resultado = atan(num1);
   } else if (operador == 'sinh') {
       resultado = sinh(num1);
   } else if (operador == 'cosh') {
       resultado = cosh(num1);
   } else if (operador == 'tanh') {
       resultado = tanh(num1);
   } else if (operador == 'asinh') {
       resultado = asinh(num1);
   } else if (operador == 'acosh') {
       resultado = acosh(num1);
   } else if (operador == 'atanh') {
       resultado = atanh(num1);
   } else if (operador == 'log') {
       resultado = log(num1);
   } else if (operador == 'log10') {
       resultado = log10(num1);
   } else if (operador == 'exp') {
       resultado = exp(num1);
   } else if (operador == 'ceil') {
       resultado = ceil(num1);
   } else if (operador == 'floor') {
       resultado = floor(num1);
   } else {
       cout << "Por favor ingrese el segundo número: ";
       cin >> num2;

       switch (operador) {
           case '+':
               resultado = num1 + num2;
               break;
           case '-':
               resultado = num1 - num2;
               break;
           case '*':
               resultado = num1 * num2;
               break;
           case '/':
               resultado = num1 / num2;
               break;
           case '^':
               resultado = pow(num1, num2);
               break;
           default:
               cout << "Operador inválido" << endl;
               return 0;
       }
   }

   cout << "El resultado es: " << resultado << endl;

   return 0;
}
