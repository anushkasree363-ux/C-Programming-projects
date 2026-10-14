#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
char ch;
printf("Enter the number: ");
scanf("%f %c %f",&a,&ch,&b);
switch(ch)
{
 case '+':
 {
 printf("Add=%f",a+b);
 break;
 }
 case'-':
 {
 printf("sub=%f",a-b);
 break;
 }
 case'*':
 {
 printf("product=%f",a*b);
 break;
 }
 case'/':
 {
 printf("divide=%f",a/b);
 break;
 }
 default:
 {
 printf("Invalid operator");
 }
}
return 0;
}


