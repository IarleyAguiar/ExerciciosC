/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, contador;

    printf("Digite um valor: ");
    scanf("%d",&num);
    contador = 9;
    while (contador != 0){
        printf("%d ", num*contador);
        contador--;
    };
    return 0;
}
