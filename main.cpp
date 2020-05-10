#include <iostream>

using namespace std;

int multi(int a, int b)
{
   return a * b;
}

int main()
{
   int i = 0;
   bool condition = true;
   for (; condition;)
   {
      cout << i << endl;
      i++;
      if (!(i < 5))
      {
         condition = false;
      }
   }
   return 0;
}
