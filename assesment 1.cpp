#include <iostream>
#include <string>
using namespace std;

 class car
 {
   public:
   //properties(data members)
   string brand;
   string model;
   int year;
   
 };
    int main()
 {
   //create an object of car
    Car carObj1;
    carObj1.brand="PORSCHE";
    carObj1.model="911 GT3";
    carObj1.year="1999";
    
    //create an object of car
    
    Car carObj2;
    carObj2.brand="FORD";
    carObj2.model="MUSTANG";
    carObj2.year="1969"; 
    
    //PRINT ATTRIBUTE VALUE
    
   cout<<carObj1.brand<<""carObj1.model<<""carObj1.year<<"\n";
   cout<<carObj2.brand<<""carObj2.model<<""carObj2.year<<"\n";
   
   return 0;
 }