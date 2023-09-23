#include<iostream> 
using namespace std; 

void Accept(int arr[rows][columm],int rows,int columm) 
{   
    cout <<"Enter the elements of an 2D array" <<endl;
    for(int i=0;i<rows;i++) 
    {
        for(int j=0;j<columm;j++) 
        {
            cin >> arr[i][j] ;
        }
    } 
}   
void Multiplication(int arr1[rows][columm],int arr2[rows][columm],int result[rows][columm],int rows,int columm) 
{
    for(int i=0;i<rows;i++) 
    {
        for(int j=0;j<columm;j++) 
        {
            result[i][j]=arr1[i][j]*arr2[j][i]; 
        }
    }
} 
void Display(int result[rows][columm],int rows,int columm) 
{
    cout << "addition of the two 2D arrays is :" << endl; 

    for(int i=0;i<rows;i++) 
    {
        for(int j=0;j<columm;j++) 
        {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
}
 
int main()
{    
    int rows,columm; 
    cout << "Enter the no of rows and columms " << endl; 
    cin >> rows <<columm; 

    int arr1[rows][columm];  
    int arr2[rows][columm];  
    int result[rows][columm]; 
     
    Accept(arr1,rows,columm); 
    Accept(arr2,rows,columm);  
    Multiplication(arr1,arr2,result,rows,columm);  
    Display(result,rows,columm);
    return 0;
}  