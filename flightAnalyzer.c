#include <stdio.h>


struct TIME
{
  int seconds;
  int minutes;
  int hours;
  char departl [100], arrivall [100];
};


void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);
int main()
{
	
	char departl [100], arrivall [100];
    struct TIME startTime, stopTime, diff;
    
    printf("Please enter departure location: \n");
    printf("Enter 3 letter IATA code: ");
	scanf("%s", departl);
	fflush(stdin);
    
    printf("Please enter departure time: \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    fflush(stdin);
    
    
     if(startTime.hours>=25){
    	printf("\nInvalid time!\n");
    	printf("Please enter departure time again: \n");
    	printf("Enter hours, minutes and seconds respectively: ");
    	scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    	fflush(stdin);
	}
	
	 if(startTime.minutes>=60){
    	printf("\nInvalid time!\n");
    	printf("Please enter departure time again: \n");
    	printf("Enter hours, minutes and seconds respectively: ");
    	scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    	fflush(stdin);
	}
	
	
	 if(startTime.seconds>=60){
    	printf("\nInvalid time!\n");
    	printf("Please enter departure time again: \n");
    	printf("Enter hours, minutes and seconds respectively: ");
    	scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    	fflush(stdin);
	}
	  
	
	printf("\n\nPlease enter arrival location: \n");
    printf("Enter 3 letter IATA code: ");
	scanf("%s", arrivall);
	fflush(stdin);
	
    printf("Please enter arrival time: \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);
    
    
    if(stopTime.hours>=25){
    	printf("\nInvalid time!\n");
    	printf("Please enter departure time again: \n");
    	printf("Enter hours, minutes and seconds respectively: ");
    	scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);
    	fflush(stdin);
	}
	
	 if(stopTime.minutes>=60){
    	printf("\nInvalid time!\n");
    	printf("Please enter departure time again: \n");
    	printf("Enter hours, minutes and seconds respectively: ");
    	scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);
    	fflush(stdin);
	}
	
	
	 if(startTime.seconds>=60){
    	printf("\nInvalid time!\n");
    	printf("Please enter departure time again: \n");
    	printf("Enter hours, minutes and seconds respectively: ");
    	scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);
    	fflush(stdin);
	}
    
   
    
    // Calculate the difference between the start and stop time period.
    differenceBetweenTimePeriod(startTime, stopTime, &diff);
    printf("\nThe flight time from %s to %s is: %d:%d:%d - ",departl, arrivall, stopTime.hours, stopTime.minutes, stopTime.seconds);
    printf("%d:%d:%d ", startTime.hours, startTime.minutes, startTime.seconds);
    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);
    return 0;
}


void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
    if(stop.seconds > start.seconds){
        --start.minutes;
        start.seconds += 60;
    }
    
    diff->seconds = start.seconds - stop.seconds;
    if(stop.minutes > start.minutes){
        --start.hours;
        start.minutes += 60;
    }
    
    diff->minutes = start.minutes - stop.minutes;
    diff->hours = stop.hours - start.hours;
}
