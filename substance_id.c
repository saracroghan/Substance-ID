
#include <stdio.h>

int within_x_percent(double, double, double);

int main() {
    double observed_bp;
    double percent;
    char yn;
    printf("Observed builing point (in deg. C)? ");
    scanf("%lf", &observed_bp);
    printf("You entered %.2f \n", observed_bp);
    printf("Custom error percent? n for no (5%% default), y for yes: ");
    scanf(" %c", &yn);
    switch(yn){
	case 'y':
	case 'Y':
		printf("Enter error percent: ");
		scanf("%lf", &percent);
		printf("You entered %.2f percent \n", percent);
		break;
	case 'n':
	case 'N': 
		 percent = 5;
		 break;
	default:
		printf("Error: bad input/public/labs/lab3/autograder.sh\n");
	 	return 0; 

    }
    double ref = 100;
    if (within_x_percent(ref, observed_bp, percent) == 1) {
        printf("Substance is water \n");
	return 0;
    } else if(within_x_percent(ref+257, observed_bp, percent)==1){
        printf("Substance is mercury \n");
	return 0;
    }else if(within_x_percent(ref+1087, observed_bp, percent)==1){
	    printf("Substance is copper \n");
	    return 0;
    }else if(within_x_percent(ref+2093, observed_bp, percent)==1){
	    printf("Substance is silver \n");
	    return 0;
    }else if(within_x_percent(ref+2560, observed_bp, percent)==1){
	    printf("Substance is gold \n");
	    return 0;
    }else{
	    printf("Substance unknown \n");
    }

    return(0);
