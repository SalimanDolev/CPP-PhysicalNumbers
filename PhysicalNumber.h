/**
 * This header represents the Physical Number fuction and 
 * variables, boolean function (==,!=,=<,=>) or regular
 * operators (++,+,--,-,+=,-=).
 * */
#pragma once
#include "Unit.h"
#include <iostream>
using namespace std;
namespace ariel
{
    class PhysicalNumber
    {
    public:
        double value;
        Unit unit;
        PhysicalNumber(double num, Unit type):value(num),unit(type)
        {
           value=num;
            unit=type;
        }
        bool AreSameDim(Unit type1 , Unit type2);
        //boolean
        bool operator==(const PhysicalNumber& rhs);
        bool operator!=(const PhysicalNumber& rhs);
        bool operator<(const PhysicalNumber& rhs);
        bool operator>(const PhysicalNumber& rhs);
        bool operator<=(const PhysicalNumber& rhs);
        bool operator>=(const PhysicalNumber& rhs);
        //+=,-=,+,-
        PhysicalNumber &operator+=(const PhysicalNumber& rhs);
        PhysicalNumber &operator-=(const PhysicalNumber& rhs);
        PhysicalNumber operator+(const PhysicalNumber& rhs);
        PhysicalNumber operator-(const PhysicalNumber& rhs);
        //onary 
        PhysicalNumber& operator-();
        PhysicalNumber& operator+();
        //++,--
        PhysicalNumber& operator++();
        PhysicalNumber& operator--();
        PhysicalNumber operator++(int);
        PhysicalNumber operator--(int);
        //stream
        friend std::istream& operator>>(std::istream& in, PhysicalNumber& a);
        friend ostream& operator<<(ostream& out, const PhysicalNumber& a);
       
    };
}