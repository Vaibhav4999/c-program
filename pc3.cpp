//3.Create a class Book with data members as bname,id,author,price. Write getters and setters for all the  data members. Also add the display function. Create Default and Parameterized constructors. Create the object of this class in main method and invoke all the methods in that class.

#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
class Book
{
   char bname[20];
   int id;
   char author[30];
   int price;
   public:
   Book()
   {
       strcpy(bname,"Not given");
       this->id=0;
       strcpy(author,"Not given");
       this->price=0;
   }
   Book(char* bnm,int i,char* ath,int p)
   {
       strcpy(bname,bnm);
       this->id=i;
       strcpy(author,ath);
       this->price=p;  
   }
   void setbname(char* bnm)
   {
      strcpy(this->bname,bnm);
   }
   void setid(int i)
   {
       this->id=i;
   }
   void setauthor(char* ath)
   {
       strcpy(this->author,ath);
   }
   void setprice(int p)
   {
       this->price=p;
   }
   char* getbname()
   {
       return this->bname;
   }
   int getid()
   {
      return this->id;
   }
   char* getauthor()
   {
       return this->author;
   }
   int getprice()
   {
       return this->price;
   }
    void display()
   {
       cout<<"Book Name: "<<bname<<"\nBook_id: "<<id<<"\nAuthor: "<<author<<"\nPrice: "<<price<<endl;

   } 
};
int main()
{
    Book b("Test  C",101,"Yashvant Kanitkar",500);
     b.display();   
   }

