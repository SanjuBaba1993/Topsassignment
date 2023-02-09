 #include<iostream>
 using namespace std;
 class cricketer{
   protected:
    string name;
    float run,total_inning,best_score;
 public:
 void func()
    {
        name="sanju baba";
        run=2005;
        total_inning=20;
        best_score=89;
    }
    };

    class betsmen : public  cricketer
    {
        float avrage_score;
        public:
        void func2(){
        avrage_score=run/total_inning;

        cout<<"name is:"<<name<<endl;
        cout<<"run is:"<<run<<endl;
        cout<<"inning is:"<<total_inning<<endl;
        cout<<"best score is:"<<best_score<<endl;
        cout<<"avrage score is:"<<avrage_score<<endl;
        }
    };
      int main(){
    betsmen s;
    s.func();
    s.func2();
    }
 