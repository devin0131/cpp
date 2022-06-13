#include "devinsaying.h"
#include <iostream>

void mfunc4() { std::cout << "hello myfunc2" << std::endl; }
void mfunc3(int num) {
  num = num + 1;
  mfunc4();
  std::cout << "hello myfunc3" << std::endl;
}

int main(int argc, char *argv[]) {
  int a = 1;
  mfunc3(a);
  devin::sayhello();
  devin::saydevin();
  return 0;
}
