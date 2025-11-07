#include<iostream.h>
using namespace std;
class student
{
    public:
    string name;
    int roll no;
    float marks;
    void display()
    {
        cout<<"name;"<<name
        <<",roll no;"<<roll no
        <<",marks;"<<marks<<endl;
    }
};
int main()
{
    student s1,s2,s3;
    s1.name = "rutu";
    s1.rollno = 122;
    s1.marks = 99.7;
    s2.name = "diva";
    s2.rollno = 100;
    s2.marks = 99.0;
    s3.name = "main";
    s3.rollno = 123;
    s3.marks = 100.0;
 s1.display();
 s2.display();
 s3.display();
return 0;



}
