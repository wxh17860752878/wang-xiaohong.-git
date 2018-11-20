#include <iostream>

using namespace std;

a) float cube( float ); // function prototype

  float cube( float number ) //function definition函数前应该用float
   {
      return number * number * number ;
   }
b) int randomNumber = srand;//变量不等于函数
c) int y = 123.45678;
   int X;

   x=y;//两个的类型不能相等
   cout << static_cast<float >( x ) << endl;
d) double square( double number )
   {
      double number = 0;
      return number * number;
   }
e) int sum(int n)
   {
       if(0==n)
          return 0;
       else
          return n + sum;//不能在定义它本身
   }
