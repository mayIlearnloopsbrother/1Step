#include<stdio.h>
#include<string.h>
int main(){
	char a[4][15]= {"zero","one","two","three"},b[4][15]= {"0","1","2","3"};
	int i,j;
	
	printf("number letter or 123: ");
	scanf("%s", a);
	for (i=1;i<=a;++i){
		for(j=0;j<=i;++j){
			if (a[i] > b[j]){
				printf("%s",a[i]);break;
			}if(a[i] > b[j]){
				printf("%s",a[i]);break;
			}
		}
	}
	}printf("%s", a);




	return 0;
}
