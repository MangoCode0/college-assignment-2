// [2] input week number (1-7) and print the corresponding days of week name.

#include<stdio.h>

int main(){
    int day;
    printf("enter day (1-7): ");
    scanf("%d",&day);
    switch(day){
        case 1:printf("monday");
        break;
        case 2:printf("tuesday ");
        break;
        case 3:printf("wensday ");
        break;
        case 4:printf("thursday ");
        break;
        case 5:printf("fryday ");
        break;
        case 6:printf("saturday ");
        break;
        case 7:printf("sunday ");
        break;
        default:printf("not valid day");

    }
}
