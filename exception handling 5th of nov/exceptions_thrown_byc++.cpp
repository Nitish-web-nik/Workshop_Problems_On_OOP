#include <iostream>
#include <exception>
#include <string>
using namespace std;
int deeply_nested()
{
  string("xyzzy").at(100);
  return 0;
}

int main()
{
  try
  {
    deeply_nested();
  }

  catch (exception& e)
  {
      cout<<"caught "<<e.what() <<endl;
  }
  catch (...)
  {
    cout << "in catch ..." << endl;
  }
  cout << "in main(), after try/catch" << endl;
  return 0;
}
/*If the program had contained a catch clause for logic_error or out_of_range before the catch (exception& e) clause, that catch clause would have been executed instead. But if the catch (exception& e) clause had come first, it would have been executed. Remember, catch clauses are examined in order. The first catch clause that matches
the exception is executed, not the one that is the best match.*/
