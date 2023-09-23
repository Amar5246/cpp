#include<iostream>
using namespace std; 
struct structure1 
{
    int num1,num2,num3; 

}; 
int main()
{
    structure1 obj1; 
    structure1 obj2; 

    obj1.num1=10;
    obj1.num2=20;
    obj1.num3=30; 

    cout << "The structures is copied entierly " << endl;
    obj2=obj1; 
    
    cout << "The num is " << obj2.num1 << endl;
    cout << "The num is " << obj2.num2 << endl; 
    cout << "The num is " << obj2.num3 << endl;  
    cout << "=================================" <<endl;
    //by elemnt by elemnt 
    cout << "the structure is copied elemnt by element " << endl;

    obj1.num1=40;
    obj1.num2=50;
    obj1.num3=60;  

    obj2.num1=obj1.num1;
    obj2.num2=obj1.num2;
    obj2.num3=obj1.num3;

    cout << "The num is " << obj2.num1 << endl;
    cout << "The num is " << obj2.num2 << endl; 
    cout << "The num is " << obj2.num3 << endl; 

    return 0;
}