#include <iostream>
#include <string>

using namespace std;

int main() {
   string s = "Csbwp-!wpvt!bwf{!sfvttj!\"";
   for(char c : s) {
      cout << char(c-1);
   }
   cout << endl;
}
