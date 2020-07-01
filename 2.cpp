//Muhammad Ibad Saleem Additional Tasks Lab 08 19K-0220

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class BankAccount{                      //part a)
    protected:

    int accountnumber;
    float balance;
    public:
    BankAccount(){}    
    BankAccount(int a,float b)
    {
        accountnumber=a;
        balance=b;
    }
    
    void setan(int a)
    {
        accountnumber=a;
    }

    int getan()
    {
        return accountnumber;
    }

    void setbal(float b)
    {
        balance=b;
    }

    float getbal()
    {
        return balance;
    }

    void deposit()
    {
        float b;
        cout<<"Enter Amount to Deposit: ";
        cin>>b;
        balance=balance+b;
    }
    
    void withdraw()
    {
        float b;
        cout<<"Enter Amount to withdraw: ";
        cin>>b;
        balance=balance-b;

    }

    
    void display()
    {
        
        cout<<"Account Number: "<<accountnumber<<endl;
        cout<<"Balance: "<<balance;

    }
};

class CheckingAccount: public BankAccount{
    protected:
    float interest;
    float minbal;
    float sercharges;
    
    public:
   CheckingAccount(){}
    CheckingAccount(float a,float b, float c)
    {
        interest=a;
        minbal=b;
        sercharges=c;
    
    }
   
    void setint(float i)
    {
        interest=i;
    }

    void setmb(float b)
    {
        minbal=b;
    }

    void setsc()
    {
        sercharges=25;
    }

    float getint()
    {
        return interest;
    }

    float getmbal()
    {
        return minbal;
    }    

    float getsc()
    {
        return sercharges;
    }

    void newbalance()                      //assumed if minimum balance achieved no interest is given
    {
        if (balance>minbal)
        {
        balance=balance+balance*(interest/100);
        }
        else
        {
            balance=balance-sercharges;
        }
        
    }
     void withdraw()
{
    float b;
        cout<<"Enter Amount to withdraw: ";
        cin>>b;
         if (b<balance)
     {
         balance=balance-b;
     }
   
     else 
     {
         cout<<"Insufficient Amount";
     }
}   
    // void display()
    // {
    //     cout<<"Balance: "<<balance;
    //     cout<<"Account Number: "<<accountnumber;
    // }


};

class SavingsAccount:public BankAccount{
    protected:
    float inte;
    public:
     protected:
    float interest;
    float minbal;
    float sercharges;
    
    public:
    SavingsAccount(){}
    SavingsAccount(float i)
    {
        inte=i;
    }
   
    void setint(float i)
    {
        interest=i;
    }

    float getint()
    {
        return interest;
    }

    

    void balances()                      //assumed if minimum balance achieved no interest is given
    {
        if (balance>minbal)
        {
        balance=balance+balance*(inte/100);
        }
    
        
    }
     void withdraw()
    {
        float b;
        cout<<"Enter Amount to withdraw: ";
        cin>>b;

         if (b<balance)
     {
         balance=balance-b;
     }
   
     else 
     {
         cout<<"Insufficient Amount";
     }
    }   

  // void display()
    // {
    //     cout<<"Balance: "<<balance;
    //     cout<<"Account Number: "<<accountnumber;
    // }
  
      





};



int main()
{
    while(1)                        //testing
    {
    system("cls");
    CheckingAccount C1(12.5,5550,25);
    SavingsAccount S1(10.5);
    cout<<"WELCOME TO ABC BANK\n======================================\n";
    cout<<"1)Checking Account\n2)Savings Account";
    char a=getch();
 
    if (a=='1')
    {
        system("cls");
        cout<<"Welcome to Checking Account of ABC Bank\n";
        cout<<"1) Withdraw\n2) Deposit\n3) Details\n";
        char m=getch();
        if (m=='1')
        {
            C1.withdraw();     
        }
        else if (m=='2')
        {
            C1.deposit();
        }
        else if (m=='3')
        {
            C1.display();
        }
    }
 
    else if (a=='2')
    {
        system("cls");
        cout<<"Welcome to Checking Account of ABC Bank\n";
        cout<<"1) Withdraw\n2) Deposit\n3) Details\n";
        char m=getch();
        if (m=='1')
        {
            S1.withdraw();     
        }
        else if (m=='2')
        {
            S1.deposit();
        }
        else if (m=='3')
        {
            S1.display();
        }
    }
    else 
    {
        cout<<"Wrong option";
    }
 
 char i=getch();
 cout<<"\nPress any key to continue or E to exit..!\n"
 if (toupper(i)=='E')
 {
     exit(1);
 }       
}   
}