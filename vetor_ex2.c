#include <stdio.h>
#include <stdlib.h>

int main (){
    char idade[4][100];
    const int a = 4;
    int i;
for ( i = 0; i <= a; i++)
{
    printf("digite a idade %d ", i + 1);
    scanf("%s",&idade[i]);
}
    printf("idade das pessoas\n");

for ( i = 0; i <= a; i++)
{
    printf("\nidade %d: %s ", i + 1,idade[i]);
}
    
}