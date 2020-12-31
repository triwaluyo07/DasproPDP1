#include <stdio.h>
#include <stdlib.h>


//Nama : Tri Waluyo
//NIM : A11.2017.10097
//Kelompok : 4103
int main()
{

    int a;
    float b;
    char c;
    char d [15] ;


    printf ("Membaca dan menulis, ketik nilai integer: ");
    scanf ("%d", &a);
    printf ("Nilai yang dibaca : %d \n", a);

    printf ("Membaca dan menulis, ketik nilai float: ");
    scanf ("%f", &b);
    printf ("Nilai yang dibaca : %.2f \n", b);

    fflush(stdin);

    printf ("Membaca dan menulis, ketik karakter: ");
    scanf ("%c", &c);
    printf ("Karakter yang dibaca : %c \n", c);

    fflush(stdin);

    printf ("Membaca dan menulis, ketik kata: ");
    gets(&d);
    printf ("Kata yang dibaca : %s \n", d);

    return 0;
}
