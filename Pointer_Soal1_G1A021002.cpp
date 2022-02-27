#include <iostream>
using namespace std;
//Siti Zubaidah
//G1A021002
//Soal 1

int main ()
{
    int a, b, c;
    int *p1, *p2, *p3;

    a = 10 ;
    b = 15 ;
    p1 = &b ;
    cout<<"p1 = "<<&b<<endl;
    p2 = p1 ;
    cout<<"p2 = "<<p1<<endl;
    c = 27 ;
    p1 = &c ;
    cout<<"p1 = "<<&c<<endl;
    a = *p1 ;
    cout<<"a = "<<*p1<<endl;
    p3 = &b;
    cout<<"p3 = "<<&b<<endl;
    *p2 = 8;
   cout<<"*p2 = 8"<<endl;

}