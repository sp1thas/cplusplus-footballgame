#ifndef PAIKTHS_H
#define PAIKTHS_H
#include <string>
#include <iostream>
#include<cstdlib>
using namespace std;


class Paikths
{
    public:
        Paikths(); // constractor

        int AxisX ; // h grammh pou einai o Paikths
        int AxisY ; // h sthlh pou einai o Paikths
        string Name ; // onoma paikth
        int FansCount; // arithmos Fan
        int MovingLine ; // h grammh sthn opoia koineitai o Paikths
        int TargetLine ; //grammh stoxos

        int Metakinhsh (int AxisX , int DimX) ;
        int Metabibash ();
        int EidikhKin () ;


};

#endif
