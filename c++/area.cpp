#include<iostream> 
using namespace std; 
 
void areaCircum(int *circumference,int *area)
{
    int radius; 
    cout << "Enter the radius of a circle " << endl;  
    cin >> radius;
    *circumference=2*(3.142)*radius; 
    *area=(3.142)*radius*radius;
}  
void areaPeri(int *perimeter,int *area)
{
    int length, breadth; 
    cout << "Enter the length of a reactangle " << endl;  
    cin >> length; 
    cout << "Enter the breadth of a reactangle " << endl;  
    cin >> breadth;
    *perimeter=2*(length+breadth); 
    *area=breadth*length;
}
int main()
{
    int choice,area,circumference,perimeter; 
     
    do{ 
        cout<< "For circle enter 1 " << endl;  
        cout << "For reactangle enter 2" << endl; 
        cout << "Enter choice"<< endl;
        cin >> choice; 
    }while(choice!=1&&choice!=2); 
    switch(choice)
    {
        case 1 : 
             areaCircum(&circumference,&area); 
             cout << "circumference of a circle is " <<  circumference << endl << "area of circle is " << area << endl;
             break; 

        case 2 : 
             areaPeri(&perimeter,&area); 
             cout << "perimeter of a reactangle is " <<  perimeter << endl << "area of reactangle is " << area << endl;
    } 
    return 0;
}