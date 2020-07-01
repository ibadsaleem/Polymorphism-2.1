//Muhammad Ibad Saleem Additional Tasks Lab 08 19K-0220

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Sales{                    //class sales

    protected:
    float Sale[3];
    public:

    void getdata()
    {
        for (int i=0;i<3;i++)
        {
            cout<<"Enter Sales Month "<<i+1<<": ";
            cin>>Sale[i];
        }
    } 
    void putdata()
    {
        for (int i=0;i<3;i++)
        {
            cout<<"Sales Figure Month "<<i+1<<": $"<<Sale[i]<<endl;
        }

        
    }

};


class Publication: virtual public Sales{                    //used virtual to avoid ambiguity
    protected:
    string title;  
    float price;
public:

void getdata()
{
    
    cout<<"Enter Title of the book: ";
    cin>>title;
    cout<<"Enter Price of the book: ";
    cin>>price;
    Sales::getdata();
    cout<<endl;
}

void putdata()
{
    
    cout<<"Title: "<<title<<endl;
    cout<<"Price: $"<<price;
    Sales::putdata();
    cout<<endl;
}

};

class Book: virtual public Publication,virtual public Sales{            //inherited virtually to avoid ambiguity

int pgcount;

public:

void getdata()
{
    Sales::getdata();
    Publication::getdata();
    cout<<"Enter Page Count: ";
    cin>>pgcount;
    cout<<endl;
    
}

void putdata()
{
    Sales::putdata();
    Publication::putdata();
    cout<<"\nPage Count: "<<pgcount<<endl;
     cout<<"\nBook Sales Figure\n";
     cout<<endl;
    
}

};


class Tape:virtual public Publication,virtual public Sales{

float playtime;

public:
void getdata()
{
    Sales::getdata();
    Publication::getdata();
    cout<<"Enter play time of tape: ";
    cin>>playtime;
    cout<<endl;
    
}

void putdata()
{
    Sales::putdata();
    Publication::getdata();
    cout<<"Play Time: "<<playtime<<" min"<<endl;
    cout<<"\nTape Sales Figure\n";
    
}

};



class Disk:virtual public Publication, virtual public Sales{
    

private:
 enum dtype
 {CD,DVD};
 dtype dchoice;

public:

 void getdata()
 {
  char t;
  Sales::getdata();                     //functions call with class reference to avoid repeatition
  Publication::getdata();
  cout << "Enter C for CD and D for DVD: ";
  cin >> t;
  if (toupper(t) == 'C')
  {
   dchoice = CD;
  }
  else
  {
   dchoice = DVD;
  }

 }

 void putdata()
 {
  Sales::putdata();
  Publication::putdata();
  cout  << "\nDisk type is: ";
  
  if (dchoice == CD)
{
   cout << "CD"<<endl;
}
  else
   {
   cout << "DVD"<<endl;

 }
 }

};

int main()
{
    system("cls");              //testing
    
    Publication P1;
    Book B1;
    Tape T1;
    Disk D1;

    P1.getdata();
    B1.getdata();
    T1.getdata();
    D1.getdata();
    cout<<"\nPress any key to display output";
    
    getch();
    
    system("cls");

    P1.putdata();
    B1.putdata();
    T1.putdata();
    D1.putdata();
}