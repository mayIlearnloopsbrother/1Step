#include<stdio.h> 
#include<string.h> 
int main(){
	/*THIS PROGRAM USES STRING TO TAKES INPUT FROM THE USER CAN BE EITHER (NUMBER/LETTER) AND PRINTS BOTH THE NUMBER+LETTER*/
	char i[40],j[40],k[40],a[4][10]={"zero","one","two","three"},d[4][10]={"0","1","2","3"};
	int b,c,z;

	printf("number: ");
	scanf("%s",i);
	if (strcmp(i,d[1]) == 0 || strcmp(i,a[1]) == 0){	// both argument evaluates to 0 the || OR operator is used so that user can enter both number or letter
	}else if (strcmp(i,d[2]) == 0 || strcmp(i,a[2]) == 0){  // both argument evaluates to 0 the || OR operator is used so that user can enter both number or letter
	}else if (strcmp(i,d[3]) == 0 || strcmp(i,a[3]) == 0){  // both argument evaluates to 0 the || OR operator is used so that user can enter both number or letter
	}
	
/*for(z=1;z<=2;z++){
if (a[1] > d[0]*/			


		
	printf("%s\n",i);
	

	return 0;
}
