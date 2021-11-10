#include "Complex.h"
#include <iostream>
using namespace std;
Complex::Complex()
{
    //ctor
}

        Complex::Complex(float r,float i){
        real=r;
        imag=i;
        }
        float Complex::getReal(){
        return real;
        }
        float Complex::getImag(){
        return imag;
        }
        void Complex::setReal( float r){
        real=r;
        }
        void Complex::setImag(float i){
        imag=i;
        }
        void Complex::printComplex(){
        cout << getReal() << " + " << getImag() << " i" << endl;
        }

        Complex Complex::operator + (Complex &c) {
         Complex result;
         result.real = real + c.getReal();
         result.imag = imag + c.getImag();
         return result;
        }
         Complex Complex::operator - (Complex &c){
        Complex result;
        result.real= real - c.getReal();
        result.imag= imag - c.getImag();
        return result;
        }
        Complex Complex::operator * (Complex &c){
        Complex result;
        result.real=(real*c.getReal()-imag*c.getImag());
        result.imag=(imag*c.getReal()+real*c.getImag());
        return result;
        }

        Complex Complex::operator / (Complex &c){
        Complex result;
        result.real=(real*c.getReal()+imag*c.getImag())/(c.getReal()*c.getReal()+c.getImag()*c.getImag());
        result.imag=(imag*c.getReal()-real*c.getImag())/(c.getReal()*c.getReal()+c.getImag()*c.getImag());
        return result;
        }

        Complex Complex::operator % (Complex &c){
        Complex result;
        result.real=  (int) real % (int)c.getReal();
        result.imag=  (int)imag % (int)c.getImag();
        return result;
        }
        Complex Complex::operator ++ (){

        ++real;
        ++imag;
        Complex result (real,imag);
        }
        Complex Complex::operator ++ (int){

        real++;
        imag++;
        Complex result (real,imag);

        }

        bool Complex::operator < (Complex &c){
        bool check = true;
        if (real<c.getReal()){
            check=true;
        }
        else if (real> c.getReal()){
            if (imag<c.getImag()){
                check =true;
            }
        }
        else {
            check = false ;
        }
        return check;
        }

        bool Complex::operator > (Complex &c){
        bool check = true;
        if (real>c.getReal()){
            check=true;
        }
        else if (real< c.getReal()){
            if (imag>c.getImag()){
                check =true;
            }
        }
        else {
            check = false ;
        }
        return check;
        }
        bool Complex::operator == (Complex &c){
        bool check =true;

        if (real!=c.getReal()||imag!=c.getImag()){
            check = false;
        }

        return check;
        }
        bool Complex::operator != (Complex &c){
        bool check =true;
        if (real==c.getReal()&&imag==c.getImag()){
            check = false;
        }
        return check;
        }




Complex::~Complex()
{
    //dtor
}
