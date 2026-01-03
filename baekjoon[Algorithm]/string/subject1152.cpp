#include <iostream>
#include <string>

using namespace std;

int main(){
    int num = 0;
    string str;

    while(cin >> str){ //cin을 받는 동안 반복하면 쉽다.
        num++;
    }
    cout << num;
    return 0;
}