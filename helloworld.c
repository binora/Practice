#include<stdio.h>
int main() {
	printf("Hello World!\n");
	printf("The sum is %d\n",add(1,2));
	printf("The diff is %d\n",subtract(2,1));
	return 0;
 }
// TODO: Add a second program addition.c to add two numbers a and b
int add(int a,int b)
{
	return (a+b);
}
int subtract(int a,int b)
{
	return (a-b);
}
