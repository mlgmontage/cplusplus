#include <iostream>

using namespace std;

// reference
void Increment(int *value)
{
   (*value)++;
}

int main()
{
   int var = 8;
   int *var_ptr = &var;

   *var_ptr = 12;

   // reference

   int a = 5;
   int &ref = a;

   cout << var_ptr << " -> " << *var_ptr << endl;
   cout << "---------------------" << endl;
   Increment(&a);
   cout << ref << endl;
   return 0;
}
