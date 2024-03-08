#include<iostream>
using namespace std;

struct DateStruct{
   int day;
   int month;
   int year;
};

//creating class date
class DateClass{
    int day;
    int month;
    int year;
    public:
    void initDate(){
        day = 01;
        month = 01;
        year = 2024;
        cout<<"Date initialized "<<endl;

    }
    void printDateOnConsole(){
        cout<<" Date : "<<day<<"/"<<month<<"/"<<year<<endl;

    }
    void acceptDateFromConsole(){
        cout<<"Enter day, moth, year"<<endl;
        cin>>day>>month>>year;
    }
    bool isLeapYear(){
        if((year % 100 == 0) && (year % 400 == 0) || (year % 4 == 0) ){
         return 1;
       }
       return 0;
    }
    void menu(){
        bool check;
        int choice;
    do{
    cout<<"Enter choice"<<endl<<"1.initialize date "<<endl<<"2.print date"<<endl
    <<"3.accept date "<<endl<<"4.check leap"<<endl<<"5.exit"<<endl;
    cin>>choice;
    switch(choice){
         case 1 :
            initDate();
            cout<<"data initialized";
            cout<<"-------------------------------";
            break;
         case 2:
            printDateOnConsole();
            cout<<"data initialized";
            cout<<"-------------------------------";
            break;
         case 3:
           acceptDateFromConsole();
            cout<<"data initialized";
            cout<<"-------------------------------";
           break;
         case 4:
            check = isLeapYear();
           if(check){
            cout<<year<<" is leap year"<<endl;
           }
           else{
            cout<<year<< " is not leap year"<<endl;
           }
           cout<<"---------------------------------";
           break; 

           
         case 5:
            choice = 0;
            break;
         default :
           cout<<"Invalid key pressed ";
           
    }
    }
     while(choice != 0);

    }
    
};
//main function
int main(){
    //Structure
    struct DateStruct date1;
    cout<<"Size of struct :"<<sizeof(date1)<<endl;
     
    //class
    class DateClass date2;
    date2.initDate();
    date2.menu();
}