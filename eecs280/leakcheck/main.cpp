#include <iostream>
using namespace std;

int main() 
{
  new int;  // Memory leak!
  cout << "Hello Leaks!\n";
}
