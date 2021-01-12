#include<stdio.h>

int main(){
	/*this program gets input on number of countries and rating of the countries by the user*/
	int i, noCountries, rating, favRating, leRating; //1 variables noCountires = number of countries 
	char countryName[15],favorite[15],least[15];	 //2 variables
	favRating = 0;	//3 /favRating/ set to 0 
	leRating = 10;	//4 /leRating/ set to 10
	do{
		printf("In a number...number of countries you have been to: "); //5 asks input from the user
		scanf("%d", &noCountries);					//6 stores input from the user /noCountries/ variable	
			if(noCountries < 1){					//7 /noCountries/ set "<1" to give it condition
				printf("try again");	//8 if condition set to true this code is returned and the 'do' loop continues
			}
	}while(noCountries < 1);	//9 this condition in 'while' loop must be false in order to continue with the program 
	for(i=1;i<=noCountries;i++){	//10 /i<=noCountries/ so that 'for' loop stops at the necessary user determined input 
		printf("name of the country: ");		//11 asks input from the user
		scanf("%s",countryName);			//12 stores input from the user in /countryName/ variable
		printf("rate the country 1 - 10: ");		//13 asks input from the user between 1 - 10
		scanf("%d",&rating);				//14 stores input from the user /rating/ variable
			if (rating > favRating){	//15 /rating > favRating/ favRating stores value through the loop execution
				strcpy(favorite, countryName);  //16 copies the line 12 variable into /favorite/ variable 
				favRating = rating;		//17 /favRating = rating/ is determined here!
			}if (rating < leRating){	//18 /rating < leRating/ leRating stores value through the loop execution
				strcpy(least, countryName);	//19 copies the line 14 variable into /least/ variable 
				leRating = rating;		//20 /leRating = rating/ is determine here!!
			}
	}printf("favorite country: %s\nleast-favourite country: %s\n",favorite,least);

	return 0;
}
