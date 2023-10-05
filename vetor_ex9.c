#include <stdio.h>

int main() {
int i, fim = 19, copia,a[19];

for (i = 0; i < 20; i++)
{
    printf("digite os %d: ",i);
    scanf("%d",&a[i]);
}

printf("Vetor original: ");
for (i = 0; i < 20; i++)
{
    printf("-> %d",a[i]);
}

for ( i = 0; i < 10; i++)
{
   copia = a[i];
   a[i] = a[fim];
   a[fim]= copia;
   fim--;
}
printf("Vetor modificado: ");
for (i = 0; i < 20; i++)
{
    printf("-> %d ",a[i]);
}


}
