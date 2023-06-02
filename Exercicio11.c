/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
 
int main() {
 setlocale(LC_ALL, "");
 int num, contador, resultado = 0;
 
 printf("Digite um número: ");
 scanf("%d", &num);
 
 for (contador = 2; contador <= num / 2; contador++) {
    if (num % contador == 0) {
       resultado++;
    }
 }
 
 if (resultado == 0)
    printf("O número %d é um número primo\n", num);
 else
    printf("O número %d não é um número primo\n", num);
 
 return 0;
}