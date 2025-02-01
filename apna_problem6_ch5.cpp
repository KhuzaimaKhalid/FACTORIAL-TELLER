#include<stdio.h>
int fact(int n);

int main()
{
	printf("\t FACTORIAL TELLER \n");
	int j;
	printf("\n enter an integer: ");
	scanf("%d", &j);
	printf("the factorial of %d to n natural number is %d",j,fact(j));

	return 0;
}
int fact(int n){
	if(n == 0){
		return 1;
	}
   int factN1 = fact(n-1);
   int factN = factN1 * n;
   return factN;
}
