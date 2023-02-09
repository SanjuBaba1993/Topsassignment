#include<iostream>
using namespace std;
class Student
{
    protected:
    string name1;
    string name2;
    int roll_no1,roll_no2;
    public:

    void information()
    {
        name1="Sanjay Katariya";
        name2="Riya Patel";
        roll_no1=11;
        roll_no2=24;
    }
};
class efforts : public Student
{
    protected:
    int chemistry_marks1=75,chemistry_marks2=70;
    int maths_marks1=90,maths_marks2=75;
    int physics_marks1=70,physics_marks2=72;
    public:

    void data()
    {
    
        cout<<"name is: "<<name1<<endl;
        cout<<"roll no is: "<<roll_no1<<endl;
        cout<<"chemistry marks is : "<<chemistry_marks1<<endl;
        cout<<"maths marks is : "<<maths_marks1<<endl;
        cout<<"physics marks is : "<<physics_marks1<<endl;
        cout<<"name is: "<<name2<<endl;
        cout<<"roll no is: "<<roll_no2<<endl;
        cout<<"chemistry marks is : "<<chemistry_marks2<<endl;
        cout<<"maths marks is : "<<maths_marks2<<endl;
        cout<<"physics marks is : "<<physics_marks2<<endl;
    }
};
class Result : public efforts
{
   protected:
   int total_student1=chemistry_marks1+maths_marks1+physics_marks1;
   int total_student2=chemistry_marks2+maths_marks2+physics_marks2;
    public:

    void display()
    {
        cout<<"name is: "<<name1<<endl;
        cout<<"roll no is: "<<roll_no1<<endl;
        cout<<"chemistry marks is : "<<chemistry_marks1<<endl;
        cout<<"maths marks is : "<<maths_marks1<<endl;
        cout<<"physics marks is : "<<physics_marks1<<endl;
       cout<<"total marks is: "<<total_student1<<endl;


        cout<<"name is: "<<name2<<endl;
        cout<<"roll no is: "<<roll_no2<<endl;
        cout<<"chemistry marks is : "<<chemistry_marks2<<endl;
        cout<<"maths marks is : "<<maths_marks2<<endl;
        cout<<"physics marks is : "<<physics_marks2<<endl;
        cout<<"total marks is: "<<total_student2<<endl;

    }
};
int main()
{
    Result z;
    z.information();
    //z.data();
    z.display();
}
