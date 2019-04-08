/**
 * This cpp file extends the header file and presents the function
 * */
#include <iostream>

#include "PhysicalNumber.h"
using namespace ariel;
using namespace std;
// cheks if the Units are the same and if the value are the same.
bool PhysicalNumber::operator==(const PhysicalNumber& rhs)
{
    return false;
}
// checks if the Units are the same and if the value are not the same.
bool PhysicalNumber::operator!=(const PhysicalNumber& rhs)
{
    return false;
}
// checks if the Units are the same and if the value are smaller than the other.
bool PhysicalNumber::operator<(const PhysicalNumber& rhs)
{
    return false;
}
// checks if the Units are the same and if the value are bigger than the other.
bool PhysicalNumber::operator>(const PhysicalNumber& rhs)
{
    return false;
}
bool PhysicalNumber::operator<=(const PhysicalNumber& rhs)
{
    return false;
}
bool PhysicalNumber::operator>=(const PhysicalNumber& rhs)
{
    return false;
}
// checks if the Units are the same and add the second to the first.
PhysicalNumber& PhysicalNumber::operator+=(const PhysicalNumber& rhs)
{
    return *this;
}
// checks if the Units are the same and minus the second to the first.
PhysicalNumber& PhysicalNumber::operator-=(PhysicalNumber& rhs)
{
    return *this;
}
// checks if the Units are the same and add them both.
PhysicalNumber& PhysicalNumber::operator+(const PhysicalNumber& rhs)
{
    return *this;
}
// checks if the Units are the same and minus the both.
PhysicalNumber& PhysicalNumber::operator-(const PhysicalNumber& rhs)
{
    return *this;
}
// Minus number from the Object we have.
PhysicalNumber& PhysicalNumber::operator-()
{
    return *this;
}
// Add number from the Object we have.
PhysicalNumber& PhysicalNumber::operator+()
{
    return *this;
}
// Add 1 to the value of the Object.
PhysicalNumber& PhysicalNumber::operator++()
{
    return *this;
}
// Minus 1 to the value of the Object.
PhysicalNumber& PhysicalNumber::operator--()
{
    return *this;
}

std::istream& ariel::operator>>(std::istream& in, const PhysicalNumber& a)
{
       return in;
}
 ostream& ariel::operator<<(ostream& out, const ariel::PhysicalNumber& a)
{
    int b=(int)a.unit;
    string unitName="";
    switch (b)
      { 
         case 0: unitName="m"; break;
         case 1: unitName="km";break;
         case 2: unitName="cm";break;
         case 3: unitName="sec";break;
         case 4: unitName="min";break;
         case 5: unitName="hour";break;
         case 6: unitName="g";break;
         case 7: unitName="kg";break;
         case 8: unitName="ton";break;
       }

        
     out<<a.value<<"["<<unitName<<"]";
     return out;
   }
