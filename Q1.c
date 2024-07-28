// [1] calculate marks ,percentage ,grade of student.

#include<stdio.h>
int main(){
    int physics,chemistry,mathematics,biology,computer;
    float total_marks,percentage;
    char grade;

    printf("enter physics marks: ");
    scanf("%d", &physics);
    printf("enter chemistry marks: ");
    scanf("%d", &chemistry);
    printf("enter mathematics marks: ");
    scanf("%d", &mathematics);
    printf("enter biology marks: ");
    scanf("%d", &biology);
    printf("enter computer marks: ");
    scanf("%d", &computer);

    total_marks = physics + chemistry + mathematics + biology + computer;
    percentage = total_marks/5;

    if (percentage>=85 && percentage<=100){
        grade = 'A';
    }
    else if (percentage>=70 && percentage<85){
        grade = 'B';
    }
    else if (percentage>=55 && percentage<70){
        grade = 'C';
    }
    else if (percentage>=40 && percentage<55){
        grade = 'D';
    }else{
        grade = 'F';
    }

    printf("total marks: %.2f \n", total_marks);
    printf("percentage: %.2f\n ", percentage);
    printf("grade: %c\n", grade);

    return 0;
}

