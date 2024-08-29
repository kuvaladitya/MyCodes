#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
float d;
printf("Enter the number 1\n");
scanf("%d",&a);
printf("Enter the number 2\n");
scanf("%d",&b);
printf("Sum of two numbers is %d\n",a+b);
printf("Difference of two numbers is %d\n",a-b);
d=a/b;
printf("Division of two numbers is %f\n",d);
printf("Multiplication of two numbers is %d\n",a*b);
c=pow(a,b);
printf("a raise to power b is %d\n",c);
    return 0;
}