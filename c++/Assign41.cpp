/*Write a class Array which will store integer elements in dynamically allocated space. 
		class Array
		{
			int size;
			int *arr;
		}
	Provide below functions in Array class - 
	  1. Default constructor - Take 5 as default size. Initialize the array elements to 0
	  2. Parameterized constructor - Takes size as parameter. Initialize the array elements to 0.
	  3. Copy constructor - Performs deep copy of Array object.
	  4. Destructor - Deletes memory which is allocated dynamically.
*/
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
        Array(Array& other):size(other.size)
        {
            arr=new int[size]; 
            for (int i = 0; i < size; ++i) 
            {
               this->arr[i] = other.arr[i];
            }
        }
        void getdata()
        {
            cout << "Enter the element of the array" << endl; 
            for(int i=0;i<size;i++)
            {
                cin >> arr[i];
            } 
            cout << endl;
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
    obj1.display(); 
    obj2.display();  
    Array obj3(obj1); 
    obj3.display();
    return 0;
}