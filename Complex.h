#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    private:
    float real;
    float imag;

    public:
        Complex();
        Complex(float r,float i);
        float getReal();
        float getImag();
        void setReal( float r);
        void setImag(float i);
        void printComplex();
        Complex operator + (Complex &c);
        Complex operator - (Complex &c);
        Complex operator * (Complex &c);
        Complex operator / (Complex &c);
        Complex operator % (Complex &c);
        Complex operator ++ ();
        Complex operator ++ (int);
        bool operator < (Complex &c);
        bool operator > (Complex &c);
        bool operator == (Complex &c);
        bool operator != (Complex &c);

        virtual ~Complex();


};

#endif // COMPLEX_H
