#include <stdio.h>
int main(){
	char str[50];
	int i=0;
	int count=0;
	printf("Enter a string: ");
	scanf("%[^\n]", &str);

while(str[i]!='\0'){
	if( str[i]==' '|| str[i]== '\t' ||  str[i] == '\n'){
		count++;
	}
	i++;
}
  printf("Number of whitespace characters: %d\n", count);

return 0;	
}
