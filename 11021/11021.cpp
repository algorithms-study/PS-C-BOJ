#include <iostream>
#include <string>

using namespace std;

int T;
int A, B;
char miss;

int main() {
  cin >> T;
  for (int i = 0; i < T; i++) {
    cin >> A >> B;
    cout << "Case #" << i + 1 << ": " << A + B << endl;
  }
}
