#include <iostream>

using namespace std;

int main()
{
   int var = 8;
   int *var_ptr = &var;

   *var_ptr = 12;

   cout << var_ptr << " -> " << *var_ptr << endl;
   return 0;
}
