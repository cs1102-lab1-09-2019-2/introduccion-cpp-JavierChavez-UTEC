#include <iostream>
using std::cout;

int main() {

    int i = 1;
      do {
        if (i % 2 == 0 ) {
          cout<<i<<"\n";
        }
      i++;
    }while (i < 10);
}
