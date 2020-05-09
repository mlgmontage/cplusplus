#include <iostream>

using namespace std;

int fact(int n)
{
   int product = 1;
   for (int i = 1; i <= n; i++)
   {
      product *= i;
   }

   return product;
}

int main()
{
   int finish = 10;
   for (int i = 0; i < finish; i++)
   {
      cout << "factorial of " << i << " -> " << fact(i) << endl;
   }

   return 0;
}
