#include<iostream>
using namespace std;
class student
{
 int rollno;
 char name[50];
 double fee;
 public:
 student()
 {
 cout<<"Enter the RollNo:";
 cin>>rollno;
 cout<<"Enter the Name:";
 cin>>name;
 cout<<"Enter the Fee:"; 
 cin>>fee;
 } 
 ~student()
 {
 cout<<endl<<"Student roll number:"<<rollno;
 cout<<endl<<"student name:"<<name;
 cout<<endl<<"Student fees:"<<fee;
 }
};
int main()
{
 student s;
 return 0;
}
