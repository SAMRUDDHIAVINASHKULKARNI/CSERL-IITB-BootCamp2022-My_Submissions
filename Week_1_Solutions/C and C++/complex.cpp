#include <bits/stdc++.h>  
using namespace std;  
// created a class complex
class Complex {  
public:
  //two variables for real and imaginary part of the complex number 
    int real; 
    int imaginary;  
  
    Complex()  
    {  
        real = 0;  
        imaginary = 0;  
    }  
    Complex(int r, int i)  
    {  
        real = r;   
        imaginary = i; 
    }  
  
    Complex addComplexNumber(Complex C1, Complex C2)  
    {  
  
        Complex res;  
        res.real = C1.real + C2.real;  
        res.imaginary = C1.imaginary + C2.imaginary;  
        return res;  
    }  
};  
  
int main()  
{  
    int r1, r2, i1, i2;
    cout<<"Enter first complex number:";
    cin>>r1>>i1;
    Complex C1(r1, i1);  
     
    cout<<"Enter second complex number:";
    cin>>r2>>i2;
    Complex C2(r2, i2);  
    //output is same as shown in the sample output in the question
    Complex C3;  
    C3 = C3.addComplexNumber(C1, C2);  
    cout << "Result: "  
         << C3.real << " " 
         << C3.imaginary;  
}  
