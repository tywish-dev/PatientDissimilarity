#include <stdio.h>
#include <time.h>
#include <stdbool.h>

main(){
	
while(1){

	int i,a,b,j,c;
	srand(time(NULL));
	char ans;
	int testSize;
	double q = 0;
	double r = 0;
	double s = 0;
	
	printf("Enter the test size: ");
	scanf("%d", &testSize);
	
	int patient1[testSize];
	int patient2[testSize];

	
	for(i = 0; i < testSize; i++){
		int rand1 = rand() % 2;
		patient1[i] = rand1;
	}
	
	for(c = 0; c < testSize; c++){
		int rand2 = rand() % 2;
		patient2[c] = rand2;
	}
	
	printf("\nPatient 1: ");
	for(a = 0; a < testSize; a++){
		printf("%d ", patient1[a]);
	}
	
	printf("\nPatient 2: ");
	for(b = 0; b < testSize; b++){
		printf("%d ", patient2[b]);
	}
	
	
	for(j = 0; j < testSize; j++){
		if(patient1[j] == 1 && patient2[j] == 1){
			q++;
		}
		else if(patient1[j] == 1 && patient2[j] == 0){
			r++;
		}
		else if(patient1[j] == 0 && patient2[j] == 1){
			s++;
		}
	}
		
	double up = r+s;
	double down = q+r+s;
	
	double dissMeasure = up / down;
	
	if(dissMeasure == 0.0){
		printf("\n\nYour patients have dissimilaritiy measure of %.2lf and they are DEFINITELY have the same illness.", dissMeasure);
	}
	else if(dissMeasure == 1.0){
		printf("\n\nYour patients have dissimilaritiy measure of %.2lf and they are DEFINITELY NOT have the same illness.", dissMeasure);
	}
	else if(dissMeasure <= 0.5 && dissMeasure > 0){
		printf("\n\nYour patients have dissimilaritiy measure of %.2lf and they are MORE likely to have the same illness.", dissMeasure);
	}
	else if(dissMeasure > 0.5 && dissMeasure < 1){
		printf("\n\nYour patients have dissimilaritiy measure of %.2lf and they are NOT likely to have the same illness.", dissMeasure);
	}
	
	printf("\n\nWould you like to try another patient? ");
	scanf("%s", &ans);
	
	if(ans == 'Y' || ans == 'y'){
	}
	else{
		printf("\nByee");
		break;
	}
	printf("\n");
}
}
