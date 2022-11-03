#include <iostream>

using namespace std;

int main()
{
    float y,a,b,x;
    cout << "Program oblicza miejsce zerowe funkcji" << endl;
    cout<<"Podaj a"<<endl;
    cin>>a;
    while(a==0)
    {
       cout<<"a nie moze byc 0, podaj inna liczbe"<<endl;
       cin>>a;
    }
    cout<<"Podaj b"<<endl;
    cin>>b;
    cout<<"Podaj x"<<endl;
    cin>>x;
    y=(a*x)+b;
    cout<<"miejsce zerowe wynosi: "<<y<<endl;
    return 0;
}
