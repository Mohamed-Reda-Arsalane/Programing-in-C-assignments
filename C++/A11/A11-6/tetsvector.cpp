#include <iostream>
#include <string>
#include"Vector.h"
using namespace std;

int main (int argc,char** argv){
    double* cA= new double[3]{1,2,3};
    double* cB= new double[3]{4,5,8};
  
    Vector A;
    cout<<"\nVector A by Default Constructor  : ";
    A.print();
    A.setComponent(cA);
    cout<<"Vector A After Setting Component : ";
    A.print();
   
 
    cout<<"Vector A : ";
    A.print();
    cout<<endl;


    cout<<"Vector B : ";
    Vector B(A);
    B.print();
    cout<<endl;

    Vector C (3,cB);
    cout<<"Vector C : ";
    C.print();

    cout<<"Norm of Vector A : ";
    cout<<A.norm()<<endl;
    cout<<endl;

    //Scalar Product
    cout<<"Scalar Product of Vector A & Vector C : ";
    cout<<A.SP(C)<<endl;
    cout<<endl;


    cout<<"Sum of Vector A and Vector C : ";
    A.add(C).print();
    cout<<endl;

    cout<<"Difference of Vector A and Vector C : ";
    A.sub(C).print();
    cout<<endl;
        
    return 0;
}