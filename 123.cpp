#include <bits/stdc++.h>
using namespace std;

void fun(int *p1 ,int* p2){
    *p1 = 1;
    *p2 = 2;
}

int main() {
    int x = 5, y = 7;
    fun(&x,&y);
    cout << x << ' ' << y << endl;
}
// x = 100, y = 101
// x = 100, y = 101
