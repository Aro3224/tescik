#include <iostream>

using namespace std;

int main()
{
    float y,a,b,x;
    int wybor;
    cout << "Program oblicza miejsce zerowe funkcji" << endl;

    cout<<"ktorym sposobem chcesz obliczac miejsce zerowe funkcji liniowej?"<<endl;
    cout<<"1. y=ax+b"<<endl;
    cout<<"2. Ax+By+C=0"<<endl;
    cin>>wybor;

    switch(wybor)
    {
    case 1:
        {
                cout<<"Podaj x"<<endl;
                cin>>x;
                cout<<"Podaj b"<<endl;
                cin>>b;
                cout<<"Podaj a"<<endl;
                cin>>a;

                if(a==0)
                {
                    if(b==0)
                    {
                        cout<<"funkcja ma nieskonczonosc miejsc zerowych bo a=0 i b=0"<<endl;
                    }
                    else cout<<"funkcja nie ma miejsc zerowych bo a=0 i b="<<b<<endl;
                }
                else
                {
                    y=(a*x)+b;
                    cout<<"miejsce zerowe wynosi: "<<y<<endl;
                }
                break;
        }
    case 2:
        {
            cout<<"Podaj A: ";
            cin>>a;
            if (a==0) cout<<"funkcja ma nieskonczonosc miejsc zerowych"<<endl;
            else cout<<"miejsce zerowe wynosi: "<<a<<endl;
            break;
        }
    default:
        {
            cout<<"podales zla liczbe"<<endl;
        }

    }


    return 0;
}
