#include<bits/stdc++.h> 

using namespace std; 
int sav_count=1001;   
class Account
{
     
    public : 
        string name;  
        double balance;
        int account_no; 
        string day,month,year;
        void getDob()
        {
            
            cout << "Enter your birthdate in formate DD/MM/YY"<<endl; 
            cin >> this->day >> this->month >> this->year ; 
             
        }
        void getdata()
        {
            cout << "Enter your name correctly"<<endl; 
            cin.ignore();
            getline(cin, this->name);  
            getDob(); 
            cout << "To create account you need to add some money in your account minimum 500rs" << endl; 
            cin >> this->balance; 
            while(balance<500)
            {
               cout << "You can not create account by adding money less than 500 rs please add money 500 or more" << endl;
                cin >> this->balance;
            } 
        } 
          
        void Deposite_money(int add)
        {   
            cout << "  "<<endl; 
            cout << "Account no : " << this->account_no <<endl;
            cout << "initial balance : " << this->balance << endl;
            this->balance=this->balance+add; 
            cout << "current balance : " << this->balance << endl;
            cout << "Money deposited is : " << add <<endl; 
            cout << "  "<<endl;
        } 
        void Withdraw_money(int withdraw)
        {
            if(balance<withdraw)
            {
                cout << "Insufficient funds" <<endl; 
                return;
            }
            cout << "  "<<endl;  
            cout << "Account no : " << this->account_no <<endl;
            cout << "initial balance : " << this->balance << endl;
            this->balance=this->balance-withdraw; 
            cout << "current balance : " << this->balance << endl;
            cout << "Money withdraw is : " << withdraw <<endl; 
            cout << "  "<<endl;
        } 
        
       
       

}; 
class Account_type : public Account 
{
   string account_type; 

   public :  
          
          void Savings_account() 
        {
            this->account_type="Savings Account" ;
            this->account_no = sav_count;
            getdata(); 
            displaydata();
        } 
        void Current_account() 
        {
            this->account_type="Current Account" ; 
            this->account_no = sav_count;
            getdata(); 
            displaydata();
        } 
        void Dmat_account() 
        {
            this->account_type="Dmat Account";  
            this->account_no = sav_count;
            getdata(); 
            displaydata();
        }  
        void displaydata()
        {
            cout << "  "<<endl;
            cout << "Account holder name : " << this-> name <<endl;  
            cout << "Account holder's birth date is " << this->day <<"/"<< this->month <<"/"<< this->year <<endl;
            cout << "Account type : " << this->account_type <<endl;
            cout << "Account no : " << this->account_no <<endl; 
            cout << "intial balance : " << this->balance <<endl; 
            cout << "  "<<endl;
        }

};
int Choice() 
{   
    int c;
    cout << "Enter your choice" << endl; 
    cin >> c ; 
    return c;
} 
enum{Create_account=1,deposite_money,withdraw_money}; 
enum{savings_account=1,current_account,dmat_account};

int main()
{
    int choice,choice2,i=-1; 
    Account_type *Acc_type=new Account_type[5]; 
    int account_no;
    
    do
    {   
        cout << "  "<<endl;
        cout << "choice 1 :" <<'\t'<<"Create account" << endl; 
        cout << "choice 2 :" <<'\t'<<"Deposit money" << endl;
        cout << "choice 3 :" <<'\t'<<"withdraw money" << endl;
        cout << "choice 0 :" <<'\t'<<"exit" << endl;  
        cout << "  "<<endl;
        choice = Choice();
        while(!(choice<=3&&choice>=0))
        { 
        cout << "Invalid input of choice please enter choice correctly"<<endl;
        choice = Choice(); 
        } 
        switch(choice) 
        {
            case Create_account : 
                    cout << "  "<<endl;
                    cout << "Choice 1 :"<<'\t'<<"Savings account"<<endl; 
                    cout << "Choice 2 :"<<'\t'<<"Current account"<<endl;
                    cout << "Choice 3 :"<<'\t'<<"Dmat account"<<endl; 
                    cout << "  "<<endl;
                    
                    if(i==4)
                    {   
                        cout << "You can not create any more accounts " << endl; 
                        cout << "if you want to see the detailes of your all accounts then press y else press n" <<endl; 
                        char c;
                        cin >> c;
                        if(c=='y'||c=='Y')
                        {   
                            cout << "Here are the details of your all accounts " << endl;  
                            for(int i=0;i<5;i++)
                            {   
                                cout << " " <<endl;
                                Acc_type[i].displaydata();
                                cout << " " <<endl;
                            } 
                            break;
                        } 
                        else 
                            break;
                    }
                    choice2 = Choice(); 
                    while(!(choice2<=3&&choice2>=0))
                    { 
                        cout << "Invalid input of choice please enter choice correctly"<<endl;
                        choice2= Choice(); 
                    } 
                    switch(choice2)
                    {
                        case savings_account : 
                                i++;
                                Acc_type[i].Savings_account();  
                                sav_count++; 
                                break; 
                        case current_account : 
                                i++;
                                Acc_type[i].Current_account(); 
                                sav_count++; 
                                break;  
                        case dmat_account : 
                                i++;
                                Acc_type[i].Dmat_account(); 
                                sav_count++;
                                break;  
                    } 
                    break; 
            case deposite_money : 
                    cout << "Enter how much money do you want to add" <<endl; 
                    int add; 
                    cin >>add; 
                      
                    cout << "Enter account no in which you want to deposit money" <<endl; 
                    cin >> account_no;  
                    if (account_no < 1000 || account_no >= 1000 + i + 1)
                    {
                        cout << "Invalid account number" << endl;
                    }
                    else
                    {
                        int n = account_no % 1000;
                        Acc_type[n-1].Deposite_money(add);
                    }

                    break; 
            case withdraw_money : 
                    cout << "Enter how much money do you want to withdraw" <<endl; 
                    int withdraw; 
                    cin >>withdraw;    
                    while(withdraw>15000)
                    {
                        cout << "You can only withdraw money upto 15000 in a day" <<endl; 
                        cout << "Please enter money you want to withdraw between 0 to 15000 only" <<endl;
                        cin >>withdraw;
                    }
                    cout << "Enter account no from which you want to withdraw money" <<endl; 
                    cin >> account_no;  
                    if (account_no < 1000 || account_no >= 1000 + i + 1)
                    {
                        cout << "Invalid account number" << endl;
                    }
                    else
                    {
                        int n = account_no % 1000;
                        Acc_type[n-1].Withdraw_money(withdraw);
                    }

        }
    }while(choice!=0);

    delete[] Acc_type;
    return 0;
}