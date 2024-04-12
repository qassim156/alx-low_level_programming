#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;
    int arrYear[2];

    month = 0;
    day = 0;
    year = 0;
    char dayText[1000] = "Enter your day of birth";

    printf("Enter your date of birth accordingly day,month year : \n");

    while(day==0){
    printf("%s :\n",dayText);
    scanf("%d",&day);

        if(day >= 32){
            day = 0;
            dayText[1000] = "Sorry enter a correct day ranging from 1-31;";


        }else{
            continue;
        }
    }


    while(month==0){
    printf("Enter your month of birth accordingly :\n");
    scanf("%d",&month);
        if(month >= 13){
            month = 0;
        }else{
            continue;
        }
    }
    while(year==0){

    printf("Enter your year of birth accordingly :\n");
    scanf("%d",&year);

        if(year > 0 && year <=24 ){
            arrYear[0] = 20;
            arrYear[1] = year;
            year = atoi(arrYear[0] + arrYear[1]);
        }else{
            continue;
        }
    }



    printf("Date: %02d/%02d/%04d\n", month, day, year);


    return (0);
}
