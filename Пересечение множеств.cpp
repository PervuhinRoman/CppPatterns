#include <iostream>
#include <set>

using namespace std;

int main() {
 set <int> s1;
 set <int> s2;

 set <int> s3;


  long long N, M;

  cin >> N;
  cin >> M;

  for(int i = 0; i < N; i++) {
    int n;
    cin >> n;
    s1.insert(n);
  }

  for(int i = 0; i < M; i++) {
    int n;
    cin >> n;
    s2.insert(n);
  }

  for(auto now : s1) {
    if(s2.find(now) != s2.end()) {
      s3.insert(now);
    }
  }
  
  for(auto now : s3) {
    cout << now << " ";
  }
}
