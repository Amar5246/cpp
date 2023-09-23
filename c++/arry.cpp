#include<iostream> 
#include<climits> 
using namespace std; 

void maxmin(int &max, int &min, int a[], int size) 
{
    int m = INT_MIN; 
    int n = INT_MAX; 
    for(int i = 0; i < size; i++) 
    {
        if (a[i] > m) 
        {
            m = a[i];
        } 
        if (a[i] < n) 
        {
            n = a[i];
        }
    } 
    max = m; 
    min = n;
}

int main() 
{   
    int no_of_element; 
    cout << "Enter the number of elements: " << endl; 
    cin >> no_of_element; 

    int a[no_of_element];  

    cout << "Enter the numbers in an array:" << endl;
    for(int i = 0; i < no_of_element; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    } 

    cout << "Array before multiplying it with int constant 5:" << endl; 
    
    for(int i = 0; i < no_of_element; i++)
    {
        cout << a[i] << endl; 
    }  

    int max, min; 
    maxmin(max, min, a, no_of_element); 
    cout << "The maximum number is: " << max << "\n" << "The minimum number is: " << min << endl;

    for(int i = 0; i < no_of_element; i++)
    {
        a[i] = a[i] * 5; 
    }  

    cout << "Array after multiplying it with int constant 5:" << endl;
    for(int i = 0; i < no_of_element; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}






