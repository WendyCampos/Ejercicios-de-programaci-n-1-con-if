#include <conio.h>
#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf( "Introduzca el primer numero:\n " );
    scanf( "%d", &n1 );
    printf( "Introduzca el segundo numero:\n " );
    scanf( "%d", &n2 );
    printf( "Introduzca el tercer numero:\n " );
    scanf( "%d", &n3 );

    if ( n1 >= n2 && n1 >= n3 )
        printf( "el numero mayor es:\n   %d ", n1 );
    else

        if ( n2 > n3 )
            printf( "es el mayor:\n   %d ", n2 );
        else
            printf( "es el mayor:\n   %d ", n3 );
 
    getch(); 

}
