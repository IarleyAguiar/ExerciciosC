/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero=0, num2=0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    num2 = (numero-1)+(numero-2);
    printf("O %d° número da série de Fibonacci é %d, e sua série Fibonacci é %d e %d.", numero, num2, (numero-1), (numero-2));
    return 0;
}
