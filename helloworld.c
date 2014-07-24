#include<stdio.h>
void slice(char *,int ,int);
int main() {
	int a=1,b=2;
	int start,end;
	char string[100],slicestr[100];
	printf("Hello World!\n");
	printf("The sum is %d\n",add(1,2));
	swap(&a, &b);
	printf("The diff is %d\n",sub(2,1));
	printf("The multiplication is %d\n",multi(2,1));

	printf("the division is %d", divide(a, b));
	printf("Enter the string \n");
	scanf("%s",string);
	printf("Enter the start and end number :\n");
	scanf("%d %d",&start,&end);
	slice(string,start,end);
	printf("The original string is %s\n",string);
 

	return 0;
	
	
 }

int add(int a,int b)
{
	return (a+b);
}

int swap(int *a, int *b) {
	*a = *a + *b;
	*b = *a -*b;
	*a = *a - *b;
}
int sub(int a ,int b)
{
	return (a-b);
}
int multi(int a ,int b)
{
	return(a*b);
}

// a/b
int  divide(int a, int b) {
	if (b != 0) {
		return a/b;
	} else {
		printf("unable to divide!");
	}
}

void slice(char* string ,int start,int end)
{	int k=0,i;
	char slicestr[100];
	for(i=start;i<end&&string[i]!='\0';i++)
	{
		slicestr[k]=string[i];
		k++;
	}
	slicestr[k]='\0';
printf("The sliced string is %s\n",slicestr);

}
