#include <stdio.h>
int main()
{
	int sum=0;
	int num[4];

for(int i=0; i<4;i++){
	printf("enter the elements: ");
	scanf("%d", &num[i]);
	
	sum=sum+num[i];
}
	printf("The sum of the elements is %d", sum);
	return 0;
}
