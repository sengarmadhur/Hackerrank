
#include <cstdio>
#include <iostream>
using namespace std;

int main() {

    int n, q;
  cout<<"n and q";
  cin >> n >> q;
  int **seq = new int *[n];
  for (int i = 0; i < n; i++) {
    int a;
    cout<<"a";
    cin >> a;
    int *b = new int[a];
    for (int j = 0; j < a; j++) {
      int e;
     cout<<"e";
      cin >> e;
      b[j] = e;
    }
    *(seq + i) = b;
  }

  for (int i = 0; i < q; i++) {
    int r, s;
    cout<<"r and s";
    cin >> r >> s;
    cout << seq[r][s] << endl;
  }
}

