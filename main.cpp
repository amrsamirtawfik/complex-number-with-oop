#include <iostream>
#include <Complex.h>
using namespace std;

int main()
{
 Complex c1(5,4),c2(2,3);
cout << "c1 equals: " ;
c1.printComplex();

cout << "c2 equals: " ;
c2.printComplex();
 Complex c3= c1 + c2;
 Complex c4= c1 - c2;
 cout << "c1 + c2 equals :";
 c3.printComplex() ;
 cout << "c1 - c2 equals :";
 c4.printComplex();
 Complex c5= c1*c2;
 cout << "c1*c2 equals :" ;
 c5.printComplex();
 Complex c6=c1/c2;
 cout << "c1/c2 equals :" ;
 c6.printComplex();
 Complex c7=c1%c2;
 cout << "c1%c2 equals :" ;
 c7.printComplex();

 cout << "c1++ equals : " ;
 c1++;
 c1.printComplex();
 cout << "++c1 equals : " ;
 ++c1;
 c1.printComplex();
 cout << "Is c1>c2? Ans: ";
 bool test = c1>c2 ;
 cout << test << endl;

 cout << "Is c1=c2? Ans: ";
 test =  c1==c2;
 cout << test << endl;

 cout << "Is c1!=c2? Ans: ";
 test =  c1!=c2;
 cout << test << endl;
 Complex c9(5,5) , c10(5,5);

cout << "c9 equals: " ;

 c9.printComplex();
cout << "c10 equals: " ;

 c10.printComplex();
 test =  c9==c10;
 cout << "Is c9=c10? Ans: ";
 cout << test << endl;

 test =  c9!=c10;
 cout << "Is c9!=c10? Ans: ";
 cout << test << endl;
    return 0;
}
