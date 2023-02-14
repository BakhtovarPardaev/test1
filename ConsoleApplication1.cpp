

#include <iostream>
using namespace std;

class  human
{public:
    static int kol;

    human()
    {     
       
           
           if (kol > 4)
           {
            cout<<"oshibka"<<endl;
            return;
           }
           kol++;
           Id = kol;
          
    }

    ~human()
    {

    }

   int Id;
};

int human::kol = 0;

int main()
{
    human a;
    human b;
    human c;
    human v;
    human d;
    human q;

    
    cout << a.Id << endl;
    cout << b.Id << endl;
    cout << c.Id << endl;
    cout << v.Id << endl;
    cout << d.Id << endl;
    cout << q.Id << endl;

    cout <<endl<< human::kol << endl;

}


