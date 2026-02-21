#include <stdio.h> 
#include <conio.h>

int main() {
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello World !!\n"); 

    printf("Masukkan Nama : ");
    gets(nama); // gets = get string

    printf("Masukkan NIM : ");
    scanf("%d", &nim);

    getchar();

    printf("Masukkan KOM : ");
    gets(kom);

    printf("Masukkan IP : ");
    scanf("%f", &ip);

    /* Output */
    printf("Nama : ");
    puts(nama);

    printf("NIM :  %d\n", nim);

    printf("KOM : ");
    puts(kom);

    printf("IP : %f\n", ip);

    printf("press any button to continue...");
    getch();
}