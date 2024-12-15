#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,s;
    printf("Enter point X1\n");
    scanf("%f",&x1);
    printf("Enter point X2\n");
    scanf("%f",&x2);
    printf("Enter point Y1\n");
    scanf("%f",&y1);
    printf("Enter point Y1\n");
    scanf("%f",&y2);
    s=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("distance=%f",s);
    return 0;
}
