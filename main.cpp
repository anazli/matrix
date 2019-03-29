#include<iostream>
#include<cmath>
#include "matrix.h"

using namespace std;

int main()
{

    Matrix<int> m1(4,4);
    m1.print();
    m1(1,1)=6;m1(2,3)=8;

    Matrix<int> m2(4,4);
    m2(1,1)=7;m2(3,3)=1;

    Matrix<int> m3(3,3);
    m3(0,0)=0;m3(0,1)=1;m3(0,2)=2; 
    m3(1,0)=3;m3(1,1)=4;m3(1,2)=5;
    m3.print();

    Matrix<int> m4;
    m4 = m3.trans();
    m4.shape();
    m4.print();

    Matrix<double> m5;
    m5 = real_rand(4,4);
    m5.print();
    sum(m5,1).print();

    Matrix<double> m6(1,5);
    m6(0,0)=5;
    m6(0,1)=2;
    m6(0,2)=8;
    m6(0,3)=1;
    m6(0,4)=6;
    size_t id = arg_max(m6);
    m6.print();
    cout << id << endl;



    return 0;
}
