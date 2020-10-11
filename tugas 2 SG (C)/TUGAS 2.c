#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
    char nama[20];
    int a,a1;

printf("masukan nama : ");//nama
fgets(nama, 20, stdin);
strtok(nama, "\n");


    printf("masukan tahun lahir anda : ");
    scanf ("%d", &a);
    a1=2020-a;

    printf("halo %s", nama);//output
    printf (", umur anda %d tahun\n ",a1);

}
