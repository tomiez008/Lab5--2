#include <stdio.h>

int main (void) {

int a;
int x;
printf("Enter a :");
scanf("%d",&a);
  if(a > 0)
x = a*15;
  else
x = a*(-15);
printf("x = %d",x);
return 0;
}


