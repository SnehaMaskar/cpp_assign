#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;
};
//adding function to init struct members
void initDate (struct Date * ptrDate){
    printf("inside initDate function\n");
    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2024;
}
//adding function for acceopting date from console
void acceptDateFromConsole(struct Date * ptrDate){
    printf("inside acceptDateFromConsole function\n");
    printf("Enter day : \n");
    scanf("%d",&ptrDate->day);
    printf("Enter month : \n");
    scanf("%d",&ptrDate->month);
    printf("Enter year : \n");
    scanf("%d",&ptrDate->year);
}
//adding function to print date on console
void printDateOnconsole (struct Date * ptrDate){
    printf("inside printDateOn Console function\n");
    printf("Date : %d/%d/%d\n",ptrDate->day
    , ptrDate->month, ptrDate->year);
}
//main function
int main(){
    int choice;
    struct Date date;
    do{
        printf("Select choice\n1.Initialize date \n2.Print date \n3.AcceptDate \n4.Exit\n");
        printf("Enter choice : \n");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                initDate(&date);
                printf("Initialized date \n");
                printf("-----------------------------");
            break;
            case 2 :
                printDateOnconsole(&date);
                printf("Date Printed\n");
                printf("-----------------------------");
            break;
            case 3 :
                acceptDateFromConsole(&date);
                printf("Date Accepted\n");
                printf("-----------------------------");
            break;
            case 4 :
                choice = 0;
            
        }
    }
    while(choice != 0);
    printf("Thank you !!!\n");
    return 0;
    
}
