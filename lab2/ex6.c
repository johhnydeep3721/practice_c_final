#include <stdio.h>

void month(int day){
    switch (day)
    {
    case 1:
        printf("January have 31 day");
        break;
    case 2:
        printf("February have 28 day");
        break;
    case 3:
        printf("March have 31 day");
        break;
    case 4:
        printf("April have 30 day");
        break;
    case 5:
        printf("May have 31 day");
        break;
    case 6:
        printf("June have 30 day");
        break;
    case 7:
        printf("July have 31 day");
        break;
    case 8:
        printf("August have 31 day");
        break;
    case 9:
        printf("September have 30 day");
        break;
    case 10:
        printf("Octocber have 31 day");
        break;
    case 11:
        printf("November have 30 day");
        break;
    case 12:
        printf("December have 31 day");
        break;

    default:
        break;
    }
}
int main(){
    int day;
    printf("input months: ");
    scanf("%d",&day);
    month(day);

}