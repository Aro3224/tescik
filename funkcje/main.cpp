#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float y,a,b,x,c,delta,x1,x2,p,q;
    int wybor;
    cout << "Program oblicza miejsce zerowe funkcji" << endl;
    cout << "Jakiej funkcji chcesz obliczac miejsca zerowe?"<<endl;
    cout<<"1. Liniowa"<<endl;
    cout<<"2. Kwadratowa"<<endl;
    cin>>wybor;
    switch(wybor)
    {
    case 1:
        {
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

                    break;
        }
    case 2:
        {
                cout<<"Ktorym sposobem chcesz obliczac miejsca zerowe funkcji kwadratowej?"<<endl;
                cout<<"1. y=ax^2+bx+c"<<endl;
                cout<<"2. y= a(x-p)^2+q"<<endl;

                cin>>wybor;
                switch(wybor)
                {
                case 1:

                    {
                        cout<<"Podaj a"<<endl;
                        cin>>a;
                        if(a==0)
                        {
                            cout<<"funkcja jest liniowa"<<endl;
                        }

                        else
                        {
                            cout<<"Podaj b"<<endl;
                            cin>>b;
                            cout<<"Podaj c"<<endl;
                            cin>>c;

                            cout<<"twoja funkcja to: "<<a<<"x^2+"<<b<<"x+"<<c<<endl;

                            delta=(b*b)-(4*a*c);

                            cout<<"delta= "<<delta<<endl;

                            if (delta>0)
                            {
                                x1=(-b+sqrt(delta))/(2*a);
                                x2=(-b-sqrt(delta))/(2*a);
                                cout<<"miejsca zerowe wynosza: x1="<<x1<<" x2="<<x2<<endl;
                            }
                            else if(delta==0)
                            {
                                x=-b/(2*a);
                                cout<<"miejsce zerowe wynosi: "<<x<<endl;
                            }
                                else cout<<"funkcja nie ma miejsc zerowych"<<endl;
                        }
                        break;
                    }

                case 2:
                    {
                        cout<<"podaj a"<<endl;
                        cin>>a;
                        cout<<"podaj b"<<endl;
                        cin>>b;
                        cout<<"podaj c"<<endl;
                        cin>>c;

                        delta=(b*b)-(4*a*c);
                        p=-b/(2*a);
                        q=-delta/(4*a);
                        cout<<"wierzcholek znajduje sie na pozycji: ("<<p<<","<<q<<")"<<endl;

                        break;
                    }
                default:
                    {
                        cout<<"Podales zla liczbe"<<endl;
                        break;
                    }
                }


            break;
        }

    default:
        {
            cout<<"podales zla liczbe"<<endl;
        }

    }

    return 0;
}
