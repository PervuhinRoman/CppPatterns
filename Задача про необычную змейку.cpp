#include <iostream>

using namespace std;

int main()
{
  int y = 12;
  int x = 10;
  int a[y][x];
  
  bool b = 0;
  
  int item1 = 1;
  int cntx = 0;
  int x1 = 0, y1 = 11, y2 = 11;
  
  while(x1 < 10){
      if(b == 0){
        y1 = 11;
        while(y1 >= 0) {
            a[y1][x1] = item1;
            item1++;
            y1--;
        }
      }
      
      else{
        y1 = 0;
        while(y1 < 12) {
            a[y1][x1] = item1;
            item1++;
            y1++;
        }
      }
      x1++;
      b = !b;
  }
  
  for(int i = 0; i < y; i++){
    for(int j = 0; j < x; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
