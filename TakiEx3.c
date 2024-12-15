#include<stdio.h>
int main ()
{
    float radious,area,perimeter;
    printf("Enter the radious\n");
    scanf("%f",&radious);
    area=3.1415926*radious*radious;
    perimeter=2*3.1415926*radious;
    printf("Area =%f\n",area);
    printf("Perimeter =%f",perimeter);
    return 0;
}
