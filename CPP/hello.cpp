#include <iostream>
using namespace std;
int main()
{
   enum class MyEnum {
     EnumValue1,
     EnumValue2 = 10,
     EnumValue3
   };
   if (MyEnum::EnumValue3 == 11) {...}
}
