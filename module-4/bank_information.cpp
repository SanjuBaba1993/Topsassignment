#include<iostream>
#include<string>
using namespace std;
class BankMember
{
    protected:
    string name;
    long long int acc_num ,bal_amount,depo_amount,withdraw,total_bal;
    
    public:

    void Name()
    {
       // name="Sanju Baba";

        cout<<"name is:                        "<<endl;
         cin>>name;
    }
    void Account()
    {
       // acc_num= 846020;

        cout<<"account number is:              "<<endl;
        cin>>acc_num;
    }
    void TypeOfAcc()
    {
        cout<<"Type of account is:        Current account"<<endl;
    }
    void Balance()
    {
       // bal_amount= 100000;

        cout<<"Balance in account is:          Rs.";
        cin>>bal_amount;
    }
    void DepositeAmount()
    {
        //depo_amount= 25000;

        cout<<"Deposite amount is:             Rs.";
        cin>>depo_amount;
        cout<<"Total amount after deposite is: Rs."<<bal_amount+depo_amount<<endl;

    }
    void Withdraw()
    {
       // withdraw= 35000;

        cout<<"Withdraw amount is:             Rs.";
        cin>>withdraw;
    }
    void TotalBalance()
    {
         name="Sanju Baba";
        total_bal=bal_amount+depo_amount-withdraw;

        cout<<"\nName is:                        "<<name<<endl;
        cout<<"\nTotal balance is:               Rs."<<total_bal<<endl;
    }

};
int main()
{
    BankMember s;
    s.Name();
    s.Account();
    s.TypeOfAcc();
    s.Balance();
    s.DepositeAmount();
    s.Withdraw();
    s.TotalBalance();
}
