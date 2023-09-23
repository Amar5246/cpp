#include<iostream> 
using namespace std; 

void Accept(int arr[3][3]) 
{   
    cout <<"Enter the elements of an 2D array" <<endl;
    for(int i=0;i<3;i++) 
    {
        for(int j=0;j<3;j++) 
        {
            cin >> arr[i][j] ;
        }
    } 
} 
void Transpose(int arr[3][3],int transpose[3][3]) 
{
    for(int i=0;i<3;i++) 
    {
        for(int j=0;j<3;j++) 
        {
            transpose[i][j]=arr[j][i]; 
        }
    }
}  
void Add(int transpose[3][3],int arr2[3][3],int result[3][3]) 
{
    for(int i=0;i<3;i++) 
    {
        for(int j=0;j<3;j++) 
        {
            result[i][j]=transpose[i][j]+arr2[i][j]; 
        }
    }
} 
void Display(int result[3][3]) 
{
    cout << "addition of the two 2D arrays is :" << endl; 

    for(int i=0;i<3;i++) 
    {
        for(int j=0;j<3;j++) 
        {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
}
 
int main()
{
    int arr1[3][3];  
    int arr2[3][3]; 
    int transpose[3][3]; 
    int result[3][3]; 
     
    Accept(arr1); 
    Accept(arr2); 
    Transpose(arr1,transpose); 
    Add(transpose,arr2,result);  
    Display(result);

    
    

    return 0;
}  