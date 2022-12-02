#include<iostream>
#include<iomanip>
#include<fstream>
#include<string.h>
using namespace std;
class Person
{
    public:
                  char name[10];
                  int telNo;
       
                 void input_data()
                {
                       cout<<"Enter the Name:";
                       cin>> name;
                       cout<<"Enter the telNo:";
                       cin>>telNo;
                }
                void put_data()
               {
                       cout<<setw(10)<<name<<setw(10)<<telNo<<endl;
               }
};

int main()
{
    Person rec;
    int Phone,pos,choice,offset,i;
    fstream fp;
    ifstream in;
    ofstream out;
    char nm[20];
   
    char ans;
    do
    {
        cout<<"\n1.Read file";
        cout<<"\n2.Write file";
        cout<<"\nEnter the choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                in.open("test.txt",ios::in|ios::binary);
                cout<<"\nThe contents of file are:\n";
                while(in.read((char*)&rec,sizeof(rec)))
                {
                    rec.put_data();
                }
                in.close();
                break;
               
            case 2:
                rec.input_data();
                char ch;
                cin.get(ch);
                out.open("test.txt",ios::out|ios::app|ios::binary);
                out.write((char*)&rec,sizeof(rec));
                out.close();
                break;
            }
            cout<<"\n Do You want to continue?(y/n)";
            cin>>ans;
        }while(ans=='y');
        return 0;
}