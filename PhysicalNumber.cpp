/**
 * This cpp file extends the header file and presents the function
 * */
#include <iostream>
#include <cstring>
#include <math.h>
#include "PhysicalNumber.h"
using namespace ariel;
using namespace std;
// cheks if the Units are the same and if the value are the same.
bool PhysicalNumber::operator==(const PhysicalNumber& rhs)
{
     if ( unit==rhs.unit){
            if(value == rhs.value)
            return true;
            else return false;
    }
    int b=(int)unit;
    string unitName="";
    switch (b)
      { 
        //M
         case 0: 
         if ((int)rhs.unit ==1 ){
         if(value == (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==2 ){
         if(value == (rhs.value /100))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //KM
         case 1:
         if ((int)rhs.unit ==0 ){ 
         if(value == (rhs.value /1000))
         return true;
         else return false;;
         break;
         }
         if ((int)rhs.unit ==2 ){
         if(value == (rhs.value /100000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //CM
         case 2: 
         if ((int)rhs.unit ==0 ){ 
         if (value == (rhs.value *100))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==1 ){
         if(value == (rhs.value *100000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Sec
         case 3:
         if ((int)rhs.unit == 4 ){ 
         if(value == (rhs.value *60))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit == 5 ){
         if(value == (rhs.value *3600))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Min
         case 4:
         if ((int)rhs.unit ==3 ){ 
         if(value == (rhs.value /60))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==5 ){
         if(value == (rhs.value *60))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Hour
         case 5:
         if ((int)rhs.unit ==3 ){ 
         if(value == (rhs.value /3600))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==4 ){
         if(value == (rhs.value /60))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Gram
         case 6: 
         if ((int)rhs.unit ==7 ){ 
         if(value == (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==8 ){
         if(value == (rhs.value *1000000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Kg
         case 7: 
         if ((int)rhs.unit ==6 ){ 
         if(value == (rhs.value /1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==8 ){
         if(value == (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Ton
         case 8: 
         if ((int)rhs.unit ==6 ){ 
         if(value == (rhs.value /1000000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==7 ){
         if(value == (rhs.value /1000))
         return true;
         else return false;
         break;
         }
         default:
         throw "no sulotion";break;
       }
 
}
// checks if the Units are the same and if the value are not the same.
bool PhysicalNumber::operator!=(const PhysicalNumber& rhs)
{

    if ( unit==rhs.unit){
            if(value != rhs.value)
            return true;
    }
    int b=(int)unit;
    string unitName="";
    switch (b)
      { 
        //M
         case 0: 
         if ((int)rhs.unit ==1 ){
         if(value != (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==2 ){
         if(value != (rhs.value /100))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //KM
         case 1:
         if ((int)rhs.unit ==0 ){ 
         if(value != (rhs.value /1000))
         return true;
         else return false;;
         break;
         }
         if ((int)rhs.unit ==2 ){
         if(value != (rhs.value /100000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //CM
         case 2: 
         if ((int)rhs.unit ==0 ){ 
         if (value != (rhs.value *100))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==1 ){
         if(value != (rhs.value *100000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Sec
         case 3:
         if ((int)rhs.unit == 4 ){ 
         if(value != (rhs.value *60))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit == 5 ){
         if(value != (rhs.value *3600))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Min
         case 4:
         if ((int)rhs.unit ==3 ){ 
         if(value != (rhs.value /60))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==5 ){
         if(value != (rhs.value *60))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Hour
         case 5:
         if ((int)rhs.unit ==3 ){ 
         if(value != (rhs.value /3600))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==4 ){
         if(value != (rhs.value /60))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Gram
         case 6: 
         if ((int)rhs.unit ==7 ){ 
         if(value != (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==8 ){
         if(value != (rhs.value *1000000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Kg
         case 7: 
         if ((int)rhs.unit ==6 ){ 
         if(value != (rhs.value /1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==8 ){
         if(value != (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Ton
         case 8: 
         if ((int)rhs.unit ==6 ){ 
         if(value != (rhs.value /1000000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==7 ){
         if(value != (rhs.value /1000))
         return true;
         else return false;
         break;
         }
         default:
         throw "no sulotion";break;
       }
}
// checks if the Units are the same and if the value are smaller than the other.
bool PhysicalNumber::operator<(const PhysicalNumber& rhs)
{
     if ( unit==rhs.unit){
            if(value < rhs.value)
            return true;
            else return false;
    }
    int b=(int)unit;
    string unitName="";
    switch (b)
      { 
        //M
         case 0: 
         if ((int)rhs.unit ==1 ){
         if(value < (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==2 ){
         if(value < (rhs.value /100))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //KM
         case 1:
         if ((int)rhs.unit ==0 ){ 
         if(value < (rhs.value /1000))
         return true;
         else return false;;
         break;
         }
         if ((int)rhs.unit ==2 ){
         if(value < (rhs.value /100000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //CM
         case 2: 
         if ((int)rhs.unit ==0 ){ 
         if (value < (rhs.value *100))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==1 ){
         if(value < (rhs.value *100000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Sec
         case 3:
         if ((int)rhs.unit == 4 ){ 
         if(value < (rhs.value *60))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit == 5 ){
         if(value < (rhs.value *3600))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Min
         case 4:
         if ((int)rhs.unit ==3 ){ 
         if(value < (rhs.value /60))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==5 ){
         if(value < (rhs.value *60))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Hour
         case 5:
         if ((int)rhs.unit ==3 ){ 
         if(value < (rhs.value /3600))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==4 ){
         if(value < (rhs.value /60))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Gram
         case 6: 
         if ((int)rhs.unit ==7 ){ 
         if(value < (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==8 ){
         if(value < (rhs.value *1000000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Kg
         case 7: 
         if ((int)rhs.unit ==6 ){ 
         if(value < (rhs.value /1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==8 ){
         if(value < (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Ton
         case 8: 
         if ((int)rhs.unit ==6 ){ 
         if(value < (rhs.value /1000000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==7 ){
         if(value < (rhs.value /1000))
         return true;
         else return false;
         break;
         }
         default:
         throw "no sulotion";break;
       }

}
// checks if the Units are the same and if the value are bigger than the other.
bool PhysicalNumber::operator>(const PhysicalNumber& rhs)
{
    if ( unit==rhs.unit){
            if(value > rhs.value)
            return true;
            else return false;
    }
    int b=(int)unit;
    string unitName="";
    switch (b)
      { 
        //M
         case 0: 
         if ((int)rhs.unit ==1 ){
         if(value > (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==2 ){
         if(value > (rhs.value /100))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //KM
         case 1:
         if ((int)rhs.unit ==0 ){ 
         if(value > (rhs.value /1000))
         return true;
         else return false;;
         break;
         }
         if ((int)rhs.unit ==2 ){
         if(value > (rhs.value /100000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //CM
         case 2: 
         if ((int)rhs.unit ==0 ){ 
         if (value > (rhs.value *100))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==1 ){
         if(value > (rhs.value *100000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Sec
         case 3:
         if ((int)rhs.unit == 4 ){ 
         if(value > (rhs.value *60))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit == 5 ){
         if(value > (rhs.value *3600))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Min
         case 4:
         if ((int)rhs.unit ==3 ){ 
         if(value > (rhs.value /60))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==5 ){
         if(value > (rhs.value *60))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Hour
         case 5:
         if ((int)rhs.unit ==3 ){ 
         if(value > (rhs.value /3600))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==4 ){
         if(value > (rhs.value /60))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Gram
         case 6: 
         if ((int)rhs.unit ==7 ){ 
         if(value > (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==8 ){
         if(value > (rhs.value *1000000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Kg
         case 7: 
         if ((int)rhs.unit ==6 ){ 
         if(value > (rhs.value /1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==8 ){
         if(value > (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Ton
         case 8: 
         if ((int)rhs.unit ==6 ){ 
         if(value > (rhs.value /1000000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==7 ){
         if(value > (rhs.value /1000))
         return true;
         else return false;
         break;
         }
         default:
         throw "no sulotion";break;
       }
}
bool PhysicalNumber::operator<=(const PhysicalNumber& rhs)
{
   if ( unit==rhs.unit){
            if(value <= rhs.value)
            return true;
            else return false;
    }
    int b=(int)unit;
    string unitName="";
    switch (b)
      { 
        //M
         case 0: 
         if ((int)rhs.unit ==1 ){
         if(value <= (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==2 ){
         if(value <= (rhs.value /100))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //KM
         case 1:
         if ((int)rhs.unit ==0 ){ 
         if(value <= (rhs.value /1000))
         return true;
         else return false;;
         break;
         }
         if ((int)rhs.unit ==2 ){
         if(value <= (rhs.value /100000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //CM
         case 2: 
         if ((int)rhs.unit ==0 ){ 
         if (value <= (rhs.value *100))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==1 ){
         if(value <= (rhs.value *100000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Sec
         case 3:
         if ((int)rhs.unit == 4 ){ 
         if(value <= (rhs.value *60))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit == 5 ){
         if(value <= (rhs.value *3600))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Min
         case 4:
         if ((int)rhs.unit ==3 ){ 
         if(value <= (rhs.value /60))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==5 ){
         if(value <= (rhs.value *60))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Hour
         case 5:
         if ((int)rhs.unit ==3 ){ 
         if(value <= (rhs.value /3600))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==4 ){
         if(value <= (rhs.value /60))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Gram
         case 6: 
         if ((int)rhs.unit ==7 ){ 
         if(value <= (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==8 ){
         if(value <= (rhs.value *1000000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Kg
         case 7: 
         if ((int)rhs.unit ==6 ){ 
         if(value <= (rhs.value /1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==8 ){
         if(value <= (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Ton
         case 8: 
         if ((int)rhs.unit ==6 ){ 
         if(value <= (rhs.value /1000000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==7 ){
         if(value <= (rhs.value /1000))
         return true;
         else return false;
         break;
         }
         default:
         throw "no sulotion";break;
       }
}
bool PhysicalNumber::operator>=(const PhysicalNumber& rhs)
{
    if ( unit==rhs.unit){
            if(value >= rhs.value)
            return true;
            else return false;
    }
    int b=(int)unit;
    string unitName="";
    switch (b)
      { 
        //M
         case 0: 
         if ((int)rhs.unit ==1 ){
         if(value >= (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==2 ){
         if(value >= (rhs.value /100))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //KM
         case 1:
         if ((int)rhs.unit ==0 ){ 
         if(value >= (rhs.value /1000))
         return true;
         else return false;;
         break;
         }
         if ((int)rhs.unit ==2 ){
         if(value >= (rhs.value /100000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //CM
         case 2: 
         if ((int)rhs.unit ==0 ){ 
         if (value >= (rhs.value *100))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==1 ){
         if(value >= (rhs.value *100000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Sec
         case 3:
         if ((int)rhs.unit == 4 ){ 
         if(value >= (rhs.value *60))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit == 5 ){
         if(value >= (rhs.value *3600))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Min
         case 4:
         if ((int)rhs.unit ==3 ){ 
         if(value >= (rhs.value /60))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==5 ){
         if(value >= (rhs.value *60))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Hour
         case 5:
         if ((int)rhs.unit ==3 ){ 
         if(value >= (rhs.value /3600))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==4 ){
         if(value >= (rhs.value /60))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Gram
         case 6: 
         if ((int)rhs.unit ==7 ){ 
         if(value >= (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==8 ){
         if(value >= (rhs.value *1000000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Kg
         case 7: 
         if ((int)rhs.unit ==6 ){ 
         if(value >= (rhs.value /1000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==8 ){
         if(value >= (rhs.value *1000))
         return true;
         else return false;
         break;
         }
         throw "no sulotion";break;
         //Ton
         case 8: 
         if ((int)rhs.unit ==6 ){ 
         if(value >= (rhs.value /1000000))
         return true;
         else return false;
         break;
         }
         if ((int)rhs.unit ==7 ){
         if(value >= (rhs.value /1000))
         return true;
         else return false;
         break;
         }
         default:
         throw "no sulotion";break;
       }
}
// checks if the Units are the same and add the second to the first.
PhysicalNumber& PhysicalNumber::operator+=(const PhysicalNumber& rhs)
{
     if ( unit == rhs.unit){
            value = value + rhs.value;
            return *this;            
    }
    int b=(int)unit;
    string unitName="";
    switch (b)
      { 
        // M
         case 0: 
         if ((int)rhs.unit ==1 ){ 
         value = value + ((double)rhs.value *1000);
         break;
         }
         if ((int)rhs.unit ==2 ){
         value = value + (rhs.value /100);
         break;
         }
         throw "no sulotion"; break;
        //KM
         case 1:
         if ((int)rhs.unit ==0 ){
         cout << value ;  
         value = value + (rhs.value /1000);
         break;
         }
         if ((int)rhs.unit ==2 ){
         value = value + (rhs.value /100000);
         break;
         }
         throw "no sulotion"; break;
         //CM
         case 2:
         if ((int)rhs.unit ==0 ){ 
         value = value + (rhs.value *100); 
         break;
         }
         if ((int)rhs.unit ==1 ){ 
         value = value + (rhs.value *100000);
         break;
         }
         throw "no sulotion"; break;
         //Sec
         case 3:
         if ((int)rhs.unit ==4 ){ 
         value = value + (rhs.value *60); 
         break;
         }
         if ((int)rhs.unit ==5 ){ 
         value = value + (rhs.value *3600);
         break;
         }
         throw "no sulotion"; break;
         //Min 
         case 4: 
         if ((int)rhs.unit ==3 ){ 
         value = value + (rhs.value / 60); 
         break;
         }
         if ((int)rhs.unit ==5 ){ 
         value = value + (rhs.value *60);
         break;
         }
         throw "no sulotion"; break;
         //hour
         case 5: 
         if ((int)rhs.unit ==3 ){ 
         value = value + (rhs.value /3600); 
         break;
         }
         if ((int)rhs.unit ==4 ){ 
         value = value + (rhs.value /60);
         break;
         }
         throw "no sulotion"; break;
         //Gram
         case 6: 
         if ((int)rhs.unit ==7 ){ 
         value = value + (rhs.value *1000); 
         break;
         }
         if ((int)rhs.unit ==8 ){ 
         value = value + (rhs.value *1000000);
         break;
         }
         throw "no sulotion"; break;
         //Kg
         case 7: 
         if ((int)rhs.unit ==6 ){ 
         value = value + (rhs.value /1000); 
         break;
         }
         if ((int)rhs.unit ==8 ){ 
         value = value + (rhs.value *1000);
         break;
         }
         throw "no sulotion"; break;
         //Ton
         case 8: 
         if ((int)rhs.unit ==6 ){ 
         value = value + (rhs.value / 1000000); 
         break;
         }
         if ((int)rhs.unit ==7 ){ 
         value = value + (rhs.value / 1000);
         break;
         }
         throw "no sulotion"; break;
       }
     return *this;
}
// checks if the Units are the same and minus the second to the first.
PhysicalNumber& PhysicalNumber::operator-=(const PhysicalNumber& rhs)
{
     if ( unit == rhs.unit){
            value = value - rhs.value;
            return *this;
    }
    int b=(int)unit;
    string unitName="";
    switch (b)
      { 
        // M
         case 0: 
         if ((int)rhs.unit ==1 ){ 
         value = value - ((double)rhs.value *1000);
         break;
         }
         if ((int)rhs.unit ==2 ){
         value = value - (rhs.value /100);
         break;
         }
         throw "no sulotion"; break;
        //KM
         case 1:
         if ((int)rhs.unit ==0 ){  
         value = value - (rhs.value /1000);
         break;
         }
         if ((int)rhs.unit ==2 ){
         value = value - (rhs.value /100000);
         break;
         }
         throw "no sulotion"; break;
         //CM
         case 2:
         if ((int)rhs.unit ==0 ){ 
         value = value - (rhs.value *100); 
         break;
         }
         if ((int)rhs.unit ==1 ){ 
         value = value - (rhs.value *100000);
         break;
         }
         throw "no sulotion"; break;
         //Sec
         case 3:
         if ((int)rhs.unit ==4 ){ 
         value = value - (rhs.value *60); 
         break;
         }
         if ((int)rhs.unit ==5 ){ 
         value = value - (rhs.value *3600);
         break;
         }
         throw "no sulotion"; break;
         //Min 
         case 4: 
         if ((int)rhs.unit ==3 ){ 
         value = value - (rhs.value / 60); 
         break;
         }
         if ((int)rhs.unit ==5 ){ 
         value = value - (rhs.value *60);
         break;
         }
         throw "no sulotion"; break;
         //hour
         case 5: 
         if ((int)rhs.unit ==3 ){ 
         value = value - (rhs.value /3600); 
         break;
         }
         if ((int)rhs.unit ==4 ){ 
         value = value - (rhs.value /60);
         break;
         }
         throw "no sulotion"; break;
         //Gram
         case 6: 
         if ((int)rhs.unit ==7 ){ 
         value = value - (rhs.value *1000); 
         break;
         }
         if ((int)rhs.unit ==8 ){ 
         value = value - (rhs.value *1000000);
         break;
         }
         throw "no sulotion"; break;
         //Kg
         case 7: 
         if ((int)rhs.unit ==6 ){ 
         value = value - (rhs.value /1000); 
         break;
         }
         if ((int)rhs.unit ==8 ){ 
         value = value - (rhs.value *1000);
         break;
         }
         throw "no sulotion"; break;
         //Ton
         case 8: 
         if ((int)rhs.unit ==6 ){ 
         value = value - (rhs.value / 1000000); 
         break;
         }
         if ((int)rhs.unit ==7 ){ 
         value = value - (rhs.value / 1000);
         break;
         }
         throw "no sulotion"; break;
       }
     return *this;
}
// checks if the Units are the same and add them both.
PhysicalNumber PhysicalNumber::operator+(const PhysicalNumber& rhs)
{
    PhysicalNumber l(value,unit);
    if ( unit==rhs.unit){
            l.value = value + rhs.value;
            return l;
    }
    int b=(int)unit;
    string unitName="";
    switch (b)
      { 
        //M
         case 0: 
         if ((int)rhs.unit ==1 ){
         l.value = value + (rhs.value *1000);
         return l;
         break;
         }
         if ((int)rhs.unit ==2 ){
         l.value = value + (rhs.value /100);
         return l;
         break;
         }
         throw "no sulotion";break;
         //KM
         case 1:
         if ((int)rhs.unit ==0 ){ 
         l.value = value + (rhs.value /1000);
         return l;
         break;
         }
         if ((int)rhs.unit ==2 ){
         l.value = value + (rhs.value /100000);
         return l;
         break;
         }
         throw "no sulotion";break;
         //CM
         case 2: 
         if ((int)rhs.unit ==0 ){ 
         l.value = value + (rhs.value *100);
         return l;
         break;
         }
         if ((int)rhs.unit ==1 ){
         l.value = value + (rhs.value *100000);
         return l;
         break;
         }
         throw "no sulotion";break;
         //Sec
         case 3:
         if ((int)rhs.unit == 4 ){ 
         l.value = value + (rhs.value *60);
         return l;
         break;
         }
         if ((int)rhs.unit == 5 ){
         l.value = value + (rhs.value *3600);
         return l;
         break;
         }
         throw "no sulotion";break;
         //Min
         case 4:
         if ((int)rhs.unit ==3 ){ 
         l.value = value + (rhs.value /60);
         return l;
         break;
         }
         if ((int)rhs.unit ==5 ){
         l.value = value + (rhs.value *60);
         return l;
         break;
         }
         throw "no sulotion";break;
         //Hour
         case 5:
         if ((int)rhs.unit ==3 ){ 
         l.value = value + (rhs.value /3600);
         return l;
         break;
         }
         if ((int)rhs.unit ==4 ){
         l.value = value + (rhs.value /60);
         return l;
         break;
         }
         throw "no sulotion";break;
         //Gram
         case 6: 
         if ((int)rhs.unit ==7 ){ 
         l.value = value + (rhs.value *1000);
         return l;
         break;
         }
         if ((int)rhs.unit ==8 ){
         l.value = value + (rhs.value *1000000);
         return l;
         break;
         }
         throw "no sulotion";break;
         //Kg
         case 7: 
         if ((int)rhs.unit ==6 ){ 
         l.value = value + (rhs.value /1000);
         return l;
         break;
         }
         if ((int)rhs.unit ==8 ){
         l.value = value + (rhs.value *1000);
         return l;
         break;
         }
         throw "no sulotion";break;
         //Ton
         case 8: 
         if ((int)rhs.unit ==6 ){ 
         l.value = value + (rhs.value /1000000);
         return l;
         break;
         }
         if ((int)rhs.unit ==7 ){
         l.value = value + (rhs.value /1000);
         return l;
         break;
         }
         default:
         throw "no sulotion";break;
       }
    }
    
// checks if the Units are the same and minus the both.
PhysicalNumber PhysicalNumber::operator-(const PhysicalNumber& rhs)
{
    PhysicalNumber l(value,unit);
    if ( unit==rhs.unit){
            l.value = value - rhs.value;
            return l;
    }
    int b=(int)unit;
    string unitName="";
    switch (b)
      { 
        //M
         case 0: 
         if ((int)rhs.unit ==1 ){
         l.value = value - (rhs.value *1000);
         return l;
         break;
         }
         if ((int)rhs.unit ==2 ){
         l.value = value - (rhs.value /100);
         return l;
         break;
         }
         throw "no sulotion";break;
         //KM
         case 1:
         if ((int)rhs.unit ==0 ){ 
         l.value = value - (rhs.value /1000);
         return l;
         break;
         }
         if ((int)rhs.unit ==2 ){
         l.value = value - (rhs.value /100000);
         return l;
         break;
         }
         throw "no sulotion";break;
         //CM
         case 2: 
         if ((int)rhs.unit ==0 ){ 
         l.value = value - (rhs.value *100);
         return l;
         break;
         }
         if ((int)rhs.unit ==1 ){
         l.value = value - (rhs.value /100000);
         return l;
         break;
         }
         throw "no sulotion";break;
         //Sec
         case 3:
         if ((int)rhs.unit == 4 ){ 
         l.value = value - (rhs.value *60);
         return l;
         break;
         }
         if ((int)rhs.unit == 5 ){
         l.value = value - (rhs.value *3600);
         return l;
         break;
         }
         throw "no sulotion";break;
         //Min
         case 4:
         if ((int)rhs.unit ==3 ){ 
         l.value = value - (rhs.value /60);
         return l;
         break;
         }
         if ((int)rhs.unit ==5 ){
         l.value = value - (rhs.value *60);
         return l;
         break;
         }
         throw "no sulotion";break;
         //Hour
         case 5:
         if ((int)rhs.unit ==3 ){ 
         l.value = value - (rhs.value /3600);
         return l;
         break;
         }
         if ((int)rhs.unit ==4 ){
         l.value = value - (rhs.value /60);
         return l;
         break;
         }
         throw "no sulotion";break;
         //Gram
         case 6: 
         if ((int)rhs.unit ==7 ){ 
         l.value = value - (rhs.value *1000);
         return l;
         break;
         }
         if ((int)rhs.unit ==8 ){
         l.value = value - (rhs.value *1000000);
         return l;
         break;
         }
         throw "no sulotion";break;
         //Kg
         case 7: 
         if ((int)rhs.unit ==6 ){ 
         l.value = value - (rhs.value /1000);
         return l;
         break;
         }
         if ((int)rhs.unit ==8 ){
         l.value = value - (rhs.value *1000);
         return l;
         break;
         }
         throw "no sulotion";break;
         //Ton
         case 8: 
         if ((int)rhs.unit ==6 ){ 
         l.value = value - (rhs.value /1000000);
         return l;
         break;
         }
         if ((int)rhs.unit ==7 ){
         l.value = value - (rhs.value /1000);
         return l;
         break;
         }
         default:
         throw "no sulotion";break;
       }
       //return l;
}
// Makes the number negatvie.
PhysicalNumber& PhysicalNumber::operator-()
{
    value = -value;
    return *this;
}
// ,makes the number positive.
PhysicalNumber& PhysicalNumber::operator+()
{
    if (value<0)
    value = -value;
    return *this;
}
// Add 1 to the value of the Object.
PhysicalNumber& PhysicalNumber::operator++()
{
    cout << value;
    value = value +1;
    cout << value;
    return *this;
}
PhysicalNumber PhysicalNumber::operator++(int){
    PhysicalNumber tmp(value,unit);
    value = value +1;
    return tmp;
}
// Minus 1 to the value of the Object.
PhysicalNumber& PhysicalNumber::operator--()
{
    value = value -1;
    return *this;
}
PhysicalNumber PhysicalNumber::operator--(int){
    PhysicalNumber tmp(value,unit);
    value = value -1;
    return tmp;
}

std::istream& ariel::operator>>(std::istream& in, PhysicalNumber& a)
{
 std::string content{ std::istreambuf_iterator<char>(in),
                     std::istreambuf_iterator<char>() };
    std::string delimiter = "[";
    std::string token = content.substr(0, content.find(delimiter));
    std::string token2 = content.substr(content.find(delimiter), content.size()-1);
    std::string Name_choice [] = {"[m]","[km]","[cm]","[sec]","[min]","[hour]","[g]","[kg]","[ton]"};
    int num;
    if (token2.compare(Name_choice[0])==0)
    num=0;
    if (token2.compare(Name_choice[1])==0)
    num=1;
    if (token2.compare(Name_choice[2])==0)
    num=2;
    if (token2.compare(Name_choice[3])==0)
    num=3;
    if (token2.compare(Name_choice[4])==0)
    num=4;
    if (token2.compare(Name_choice[5])==0)
    num=5;
    if (token2.compare(Name_choice[6])==0)
    num=6;
    if (token2.compare(Name_choice[7])==0)
    num=7;
    if (token2.compare(Name_choice[8])==0)
    num=8;
    cout << " here is the problem";
     switch (num)
      { 
         case 0: a.unit = Unit::M; a.value = std::stod(token); break;
         case 1: a.unit = Unit::KM; a.value = std::stod(token);break;
         case 2: a.unit = Unit::CM; a.value = std::stod(token);break;
         case 3: a.unit = Unit::SEC; a.value = std::stod(token);break;
         case 4: a.unit = Unit::MIN; a.value = std::stod(token);break;
         case 5: a.unit = Unit::HOUR; a.value = std::stod(token);break;
         case 6: a.unit = Unit::G; a.value = std::stod(token);break;
         case 7: a.unit = Unit::KG; a.value = std::stod(token);break;
         case 8: a.unit = Unit::TON; a.value = std::stod(token);break;
         //default : throw "input wrong"; break;
       }
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