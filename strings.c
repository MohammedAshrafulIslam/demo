#include <stdio.h>

int main(){

	printf("Hello Please tell me your name: ");
	
	char name[31];
	
	scanf("%s", name);

	printf("Hello %s!\n", name);
	return 0;


}
