#include <iostream>

using namespace std;

int main()
{
    float y,a,b,x;
    cout << "Program oblicza miejsce zerowe funkcji" << endl;
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
            cout<<"funkcja ma nieskonczonosc miejsc zerowych bo b=0"<<endl;
        }
        else cout<<"funkcja nie ma miejsc zerowych bo b="<<b<<endl;
    }
    else
    {
        y=(a*x)+b;
        cout<<"miejsce zerowe wynosi: "<<y<<endl;
    }
    return 0;
}
