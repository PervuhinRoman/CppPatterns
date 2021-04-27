//������� ��� (�������� ����� �������)

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while(a != b) {
        if(a > b) {
            a-=b;
        }else {
            b-=a;
        }
    }
    
    return a;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}*/

//�������� ��� (����� ������ ������� �.�. �� ������� ����� �������)

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while(a != 0 and b != 0){
        if(a < b)
            b %= a;
        else
            a %= b;
    }
    
    return a + b;
}
int main() {
    int a, b;
    cin >> a >> b;
    
    cout << gcd(a, b);
}
*/

/*����������� ��� (���� �������� �� ������� ���������, 
�� ��������� �� ��������� � ����������, �������, ����� ���������� ������ ����������� ���)*/

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if(b == 0)
        return a;
    return gcd(b ,a % b);
}
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
int main() {
    int a, b;
    cin >> a >> b;
    
    cout << gcd(a, b);
}

//�������� ���������� ���
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}
