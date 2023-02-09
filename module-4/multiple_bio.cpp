#include<iostream>
using namespace std;
class person
{
    string name , name1;
    int age, age1;
    public:
    
    void data(){
        name="sanju";
        name1="sanjay";
        age=26;
        age1=28;
        cout<<"my name is :"<<name<<endl;
        cout<<"my age is :"<<age<<endl;
        cout<<"my name1 is :"<<name1<<endl;
        cout<<"my age1 is :"<<age1<<endl;
    }
};
class student{
    float percentage, percentage1;
    public:
    void data1(){
        percentage=78;
        percentage1=89;
        cout<<"percentage is:"<<percentage<<endl;
        cout<<"percentage1 is :"<<percentage1<<endl;
    }
};
class teacher:public person, public student
{
     float salary1=25000;
     float salary2=35000;
    public:
    void display()
    {
      cout<<"salary1 is:"<<salary1<<endl;
      cout<<"salary2 is:"<<salary2<<endl;

    }
};
int main(){
    teacher T;
    T.data();
    T.data1();
    T.display();
}

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
