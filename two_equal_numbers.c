#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && a == c)
        printf("All numbers are equal!");

    else if(b > a && b > c && a == c)
        printf("B is bigger");

    else if(a > b && a > c && b == c)
        printf("A is bigger");

    else if(c > a && c > a && a == b)
        printf("C is bigger");

    else if(a > b && a == c)
        printf("A and C both are bigger!");

    else if(b > a && b == c)
        printf("B and C both are bigger!");

    else
        printf("A and B both are bigger!");


    return 0;
}
