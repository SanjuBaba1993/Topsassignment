 #include<iostream>
 using namespace std;

 class calculater{
    public:
    sum(float num1, float num2)
    {
        cout<<"sum of two number is:"<<num1+num2<<endl;
    }
    sum(int num1, int num2, int num3)
    {
        cout<<"sum of three number is:"<<num1+num2+num3<<endl;
    }
    sub(float num1, float num2)
    {
        cout<<"sub of two number is:"<<num1-num2<<endl;
    }
    sub(int num1, int num2, int num3)
    {
        cout<<"sub of three number is:"<<num1-num2-num3<<endl;
    }
    mul(float num1, float num2)
    {
        cout<<"mul of two number is:"<<num1*num2<<endl;
    }
    mul(int num1, int num2, int num3)
    {
        cout<<"mul of three number is:"<<num1*num2*num3<<endl;
    }
    div(float num1, float num2)
    {
        cout<<"div of two number is:"<<num1/num2<<endl;
    }
 };
 int main(){
    calculater S;
    S. sum(10.2,10);
    S. sum(10,2,4);
    S. sub(20.4,3.2);
    S. sub(20,4,5);
    S. mul(10.5,2.4);
    S. mul(10,2,4);
    S. div(20.5,2.5);
 }