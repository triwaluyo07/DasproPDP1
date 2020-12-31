#include <stdio.h>
#include <stdlib.h>

// Nama : Tri Waluyo
// Kelas : 4103
// NIM : A11.2017.10097

int main()
{
    printf("Luas Segitiga\n");
    printf("=================================\n");
    float angka1;
    printf("Masukkan alas segitiga : ");
    scanf(" %f", &angka1);


    float angka2;
    printf("|\n");
    printf("Masukkan tinggi segitiga :");
    scanf(" %f", &angka2);



    printf("|\n");

    printf("Alas segitiga  = %.2f\n", angka1);
    printf("Tinggi segitiga = %.2f\n", angka2);
    printf("Luas segitiga= %.2f\n", angka1*angka2*1/2);

    printf("|\n");

    float angka3;
    printf("sisi 1 :");
    scanf("%f", &angka3);

    float angka4;
    printf("sisi 2 :");
    scanf("%f", &angka4);

    float angka5;
    printf("sisi 3 :");
    scanf("%f", &angka5);

    int K;
    K=angka3+angka4+angka5;

    printf("sisi 1 = %.2f\n", angka3);
    printf("sisi 2 = %.2f\n", angka4);
    printf("sisi 3 = %.2f\n", angka5);
    printf("Keliling segitiga = %.2d\n", K);


    return 0;
}
