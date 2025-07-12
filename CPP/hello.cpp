#include <iostream>
using namespace std;
int main()
{
  enum class MyEnumLong : unsigned long
  {
     EnumValueLong1,
     EnumValueLong2 = 10,
     EnumValueLong3
   };
}
