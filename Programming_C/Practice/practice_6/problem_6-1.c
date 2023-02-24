#include<stdio.h>

int main()
{
    printf("int is %d byte\n" , sizeof (int));
    printf("long long int is %d byte\n" , sizeof (long long int));
    printf("float is %d byte\n" , sizeof ( float));
    printf("double is %d byte\n" , sizeof ( double));
    printf("char is %d byte\n" , sizeof ( char));

    return 0;
}