#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{



        long double fa, c, k;
        char optiune;
        char rasp;

        restart:

        cout << "\n";
        cout << "\n";
        cout<<"                                ---------CONVERTOR---------                "<<endl;
        cout<<"\n";
        cout<<"                                         Optiuni de convertire:                               "<<endl;
        cout<<"                                         1)Temperatura                  "<<endl;
        cout<<"                                         2)Lungime                  "<<endl;
        cout<<"                                         3)Timp                  "<<endl;
        cout<<"                                                                                                          "<<endl;


        cout << "\n                               Pentru a alege una dintre optiunile meniului,\n                                         scrieti numarul din fata optiunii." <<endl;

        cout << "\n Ce alegeti? > ";
        cin >> optiune;
        cout << "\n";

switch(optiune){

case '1':
     long double fa, c, k;
        char optiune;
        char rasp;
        cout << "\n";
        cout << "\n";

        cout<<"                                         CONVERTOR DE TEMPERATURA                "<<endl;

        cout<<"                             Optiuni de convertire:                               "<<endl;
        cout<<"                                         1.Celsius in Fahrenheit                  "<<endl;
        cout<<"                                         2.Fahrenheit in Celsius                  "<<endl;
        cout<<"                                         3.Celsius in Kelvin                      "<<endl;
        cout<<"                                         4.Kelvin in Celsius                      "<<endl;
        cout<<"                                         5.Fahrenheit in Kelvin            "<<endl;
        cout<<"                                         6.Kelvin in Fahrenheit            "<<endl;
        cout<<"                                                                                                          "<<endl;




        cout << "\n                               Pentru a alege una dintre optiunile meniului,\n                                         scrieti numarul din fata optiunii." <<endl;

        cout << "\n Ce alegeti? > ";
        cin >> optiune;
        cout << "\n";
        switch (optiune){
    case '1':
         system ("cls");
         cout <<"\n";
         cout <<" Ati ales conversiunea din Celsius in Fahrenheit."<<endl;
         cout <<"\n Introduceti numarul de grade Celsius : ";
         cin >>c;
         cout <<"\n "<<c<<"' Celsius = "<<( c * 1.8) + 32<<"' Fahrenheit"<<endl;
         cout<<" _________________________________________________"<<endl;
         break;

case '2':
         system ("cls");
         cout <<"\n";
         cout <<" Ati ales conversiunea din Fahrenheit in Celsius."<<endl;
         cout <<"\n Introduceti numarul de grade Fahrenheit : ";
         cin >>fa;
         cout <<"\n "<<fa<<"' Fahrenheit = "<<( fa - 32) / 1.8<<"' Celsius"<<endl;
         cout<<" _________________________________________________"<<endl;
         break;

case '3':
         system ("cls");
         cout <<"\n";
         cout <<" Ati ales conversiunea din Celsius in Kelvin."<<endl;
         cout <<"\n Introduceti numarul de grade Celsius : ";
         cin >>c;
         cout <<"\n "<<c<<"' Celsius = "<<(c + 273.15)<<"' Kelvin"<<endl;
         cout<<" _________________________________________________"<<endl;
         break;

case '4':
         system ("cls");
         cout <<"\n";
         cout <<" Ati ales conversiunea din Kelvin in Celsius."<<endl;
         cout <<"\n Introduceti numarul de grade Kelvin : ";
         cin >>k;
         cout <<"\n "<<k<<"' Kelvin = "<<(k - 273.15)<<"' Celsius"<<endl;
         cout<<" _________________________________________________"<<endl;
         break;

case '5':
         system ("cls");
         cout <<"\n";
         cout <<" Ati ales conversiunea din Fahrenheit in Kelvin."<<endl;
         cout <<"\n Introduceti numarul de grade Fahrenheit : ";
         cin >>fa;
         cout <<"\n "<<fa<<"' Fahrenheit = "<<0.555556 * (fa -32) + 273.15<<"' Kelvin"<<endl;
         cout<<" _________________________________________________"<<endl;
         break;

case '6':
         system ("cls");
         cout <<"\n";
         cout <<" Ati ales conversiunea din Kelvin in Fahrenheit."<<endl;
         cout <<"\n Introduceti numarul de grade Kelvin : ";
         cin >>k;
         cout <<"\n "<<k<<"' Kelvin = "<<((k - 273) * 1.8 ) + 32<<"' Fahrenheit"<<endl;
         cout<<" _________________________________________________"<<endl;
         break;
        }
        break;

case '2':
    cout<<"                                         CONVERTOR DE LUNGIME\n"<<endl;
    long double j;
    char o;
    cout<<"                                              Da-ti numarul pentru conversie: ";
    cin>>j;
    cout<<"\n";
    cout<<"1.METRI in centimetri si invers;                                        ";cout<<"a.CENTIMETRI in picior(foot) si invers; \n";
    cout<<"2.METRI in picior(foot) si invers;                                      ";cout<<"b.CENTIMETRI in tol(inch) si invers; \n";
    cout<<"3.METRI in tol(inch) si invers;                                         ";cout<<"c.CENTIMETRI in kilometru si invers; \n";
    cout<<"4.METRI in kilometru si invers;                                         ";cout<<"d.CENTIMETRI in mila si invers; \n";
    cout<<"5.METRI in mila si invers;                                              ";cout<<"e.CENTIMETRI in milimetru si invers; \n";
    cout<<"6.METRI in milimetru si invers;                                         ";cout<<"f.CENTIMETRI in yards si invers; \n";
    cout<<"7.METRI in yards si invers; ";
    cout<<"\n";
    cout<<"\n";
    cout<<"g.PICIOR(FOOT) in tol(inch) si invers;                                  "; cout<<"l.TOL(INCH) in kilometri si invers; \n";
    cout<<"h.PICIOR(FOOT) in kilometru si invers;                                  "; cout<<"m.TOL(INCH) in mile si invers; \n";
    cout<<"i.PICIOR(FOOT) in mila si invers;                                       ";cout<<"n.TOL(INCH) in milimetri si invers; \n";
    cout<<"j.PICIOR(FOOT) in milimetru si invers;                                  ";cout<<"o.TOL(INCH) in yards si invers; \n";
    cout<<"k.PICIOR(FOOT) in yards si invers; ";
    cout<<"\n";
    cout<<"\n";
    cout<<"p.KILOMETRI in mile si invers;                                          "; cout<<"s.MILE in yards si invers; \n";
    cout<<"q.KILOMETRI in milimetru si invers;                                     ";cout<<"t.MILE in milimetri si invers; \n";
    cout<<"r.KILOMETRI in yards si invers; ";
    cout<<"\n";
    cout<<"\n";
    cout<<"u.YARDS in milimetri si invers; \n";
    cout<<"\n";
    cout<<"Alegeti optiunea dorita: ";
    cin>>o;
    switch(o)
    {
        case '1':{cout<<endl<<j<<"metri = "<<(j*100)<<" centimetri"<<endl<<endl; cout<<endl<<j<<"centimetri = "<<(j*0.01)<<" metri"<<endl<<endl; } break;
        case '2':{cout<<endl<<j<<"metri = "<<(j*3.28083)<<" picior(foot)"<<endl<<endl;  cout<<endl<<j<<"picior(foot) = "<<(j*0.3048)<<" metri)"<<endl<<endl; } break;
        case '3':{cout<<endl<<j<<"metri = "<<(j*39.37007)<<" tol(inch)"<<endl<<endl; cout<<endl<<j<<"tol(inch) = "<<(j*0.0254)<<" metri"<<endl<<endl;} break;
        case '4':{cout<<endl<<j<<"metri = "<<(j*0.001)<<" kilometru"<<endl<<endl; cout<<endl<<j<<"kilometru = "<<(j*1000)<<" metri"<<endl<<endl;} break;
        case '5':{cout<<endl<<j<<"metri = "<<(j*0.000621371192)<<" mila"<<endl<<endl; cout<<endl<<j<<"mila = "<<(j*1609.344)<<" metri"<<endl<<endl;} break;
        case '6':{cout<<endl<<j<<"metri = "<<(j*1000)<<" milimetru"<<endl<<endl; cout<<endl<<j<<"milimetru = "<<(j*0.001)<<" metri"<<endl<<endl;} break;
        case '7':{cout<<endl<<j<<"metri = "<<(j*0.000621371192)<<" yards"<<endl<<endl; cout<<endl<<j<<"yards = "<<(j*0.9144002494)<<" metri"<<endl<<endl;} break;
        cout<<"\n";
    }

    switch(o)
    {
        case 'a':{cout<<endl<<j<<"centimetri = "<<(j*0.03280839895013123)<<" picior(foot)"<<endl<<endl; cout<<endl<<j<<"picior(foot) = "<<(j*30.48)<<" centimetri"<<endl<<endl;} break;
        case 'b':{cout<<endl<<j<<"centimetri = "<<(j*0.3937007874015748)<<" tol(inch)"<<endl<<endl; cout<<endl<<j<<"tol(inch) = "<<(j*2.54)<<" centimetri"<<endl<<endl;} break;
        case 'c':{cout<<endl<<j<<"centimetri = "<<(j*0.00001)<<" kilometru"<<endl<<endl; cout<<endl<<j<<"kilometru = "<<(j*100000)<<" centimetri"<<endl<<endl;} break;
        case 'd':{cout<<endl<<j<<"centimetri = "<<(j*0.000006213711922373339)<<" mila"<<endl<<endl; cout<<endl<<j<<"mila = "<<(j*160934.4)<<"centimetri"<<endl<<endl;} break;
        case 'e':{cout<<endl<<j<<"centimetri = "<<(j*10)<<" milimetru"<<endl<<endl; cout<<endl<<j<<"milimetru = "<<(j*0.1)<<" centimetri"<<endl<<endl;} break;
        case 'f':{cout<<endl<<j<<"centimetri = "<<(j*0.010936130000578716)<<" yards"<<endl<<endl; cout<<endl<<j<<"yards = "<<(j*91.44002494)<<" centimetri"<<endl<<endl;} break;
    }

    switch(o)
    {
        case 'g':{cout<<endl<<j<<"picior(foot) = "<<(j*30.48)<<"tol(inch) "<<endl<<endl; cout<<endl<<j<<"tol(inch) = "<<(j*0.08333333333333333)<<"picior(foot) "<<endl<<endl; } break;
        case 'h':{cout<<endl<<j<<"picior(foot) = "<<(j*2.54)<<" kilometru"<<endl<<endl; cout<<endl<<j<<"kilometru = "<<(j*3280.839895013123)<<" picior(foot)"<<endl<<endl;} break;
        case 'i':{cout<<endl<<j<<"picior(foot) = "<<(j*100000)<<" mila"<<endl<<endl; cout<<endl<<j<<"mila = "<<(j*5280)<<" picior(foot)"<<endl<<endl;} break;
        case 'j':{cout<<endl<<j<<"picior(foot) = "<<(j*160934.4)<<"milimetru"<<endl<<endl; cout<<endl<<j<<"milimetru = "<<(j*0.0032808398950131233)<<" picior(foot)"<<endl<<endl;} break;
        case 'k':{cout<<endl<<j<<"picior(foot) = "<<(j*0.1)<<" yards"<<endl<<endl; cout<<endl<<j<<"yards = "<<(j*3.0000008182414697)<<" picior(foot)"<<endl<<endl;} break;
    }
    switch(o)
    {
      case 'l':{cout<<endl<<j<<"tol(inch) = "<<(j*0.000025399999999999997)<<"kilometru "<<endl<<endl; cout<<endl<<j<<"kilometru = "<<(j*39370.078740157485)<<"tol(inch) "<<endl<<endl;} break;
      case 'm':{cout<<endl<<j<<"tol(inch) = "<<(j*0.000015782828282828283)<<"mila "<<endl<<endl; cout<<endl<<j<<"mila = "<<(j*63360.00000000001)<<"tol(inch) "<<endl<<endl;} break;
      case 'n':{cout<<endl<<j<<"tol(inch) = "<<(j*25.4)<<"milimetru "<<endl<<endl; cout<<endl<<j<<"milimetru = "<<(j*0.03937007874015748)<<"tol(inch) "<<endl<<endl;} break;
      case 'o':{cout<<endl<<j<<"tol(inch) = "<<(j*0.027777770201469938)<<"yards "<<endl<<endl; cout<<endl<<j<<"yards = "<<(j*36.00000981889764)<<"tol(inch) "<<endl<<endl;} break;
    }
    switch(o)
    {
        case 'p':{cout<<endl<<j<<"kilometri = "<<(j*0.621371192237334)<<"mile "<<endl<<endl; cout<<endl<<j<<"mile = "<<(j*1.609344)<<"kilometri "<<endl<<endl;} break;
        case 'q':{cout<<endl<<j<<"kilometri = "<<(j*1000000)<<"milimetru "<<endl<<endl; cout<<endl<<j<<"milimetru = "<<(j*0.000001)<<"kilometri "<<endl<<endl;} break;
        case 'r':{cout<<endl<<j<<"kilometri = "<<(j*1093.6130000578717)<<"yards"<<endl<<endl; cout<<endl<<j<<"yards = "<<(j*0.0009144002494)<<"kilometri "<<endl<<endl;} break;
    }
    switch(o)
    {
        case 's':{cout<<endl<<j<<"mile = "<<(j*1759.9995199651355)<<"yards "<<endl<<endl; cout<<endl<<j<<"yards = "<<(j*0.0005681819731517935)<<"mile "<<endl<<endl;} break;
        case 't':{cout<<endl<<j<<"mile = "<<(j*1609344)<<"milimetru "<<endl<<endl; cout<<endl<<j<<"milimetru = "<<(j*6.21371192237334e-7)<<"mile "<<endl<<endl;} break;
    }
    switch(o)
    {
        case 'u':{cout<<endl<<j<<"milimetru = "<<(j*0.0010936130000578717)<<"yards "<<endl<<endl; cout<<endl<<j<<"yards = "<<(j*914.4002494)<<"milimetru "<<endl<<endl;} break;
    }

    break;


        case '3':
             cout<<"                                         CONVERTOR DE TIMP\n"<<endl;
    long double t;
    char x;
    cout<<"                                              Da-ti numarul pentru conversie: ";
    cin>>t;
    cout<<"1.SECUNDE in saptamani si invers;                                             ";cout<<"6.SAPTAMANI in minute si invers; \n";
    cout<<"2.SECUNDE in minute si invers;                                                ";cout<<"7.SAPTAMANI in centisecunde si invers; \n";
    cout<<"3.SECUNDE in centisecunde si invers;                                          ";cout<<"8.SAPTAMANI in milisecunde si invers; \n";
    cout<<"4.SECUNDE in milisecunde si invers;                                           ";cout<<"9.SAPTAMANI in decisecune si invers; \n";
    cout<<"5.SECUNDE in decisecunde si invers;";
    cout<<"\n";
    cout<<"\n";
    cout<<"a.MINUTE in centisecunde;                                                   ";cout<<"d.CENTISECUNDE in milisecunde si invers; \n";
    cout<<"b.MINUTE in milisecunde;                                                    "; cout<<"e.CENTISECUNDE in decisecunde si invers; \n";
    cout<<"c.MINUTE in decisecunde; ";
    cout<<"\n";
    cout<<"\n";
    cout<<"f.MILISECUNDE in decisecunde si invers; \n";
    cout<<"\n";
    cout<<"Alegeti optiunea dorita: ";
    cin>>x;
    switch(x)
    {
                case '1':{cout<<endl<<t<<"secunde = "<<(t*1.65344e-6)<<" saptamani"<<endl<<endl; cout<<endl<<t<<"saptamani = "<<(t*604800)<<" secunde"<<endl<<endl; } break;
                case '2':{cout<<endl<<t<<"secunde = "<<(t*0.0166667)<<" minute"<<endl<<endl; cout<<endl<<t<<"minute = "<<(t*60)<<" secunde"<<endl<<endl;} break;
                case '3':{cout<<endl<<t<<"secunde = "<<(t*100)<<" centisecunde"<<endl<<endl; cout<<endl<<t<<"centisecunde = "<<(t*0.01)<<" secunde"<<endl<<endl;} break;
                case '4':{cout<<endl<<t<<"secunde = "<<(t*1000)<<" milisecunde"<<endl<<endl; cout<<endl<<t<<"milisecunde = "<<(t*0.001)<<" secunde"<<endl<<endl;} break;
                case '5':{cout<<endl<<t<<"secunde = "<<(t*10)<<" decisecunde"<<endl<<endl; cout<<endl<<t<<"decisecunde = "<<(t*0.1)<<" secunde"<<endl<<endl;} break;
    }
    switch(x)
    {
                case '6':{cout<<endl<<t<<"saptamani = "<<(t*10080)<<" minute"<<endl<<endl; cout<<endl<<t<<"minute = "<<(t*0.0000992063492063492)<<" saptamani"<<endl<<endl; } break;
                case '7':{cout<<endl<<t<<"saptamani = "<<(t*60480000)<<" centisecunde"<<endl<<endl; cout<<endl<<t<<"centisecunde = "<<(t*1.6534391534391535e-8)<<" saptamani"<<endl<<endl;} break;
                case '8':{cout<<endl<<t<<"saptamani = "<<(t*604800000)<<" milisecunde"<<endl<<endl; cout<<endl<<t<<"milisecunde = "<<(t*1.6534391534391535e-9)<<" saptamani"<<endl<<endl;} break;
                case '9':{cout<<endl<<t<<"saptamani = "<<(t*6048000)<<" decisecunde"<<endl<<endl; cout<<endl<<t<<"decisecunde = "<<(t*1.6534391534391535e-7)<<" saptamani"<<endl<<endl;} break;
    }
    switch(x)
    {
                case 'a':{cout<<endl<<t<<"minute = "<<(t*6000)<<" centisecunde"<<endl<<endl; cout<<endl<<t<<"centisecunde = "<<(t*0.00016666666666666666)<<" minute"<<endl<<endl; } break;
                case 'b':{cout<<endl<<t<<"minute = "<<(t*60000)<<" milisecunde"<<endl<<endl; cout<<endl<<t<<"milisecunde = "<<(t*0.000016666666666666667)<<" minute"<<endl<<endl;} break;
                case 'c':{cout<<endl<<t<<"minute = "<<(t*600)<<" decisecunde"<<endl<<endl; cout<<endl<<t<<"decisecunde = "<<(t*0.0016666666666666668)<<" minute"<<endl<<endl;} break;
    }
    switch(x)
    {
                case 'd':{cout<<endl<<t<<"centisecunde = "<<(t*10)<<" milisecunde"<<endl<<endl; cout<<endl<<t<<"milisecunde = "<<(t*0.1)<<" centisecunde"<<endl<<endl; } break;
                case 'e':{cout<<endl<<t<<"centisecunde = "<<(t*0.09999999999999999)<<" decisecunde"<<endl<<endl; cout<<endl<<t<<"decisecunde = "<<(t*10)<<" centisecunde"<<endl<<endl;} break;
    }
    switch(x)
    {
                case 'f':{cout<<endl<<t<<"milisecunde = "<<(t*0.01)<<"decisecunde"<<endl<<endl; cout<<endl<<t<<"decisecunde = "<<(t*100)<<" milisecunde"<<endl<<endl; } break;
    }
    break;




}


         cout <<"\n Revin la meniu? d/n  > ";
         cin >>rasp;
switch(rasp)
{
case 'd':
case 'D':
         system("cls");
         goto restart;
         break;
case 'n':
case 'N':
         cout <<"\n Programul se va inchide, apasati enter.\n"<<endl;
         EXIT_SUCCESS;
         break;
default:
         cout <<"\n";
         cout <<"Nu exista optiunea aleasa!"<<endl;
         cout <<"Programul se va inchide!"<<endl;
         break;
}
         system("pause");
}
