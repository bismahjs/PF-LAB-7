#include <stdio.h>
int main(){
	int val[50];
	int n,i;
	
	printf("enter the number(n) of value (upto 50) you want: ");
	scanf("%d", &n);
	
	for(int i=0; i<n;i++){
		printf("Enter %d integers: ", n);
		scanf("%d", &val[i]);
	}
	for(int i=n-1; i>=0; i--){
		printf("%d", val[i]);	
	}

return 0;
}
