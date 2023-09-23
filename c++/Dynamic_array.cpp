#include<iostream> 
using namespace std;
 
class Array 
{
   int *arr; 
   int size=5; 

   public : 
        
        Array()
        {  
           cout << "Inside parameterless constructor"<<endl; 
           cout << endl;
           arr=new int[size];
        } 
        Array(int Size)
        {
            size=Size; 
            arr=new int[size]; 
            cout << "Inside parameterized constructor"<<endl; 
            cout << endl;
        } 
        void getdata()
        {
             
            for(int i=0;i<size;i++)
            {
                 arr[i]=0;
            }
        } 
        void display()
        {
            for(int i=0;i<size;i++)
            {
                cout << arr[i] << " ";
            } 
            cout << endl;
        } 
        ~Array()
        {
           cout << "inside destructor"<<endl; 
           cout << endl;
           delete[] arr;
        }
}; 

int main()
{
    Array obj1;  
    int size; 
    cout << "Enter the size of the array" <<endl; 
    cin >> size;
    Array obj2(size); 
    
    obj1.getdata(); 
    obj2.getdata();
    obj1.display(); 
    obj2.display(); 
    return 0;
}