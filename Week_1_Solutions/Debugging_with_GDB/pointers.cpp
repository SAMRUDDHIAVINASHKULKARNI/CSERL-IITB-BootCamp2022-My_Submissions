#include<iostream>
using namespace std;

int main(int argc, char* argv[]) {

  int a = 45; int b = 22;
  int *p = &a;
  int *q = NULL;

  cout << *p << endl;

  //the line i.e, line number 14 is causing error this is because the program received the signal SIGSEGV, that is segmentation fault
  //we can resolve this replacing the assignment operator (=) with the Equal to operator (==)
  p == q;
  cout << *p << endl;

  p = &b;
  cout << *p << endl;

  return 0;
}
