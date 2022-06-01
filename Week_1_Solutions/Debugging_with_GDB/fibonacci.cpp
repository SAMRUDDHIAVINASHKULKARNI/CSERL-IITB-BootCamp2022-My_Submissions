#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {

  int number = 10;

  int s_l = 1;
  int l = 1;

  cout << s_l << endl << l << endl;

  for(int i=1; i<=10; i++) {
    int next = s_l + l;
    cout << next << endl;
    l = next;
    s_l = l;
  }

  return 0;
}
