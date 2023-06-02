/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 
int main() {
    int numfilhos, i=1;
    char filho;
    printf("Digite a quantidade de filhos: ");
    scanf("%d", &numfilhos);
    while (i != numfilhos){
        printf("Digite o nome do %d° filho/filha: ", i);
        scanf("%c", &filho);
        i++;
    };
    
 return 0;
}