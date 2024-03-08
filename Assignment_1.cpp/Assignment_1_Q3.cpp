#include<iostream>
#include<string.h>
using namespace std;

class Student{
   int rollno;
   string name;
   double marks;
   public:
   void initStudent(){
      rollno = 15;
      name = "Sneha";
      marks = 90;
      cout<<"Student details : "<<endl<<"RollNo : "<<rollno<<endl<<"name : "<<name<<endl
      <<"marks : "<<marks<<endl;
   }
   void acceptStudentFromConsole(){
      cout<<"Enter student details : "<<endl;
      cout<<"Enter rollno : ";
      cin>>rollno;
      cout<<"Enter name :"<<endl;
      cin>>name;
      cout<<"Enter marks :"<<endl;
      cin>>marks;
      
   }
   void printStudentOnConsole(){
      cout<<"RollNO : "<<rollno<<endl<<"name : "<<name<<endl<<"Marks : "<<marks<<endl;
   }

};

int main(){
    int choice;
    Student s;
    do{
        cout<<"Enter choice"<<endl<<"1.initialize student"<<endl<<"2.Print student"<<endl<<
        "3.accept student"<<endl<<"4.exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1 :  
               s.initStudent();
               cout<<"Student initialized "<<endl;
               cout<<"-----------------------------------"<<endl;
               break;
            case 2:
               s.printStudentOnConsole();
               cout<<"Student printed "<<endl;
               cout<<"-----------------------------------"<<endl;
               break;
            case 3 :
              s.acceptStudentFromConsole();
              cout<<"Student details accepted "<<endl;
               cout<<"-----------------------------------"<<endl;
              break;
            case 4 :
              choice =0 ;
        }

    }
    while(choice != 0);
  
}