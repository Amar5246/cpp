#include<iostream>
using namespace std; 
int roll=1;
class student 
{
    string name; 
    int roll_no;
    public : 
        student()
        { 
           this->roll_no=roll; 
           roll++;
        } 
        student(string s)
        {
            this->name=s; 
            this->roll_no=roll; 
            roll++;
        } 
        void Accept()
        {
            cout <<"enter the name of the student" <<endl; 
            // cin.ignore();  
            // getline(cin,name); 
            cin >> this->name;
        } 
        void Display()
        {
            cout <<"Name of the student is : " << this->name << endl; 
            cout <<"Roll no of the student is : " << this->roll_no <<endl;
        }  
        ~student()
        { 

        }

}; 
class DOB : public student 
{
    string day,month,year; 
   
    public : 
        DOB()
        {
           this->day=" "; 
           this->day=" "; 
           this->day=" ";
        } 
        DOB(string s,string d,string m,string y):student(s)
        {
            this->day=d;
            this->month=m;
            this->year=y;
             
        } 
        void accept()
        {
            student::Accept(); 
            cout <<"Enter the birth date of the student " <<endl; 
            cin >> this->day >> this->month >> this->year ;
        } 
        void display()
        {
            student::Display(); 
            cout <<"Birth date of the student is : " << this->day <<"/" << this->month <<"/" << this->year <<endl;
        }
};

int main()
{
    DOB c1; 
    c1.accept();  
    cout << "Record of student c1 : " <<endl;
    c1.display(); 
    DOB c2("Amar phdatare","24","01","2002");  
    cout << "Record of student c2 : " <<endl;
    c2.display();
    DOB c3=c2; 
    cout << "Record of student c3 : " <<endl;
    c3.display();
    return 0;
}