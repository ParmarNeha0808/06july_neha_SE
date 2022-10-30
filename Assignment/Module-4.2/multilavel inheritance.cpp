#include<iostream>
using namespace std;

class Student
{
    int roll;
    char name[25];
    public:
        void getdata()
        {
        cout<<"\n Enter Roll No.            : ";
        cin>>roll;
        cout<<"\n Enter Student Name        : ";
        cin>>name;
        }
        void putdata()
        {
        cout<<"\n          Student Marklist ";
        cout<<"\n Roll No.  :  "<<roll;
        cout<<"\n Student Name :  "<<name<<endl;
        }
};
class StudentExam : public Student      
{
    public:
        int sub1, sub2;
        float per;
    public:
        void accept_data()
        {
        getdata();
        cout<<"\n Enter Marks for Subject 1 : ";
        cin>>sub1;
        cout<<"\n Enter Marks for Subject 2 : ";
        cin>>sub2;
        }
        void display_data()
        {
        putdata();
        cout<<"\n Marks of Subject 1   :  "<<sub1;
        cout<<"\n Marks of Subject 2   :  "<<sub2;
        }
};
class StudentResult : public StudentExam      
{
    public:
        void calculate ()
        {
                per = (sub1+sub2)/2.0;
                cout<<"\n\n Total Percentage:"<<per;
        }
};
int main()
{
        StudentResult str;     
        int cnt, i;
        cout<<"\n Enter No of student: ";
        cin>>cnt;
        for(i=0; i<cnt; i++)
        {
        str.accept_data();
        str.display_data();
        str.calculate();
        }
}
