#include<stdio.h>
int main()
{
 double width,height,length,volume=1;
          printf("Enter the width of the room:");
          scanf("%lf",&width);
          printf("Enter the height of the room:");
          scanf("%lf",&height);
          printf("Enter the lenght of the room:");
          scanf("%lf",&length);
 volume*=(width*height*length);
          printf("The volume of the room:%f cubic inches",volume);
 return 0;
}
