#include<stdio.h>

int main(){
	int i, j, noCountries, rating, favRating, leRating; 
	char countryName[15],favorite[15],least[15];	
	favRating = 0;	
	leRating = 10;	
	do{
		printf("In a number...number of countries you have been to: "); 
		scanf("%d", &noCountries);				
			if(noCountries < 1){			
				printf("try again");	
			}
	}while(noCountries < 1);	
	
	for(i=1;i<=noCountries;i++){
		for(;;){
			printf("name of the country: ");	
			scanf("%s",countryName);	
				if(atoi(countryName) <= -1 && atoi(countryName)){
					continue;
				}if(atoi(countryName) == 0){
					break;
				}
		}

		for (;;){
			printf("rate the country 1 - 10: ");
			scanf("%d",&rating);	
				if(rating <= 10){
					break;
				}if(rating >10){
					continue;
				}	
		}

		if (rating > favRating){
				strcpy(favorite, countryName);
				favRating = rating;	
		}if (rating < leRating){
				strcpy(least, countryName);
				leRating = rating;	
		}
	}printf("favorite country: %s because you gave %d out of 10\nleast-favourite country: %s because you gave %d out of 10\n",favorite, favRating,least,leRating);

	return 0;
}
