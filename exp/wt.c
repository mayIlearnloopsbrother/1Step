#include<stdio.h>
#include<stdlib.h>
int main(){
	char *b[3], a[3][10]={"1","2","3"};
	int i;
	size_t malloc_size = 100;
	
	for(i=0;i<3;i++){
		b[i] = malloc(malloc_size * sizeof(char));
		printf("number: ");
		scanf("%99s", b[i]);
	}
	printf("%99s",b[i]);



	free(b[i]);
	b[i]=NULL;
	return 0;
}
