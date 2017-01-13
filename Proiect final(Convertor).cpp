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
        cout<<"                                         4)Masa                  "<<endl;
        cout<<"                                         5)Viteza                  "<<endl;
        cout<<"                                         6)Volum                  "<<endl;
        cout<<"                                         7)Arie                  "<<endl;
        cout<<"                                         8)Presiune                  "<<endl;
        cout<<"                                         9)Energie                  "<<endl;
        cout<<"                                         a)Densitate                 "<<endl;
        cout<<"                                         b)Consum combustibil        "<<endl;

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


        case '4':

            long double y;
    char z;
    cout<<"                                         CONVERTOR MASA      \n";
    cout<<"\n";
    cout<<"                                 Da-ti numarul pentru conversie: ";
    cin>>y;
    cout<<"1.KILOGRAM in gram si invers;                                 ";cout<<"5.GRAME in tone si invers;\n";
    cout<<"2.KILOGRAM in miligram si invers;                             ";cout<<"6.GRAME in miligrame si invers;\n";
    cout<<"3.KILOGRAM in funt(lb) si invers;                             ";cout<<"7.GRAME in funt(lb) si invers; \n";
    cout<<"4.KILOGRAM in tone si invers; \n";
    cout<<"\n";
    cout<<"a.TONE in funt(lb) si invers; \n";
    cout<<"\n";
    cout<<"Alegeti optiunea dorita:";
    cin>>z;
    switch(z)
    {
                case '1':{cout<<endl<<y<<"kilograme = "<<(y*1000)<<" grame"<<endl<<endl; cout<<endl<<y<<"grame = "<<(y*0.001)<<" kilograme"<<endl<<endl; } break;
                case '2':{cout<<endl<<y<<"kilograme = "<<(y*1000000)<<" miligrame"<<endl<<endl; cout<<endl<<y<<"miligrame = "<<(y*0.000001)<<" kilograme"<<endl<<endl;} break;
                case '3':{cout<<endl<<y<<"kilograme = "<<(y*2.2046244201837775)<<" funt(lb)"<<endl<<endl; cout<<endl<<y<<"funt(lb) = "<<(y*0.453592)<<" kilograme"<<endl<<endl;} break;
                case '4':{cout<<endl<<y<<"kilograme = "<<(y*0.001)<<" tone"<<endl<<endl; cout<<endl<<y<<"tone = "<<(y*1000)<<" kilograme"<<endl<<endl;} break;
    }
    switch(z)
    {
                case '5':{cout<<endl<<y<<"grame = "<<(y*0.000001)<<" tone"<<endl<<endl; cout<<endl<<y<<"tone = "<<(y*1000000)<<" grame"<<endl<<endl; } break;
                case '6':{cout<<endl<<y<<"grame = "<<(y*1000.0000000000001)<<" miligrame"<<endl<<endl; cout<<endl<<y<<"miligrame = "<<(y*0.001)<<" grame"<<endl<<endl;} break;
                case '7':{cout<<endl<<y<<"grame = "<<(y*0.0022046244201837776)<<" funt(lb)"<<endl<<endl; cout<<endl<<y<<"funt(lb) = "<<(y*453.592)<<" grame"<<endl<<endl;} break;
    }

    switch(z)
    {
                case '8':{cout<<endl<<y<<"miligrame = "<<(y*9.999999999999999e-10)<<" tone"<<endl<<endl; cout<<endl<<y<<"tone = "<<(y*1000000000)<<" miligrame"<<endl<<endl; } break;
                case '9':{cout<<endl<<y<<"miligrame = "<<(y*0.0000022046244201837775)<<" funt(lb)"<<endl<<endl; cout<<endl<<y<<"funt(lb) = "<<(y*453592)<<" miligrame"<<endl<<endl;} break;
    }
    switch(z)
    {
                case '9':{cout<<endl<<y<<"tone = "<<(y*2204.6244201837776)<<" funt(lb)"<<endl<<endl; cout<<endl<<y<<"funt(lb) = "<<(y*0.000453592)<<" tone"<<endl<<endl;} break;
    }

    break;

        case '5':
            long double p;
            char optiones;
            cout<<"                                         CONVERTOR VITEZA      \n";
    cout<<"\n";
    cout<<" Da-ti numarul pentru conversie: ";
    cin >> p;
    cout<<"1.METRI/S in centimetri/secunda si invers;                             "; cout<<"6.KILOMETRI/H in centimetri/secunda si invers \n";
    cout<<"2.METRI/S in kilometri/ora si invers;                                  ";cout<<"7.KILOMETRI/H in yards/secunda si invers \n";
    cout<<"3.METRI/S in kilometri/secunda si invers;                              ";cout<<"8.KILOMETRI/H in kilometri/secunda si invers \n";
    cout<<"4.METRI/S in mile/secunda si invers;                                   ";cout<<"9.KILOMETRI/H in mile/secunda si invers \n";
    cout<<"5.METRI/S in yards/secunde si invers;\n";
    cout<<"\n";
    cout<<"a. KILOMETRI/S in centimetri/secunda si invers;                        ";cout<<"d. MILE/SECUNDA in centimetri/secunda si invers; ";
    cout<<"b. KILOMETRI/S in yards/secunda si invers;                             ";cout<<"e. MILE/SECUNDA in yards/secunda si invers; \n";
    cout<<"c. KILOMETRI/S in mile/secunda si invers; \n";
    cout<<"\n";
    cout<<"f.CENTIMETRI/SECUNDA in yards/secunda \n";
    cout<<"\n";
    cout<<"Alegeti optiunea dorita:";
    cin>>optiones;
    switch(optiones)
    {
        case '1':{cout<<endl<<p<<"metri/s= "<<(p* 100)<<" centimetri/secunda"<<endl<<endl; cout<<endl<<p<<"centimetri/secunda= "<<(p* 0.01)<<" metri/s"<<endl<<endl;} break;
        case '2':{cout<<endl<<p<<"metri/s= "<<(p* 3.6)<<" kilometri/ora"<<endl<<endl; cout<<endl<<p<<"kilometri/ora= "<<(p* 0.27777778)<<" metri/s"<<endl<<endl;} break;
        case '3':{cout<<endl<<p<<"metri/s= "<<(p* 0.001)<<" kilometri/secunda"<<endl<<endl; cout<<endl<<p<<"kilometri/secunda= "<<(p* 1000)<<" metri/s"<<endl<<endl;} break;
        case '4':{cout<<endl<<p<<"metri/s= "<<(p * 0.000621371192)<<" mile/secunda"<<endl<<endl; cout<<endl<<p<<"mile/secunda= "<<(p* 1609.344)<<" metri/s"<<endl<<endl;} break;
        case '5':{cout<<endl<<p<<"metri/s= "<<(p* 1.0936130000578717)<<" yards/secunde"<<endl<<endl; cout<<endl<<p<<"yards/secunde "<<(p* 1759.9995199651355)<<" metri/s"<<endl<<endl;} break;

    }
    switch(optiones)
    {
        case '6':{cout<<endl<<p<<"kilometri/h= "<<(p* 27.777777999999998)<<" centimetri/secunda"<<endl<<endl; cout<<endl<<p<<"centimetri/secunda= "<<(p* 0.035999999712000005)<<" kilometri/h"<<endl<<endl;} break;
        case '7':{cout<<endl<<p<<"kilometri/h= "<<(p* 0.3037813913352154)<<" yards/secunde"<<endl<<endl; cout<<endl<<p<<"yards/secunde= "<<(p* 3.2918408715052734)<<" kilometri/h"<<endl<<endl;} break;
        case '8':{cout<<endl<<p<<"kilometri/h= "<<(p* 0.00027777777999999997)<<" kilometri/secunda"<<endl<<endl; cout<<endl<<p<<"kilometri/secunda= "<<(p* 3599.9999712000003)<<" kilometri/h"<<endl<<endl;} break;
        case '9':{cout<<endl<<p<<"kilometri/h= "<<(p * 0.00017260311033563984)<<" mile/secunda"<<endl<<endl; cout<<endl<<p<<"mile/secunda= "<<(p* 5793.638353650894)<<" kilometri/h"<<endl<<endl;} break;
    }
     switch(optiones)
    {
        case 'a':{cout<<endl<<p<<"kilometri/secunda= "<<(p* 100000)<<" centimetri/secunda"<<endl<<endl; cout<<endl<<p<<"centimetri/secunda= "<<(p* 0.00001)<<" kilometri/secunda"<<endl<<endl;} break;
        case 'b':{cout<<endl<<p<<"kilometri/secunda= "<<(p* 1093.6130000578717)<<" yards/secunde"<<endl<<endl; cout<<endl<<p<<"yards/secunde= "<<(p* 0.0009144002494)<<" kilometri/secunda"<<endl<<endl;} break;
        case 'c':{cout<<endl<<p<<"kilometri/secunda= "<<(p* 0.621371192237334)<<" mile/secunda"<<endl<<endl; cout<<endl<<p<<"mile/secunda= "<<(p* 1.609344)<<" kilometri/secunda"<<endl<<endl;} break;
    }
    switch(optiones)
    {
        case 'd':{cout<<endl<<p<<"mile/secunda= "<<(p* 160934.4)<<" centimetri/secunda"<<endl<<endl; cout<<endl<<p<<"centimetri/secunda= "<<(p* 0.000006213711922373339)<<" mile/secunda"<<endl<<endl;} break;
        case 'e':{cout<<endl<<p<<"mile/secunda= "<<(p* 1759.9995199651355)<<" yards/secunde"<<endl<<endl; cout<<endl<<p<<"yards/secunde= "<<(p* 0.0005681819731517935)<<" mile/secunda"<<endl<<endl;} break;
    }
    switch(optiones)
    {
        case 'f':{cout<<endl<<p<<"centimetri/secunda = "<<(p* 0.010936130000578716)<<" yards/secunde"<<endl<<endl; cout<<endl<<p<<"yards/secunde= "<<(p* 91.44002494)<<" centimetri/secunda"<<endl<<endl;} break;
    }
    break;


        case '6':
            long double q;
            char optioness;
            cout<<"                                         CONVERTOR VOLUM     \n";
            cout<<"\n";
            cout<<"Da-ti numarul pentru conversie: ";
            cin>>q;
            cout<<"1.METRU CUB in centimetri cui si invers;                        ";cout<<"5.CENTIMETRI CUBI in mililitri si invers; \n";
            cout<<"2.METRU CUB in decimetri cui si invers;                         ";cout<<"6.CENTIMETRI CUBI in decimetri cubi si invers; \n";
            cout<<"3.METRU CUB in litri si invers;                                 ";cout<<"7.CENTIMETRI CUBI in litri si invers; \n";
            cout<<"4.METRU CUB in mililitri si invers; \n";
            cout<<"\n";
            cout<<"8.LITRI in mililitri si invers;                                 ";cout<<"a. DECIMETRI CUBI in mililitri si invers; \n";
            cout<<"9.LITRI in decimetri cubi si invers;\n";
            cout<<"\n";
            cout<<"Alegeti optiunea dorita:";
            cin>>optioness;
            switch(optioness)
            {

                case '1':{cout<<endl<<q<<"metri cubi= "<<(q*1000000)<<" centimetri cui"<<endl<<endl; cout<<endl<<q<<"centimetru cub= "<<(q*0.000001)<<" metri cubi"<<endl<<endl; } break;
                case '2':{cout<<endl<<q<<"metri cubi= "<<(q*1000)<<" decimetri cui"<<endl<<endl; cout<<endl<<q<<"decimetru cub= "<<(q*0.001)<<" metri cubi"<<endl<<endl;} break;
                case '3':{cout<<endl<<q<<"metri cubi= "<<(q*1000)<<" litri"<<endl<<endl; cout<<endl<<q<<"litru= "<<(q*0.001)<<" metri cubi"<<endl<<endl;} break;
                case '4':{cout<<endl<<q<<"metri cubi= "<<(q*1000000)<<" mililitri"<<endl<<endl; cout<<endl<<q<<"mililitru= "<<(q*0.000001)<<" metri cubi"<<endl<<endl;} break;

            }
            switch(optioness)
            {

                case '5':{cout<<endl<<q<<"centimetri cubi= "<<(q*1)<<" mililitri"<<endl<<endl; cout<<endl<<q<<"mililitri= "<<(q*1)<<" centimetri cubi"<<endl<<endl; } break;
                case '6':{cout<<endl<<q<<"centimetri cubi= "<<(q*0.001)<<" decimetri cubi"<<endl<<endl; cout<<endl<<q<<"decimetri cui= "<<(q*1000)<<" centimetri cubi"<<endl<<endl;} break;
                case '7':{cout<<endl<<q<<"centimetri cubi= "<<(q*0.001)<<" litri"<<endl<<endl; cout<<endl<<q<<"litri= "<<(q*1000)<<" centimetri cubi"<<endl<<endl;} break;
            }
            switch(optioness)
            {

                case '8':{cout<<endl<<q<<"litri= "<<(q*1000)<<" mililitri"<<endl<<endl; cout<<endl<<q<<"mililitri= "<<(q*0.001)<<" litri"<<endl<<endl; } break;
                case '9':{cout<<endl<<q<<"litri= "<<(q*1)<<" decimetri cubi"<<endl<<endl; cout<<endl<<q<<"decimetri cui= "<<(q*1)<<" litri"<<endl<<endl;} break;
            }
            switch(optioness)
            {
                case 'a':{cout<<endl<<q<<"decimetri cubi= "<<(q*1000)<<" mililitri"<<endl<<endl; cout<<endl<<q<<"mililitri= "<<(q*0.001)<<" decimetri cubi"<<endl<<endl;} break;
            }




            break;

                case '7':
                    long double m;
            char optionesss;
            cout<<"                                         CONVERTOR ARIE     \n";
            cout<<"\n";
            cout<<"Da-ti numarul pentru conversie: ";
            cin>>m;
            cout<<"1.METRU PATRAT in centimetru patrat si invers;                     ";cout<<"5.CENTIMETRI PATRATI in hectari si invers; \n";
            cout<<"2.METRU PATRAT in hectari si invers;                               ";cout<<"6.CENTIMETRI PATRATI in kilometri patrati si invers; ";
            cout<<"3.METRU PATRAT in kilometru patrat si invers;                      ";cout<<"7.CENTIMETRI PATRATI in milimetri patrati si invers; ";
            cout<<"4.METRU PATRAT in milimetru patrat si invers;\n";
            cout<<"\n";
            cout<<"a.KILOMETRI PATRATI in milimetri patrati si invers; \n";
            cout<<"\n";
            cout<<"Alegeti optiunea dorita:";
            cin>>optionesss;
            switch(optionesss)
            {
                case '1':{cout<<endl<<m<<"metri patrati= "<<(m*10000)<<" centimetru patrat"<<endl<<endl; cout<<endl<<m<<"centimetru patrat= "<<(m*0.0001)<<" metri patrati"<<endl<<endl; } break;
                case '2':{cout<<endl<<m<<"metri patrati= "<<(m*0.0001)<<" hectari"<<endl<<endl; cout<<endl<<m<<"hectari= "<<(m*10000)<<" metri patrati"<<endl<<endl;} break;
                case '3':{cout<<endl<<m<<"metri patrati= "<<(m*0.000001)<<" kilometru patrat"<<endl<<endl;cout<<endl<<m<<"kilometru patrat= "<<(m*1000000)<<" metri patrati"<<endl<<endl; } break;
                case '4':{cout<<endl<<m<<"metri patrati= "<<(m*1000000)<<" milimetru patrat"<<endl<<endl; cout<<endl<<m<<"milimetru patrat= "<<(m*0.000001)<<" metri patrati"<<endl<<endl;} break;

            }
            switch(optionesss)
            {
                case '5':{cout<<endl<<m<<"centimetri patrati= "<<(m*0.00000001)<<" hectari"<<endl<<endl; cout<<endl<<m<<"hectari= "<<(m*100000000)<<" centimetri patrati"<<endl<<endl;} break;
                case '6':{cout<<endl<<m<<"centimetri patrati= "<<(m*0.0000000001)<<" kilometri patrat"<<endl<<endl;cout<<endl<<m<<"kilometru patrat= "<<(m*10000000000)<<" centimetri patrati"<<endl<<endl; } break;
                case '7':{cout<<endl<<m<<"centimetri patrati= "<<(m*100)<<" milimetru patrat"<<endl<<endl; cout<<endl<<m<<"milimetru patrat= "<<(m*0.01)<<" centimetri patrati"<<endl<<endl;} break;
            }
             switch(optionesss)
            {
                case '8':{cout<<endl<<m<<"hectari= "<<(m*10000000000)<<" milimetru patrat"<<endl<<endl; cout<<endl<<m<<"milimetru patrat= "<<(m*1000000000000)<<" hectari"<<endl<<endl;} break;
                case '9':{cout<<endl<<m<<"hectari= "<<(m*0.01)<<" kilometri patrat"<<endl<<endl;cout<<endl<<m<<"kilometru patrat= "<<(m*100)<<" hectari"<<endl<<endl; } break;
            }
            switch(optionesss)
            {
                case 'a':{cout<<endl<<m<<"kilometri patrati= "<<(m*1000000000000)<<" milimetru patrat"<<endl<<endl; cout<<endl<<m<<"milimetru patrat= "<<(m*0.000000000001)<<" kilometri patrati"<<endl<<endl;} break;
            }

            break;

            case '8':
                    long double u;
            char optionnes;
            cout<<"                                         CONVERTOR PRESIUNE     \n";
            cout<<"\n";
            cout<<"Da-ti numarul pentru conversie: ";
            cin>>u;
            cout<<"1.PASCAL in bar si invers;                              "; cout<<"4.BAR in megapascal si invers; \n";
            cout<<"2.PASCAL in milibar si invers;                          "; cout<<"5.BAR in milibar si invers; \n";
            cout<<"3.PASCAL in megapascal si invers; \n";

            cin>>optionnes;
            switch(optionnes)
            {
                case '1':{cout<<endl<<u<<"pascal= "<<(u*0.00001)<<"bar"<<endl<<endl; cout<<endl<<u<<"bar= "<<(u*98000)<<"pascal"<<endl<<endl;} break;
                case '2':{cout<<endl<<u<<"pascal= "<<(u*0.01 )<<" milibar"<<endl<<endl; cout<<endl<<u<<"milibar= "<<(u*98)<<"pascal"<<endl<<endl;} break;
                case '3':{cout<<endl<<u<<"pascal= "<<(u*0.000001)<<" megapascal"<<endl<<endl; cout<<endl<<u<<"megapascal= "<<(u*1000000)<<"pascal"<<endl<<endl;} break;
            }
            switch(optionnes)
            {
                case '4':{cout<<endl<<u<<"bar= "<<(u*0.098)<<"megapascal"<<endl<<endl; cout<<endl<<u<<"megapascal= "<<(u*10.204081632653061)<<"bar"<<endl<<endl;} break;
                case '5':{cout<<endl<<u<<"bar= "<<(u*1000 )<<" milibar"<<endl<<endl; cout<<endl<<u<<"milibar= "<<(u*0.001)<<"bar"<<endl<<endl;} break;
            }
            switch(optionnes)
            {
                case '6':{cout<<endl<<u<<"milibar= "<<(u*0.000098)<<"megapascal"<<endl<<endl; cout<<endl<<u<<"megapascal= "<<(u*10204.081632653062)<<"milibar"<<endl<<endl;} break;
            }
            break;

            case '9':
                    long double r;
            char optionnnes;
            cout<<"                                         CONVERTOR ENERGIE     \n";
            cout<<"\n";
            cout<<"Da-ti numarul pentru conversie: ";
            cin>>r;
            cout<<"1.JOULE in erg si invers; \n";
            cout<<"2.JOULE in calorie si invers; \n";
            cout<<"3.JOULE in kilocalorie si invers; \n";
            cout<<"\n";
            cout<<"4.ERG in kilocalorie si invers; \n";
            cout<<"5.ERG in calorie si invers; \n";
            cout<<"\n";
            cout<<"6.CALORIE in kilocalorie si invers; \n";
            cout<<"\n";
            cout<<"Alegeti optiunea dorita:";
            cin>>optionnnes;
            switch(optionnnes)
            {
                case '1':{cout<<endl<<r<<"joule= "<<(r*10000000)<<"erg"<<endl<<endl; cout<<endl<<r<<"erg= "<<(r*0.0000001)<<"joule"<<endl<<endl;} break;
                case '2':{cout<<endl<<r<<"joule= "<<(r*0.2388 )<<" calorie"<<endl<<endl; cout<<endl<<r<<"calorie= "<<(r*4.1868)<<"joule"<<endl<<endl;} break;
                case '3':{cout<<endl<<r<<"joule= "<<(r*0.0002388)<<" kilocalorie"<<endl<<endl; cout<<endl<<r<<"kilocalorie= "<<(r*4186.8)<<"joule"<<endl<<endl;} break;
            }
            switch(optionnnes)
            {
                case '4':{cout<<endl<<r<<"erg= "<<(r*10000000)<<"kilocalorie"<<endl<<endl; cout<<endl<<r<<"kilocalorie= "<<(r*0.0000001)<<"erg"<<endl<<endl;} break;
                case '5':{cout<<endl<<r<<"erg= "<<(r*0.2388 )<<" calorie"<<endl<<endl; cout<<endl<<r<<"calorie= "<<(r*4.1868)<<"erg"<<endl<<endl;} break;
            }
            switch(optionnnes)
            {
                case '6':{cout<<endl<<r<<"calorie= "<<(r*0.001)<<"kilocalorie"<<endl<<endl; cout<<endl<<r<<"kilocalorie= "<<(r*1000)<<"calorie"<<endl<<endl;} break;
            }

            break;

            case 'a':
                    long double s;
            char optionnness;
            cout<<"                                         CONVERTOR DENSITATE     \n";
            cout<<"\n";
            cout<<"Da-ti numarul pentru conversie: ";
            cin>>s;
            cout<<"1.KG/METRU CUB in gram/metru cub si invers;                           ";cout<<"6.GRAM/METRU CUB in tona/metru cub si invers \n";
            cout<<"2.KG/METRU CUB in kg/cm cub si invers;                                ";cout<<"7.GRAM/METRU CUB in tona/metru cub si invers \n";
            cout<<"3.KG/METRU CUB in kg/litru si invers;                                 ";cout<<"8.GRAM/METRU CUB in tona/metru cub si invers \n";
            cout<<"4.KG/METRU CUB in miligram/litru si invers;                           ";cout<<"9.GRAM/METRU CUB in tona/metru cub si invers \n";
            cout<<"5.KG/METRU CUB in tona/metru cub si invers; \n";
            cout<<"\n";
            cout<<"a.KG/CM CUB in tona/metru cub si invers;                              ";cout<<"d. MILIGRAM/LITRU in tona/metru cub; \n";
            cout<<"b.KG/CM CUB in miligram/litru cub si invers;                          ";cout<<"e. MILIGRAM/LITRU in kg/litru cub; \n";
            cout<<"c.KG/CM CUB in kg/litru cub si invers                                 ";cout<<"f. KG/LITRU in tona/metru cub si invers; \n";
            cout<<"\n";
            cout<<"Alege optiunea dorita:";

            cin>>optionnness;
            switch(optionnness)
            {

                case '1':{cout<<endl<<s<<"kg/metru cub= "<<(s*1000)<<" gram pe metru cub"<<endl<<endl; cout<<endl<<s<<"gram pe metru cub= "<<(s*0.001 )<<" kg/metru cub"<<endl<<endl;} break;
                case '2':{cout<<endl<<s<<"kg/metru cub= "<<(s*0.000001)<<" kg pe cm cub"<<endl<<endl; cout<<endl<<s<<"kg pe cm cub= "<<(s*1000000 )<<" kg/metru cub"<<endl<<endl;} break;
                case '3':{cout<<endl<<s<<"kg/metru cub= "<<(s*0.001 )<<" kg pe litru"<<endl<<endl; cout<<endl<<s<<"kg pe litru= "<<(s*1000 )<<" kg/metru cub"<<endl<<endl;} break;
                case '4':{cout<<endl<<s<<"kg/metru cub= "<<(s*1000 )<<" miligram pe litru"<<endl<<endl; cout<<endl<<s<<"miligram pe litru= "<<(s*0.001 )<<" kg/metru cub"<<endl<<endl;} break;
                case '5':{cout<<endl<<s<<"kg/metru cub= "<<(s*0.001 )<<" tona pe metru cub"<<endl<<endl; cout<<endl<<s<<"tona pe metru cub= "<<(s*1000 )<<" kg/metru cub"<<endl<<endl;} break;

            }
            switch(optionnness)
            {

                case '6':{cout<<endl<<s<<"gram/metru cub= "<<(s*0.000001)<<"tona/metru cub"<<endl<<endl; cout<<endl<<s<<"tona/metru cub= "<<(s*1000000 )<<" gram/metru cub"<<endl<<endl;} break;
                case '7':{cout<<endl<<s<<"gram/metru cub= "<<(s*0.000000001)<<" kg/cm cub"<<endl<<endl; cout<<endl<<s<<"kg/cm cub= "<<(s*1000000000 )<<" gram/metru cub"<<endl<<endl;} break;
                case '8':{cout<<endl<<s<<"gram/metru cub= "<<(s*0.000001 )<<" kg pe litru"<<endl<<endl; cout<<endl<<s<<"kg/litru= "<<(s*1000000 )<<" gram/metru cub"<<endl<<endl;} break;
                case '9':{cout<<endl<<s<<"gram/metru cub= "<<(s*1 )<<" miligram/litru"<<endl<<endl; cout<<endl<<s<<"miligram/litru= "<<(s*1 )<<" gram/metru cub"<<endl<<endl;} break;
            }
            switch(optionnness)
            {

                case 'a':{cout<<endl<<s<<"kg/cm cub= "<<(s*1000)<<"tona/metru cub"<<endl<<endl; cout<<endl<<s<<"tona/metru cub= "<<(s*1000000 )<<" kg/cm cub"<<endl<<endl;} break;
                case 'b':{cout<<endl<<s<<"kg/cm cub= "<<(s*1000000000)<<" miligram/litru"<<endl<<endl; cout<<endl<<s<<"miligram/litru= "<<(s*0.000000001 )<<" kg/cm cub"<<endl<<endl;} break;
                case 'c':{cout<<endl<<s<<"kg/cm cub= "<<(s*1000 )<<" kg/litru"<<endl<<endl; cout<<endl<<s<<"kg/litru= "<<(s*0.001 )<<" kg/cm cub"<<endl<<endl;} break;
            }
            switch(optionnness)
            {

                case 'd':{cout<<endl<<s<<"miligram/litru= "<<(s*0.000001)<<"tona/metru cub"<<endl<<endl; cout<<endl<<s<<"tona/metru cub= "<<(s*1000000 )<<" miligram/litru"<<endl<<endl;} break;
                case 'e':{cout<<endl<<s<<"miligram/litru= "<<(s*0.000001)<<" kg/litru"<<endl<<endl; cout<<endl<<s<<"kg/litru= "<<(s*1000000 )<<" miligram/litru"<<endl<<endl;} break;
            }
            switch(optionnness)
            {

                case 'f':{cout<<endl<<s<<"kg/litru= "<<(s*1)<<"tona/metru cub"<<endl<<endl; cout<<endl<<s<<"tona/metru cub= "<<(s*1 )<<" kg/litru"<<endl<<endl;} break;
            }
          break;


          case 'b':
                    long double h;
            char ooptionnness;
            cout<<"                                         CONVERTOR CONSUM COMBUSTIBIL     \n";
            cout<<"\n";
            cout<<"Da-ti numarul pentru conversie: ";
            cin>>h;
            cout<<"1.LITRI/100KM in km/litru; \n";
            cout<<"2.LITRI/100KM in mile/galon; \n";
            cout<<"3.LITRI/100KM in mile/litru; \n";
            cout<<"\n";
            cout<<"Alege optiunea dorita:";

            cin>>ooptionnness;
            switch(ooptionnness)
            {

                case '1':{cout<<endl<<h<<"l/100km= "<<(h*100)<<" km/l"<<endl<<endl;} break;
                case '2':{cout<<endl<<h<<"l/100km= "<<(h*235.2)<<" mile/galon"<<endl<<endl;} break;
                case '3':{cout<<endl<<h<<"l/100km= "<<(h*62.14 )<<" mile/litru"<<endl<<endl;} break;
            }





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
