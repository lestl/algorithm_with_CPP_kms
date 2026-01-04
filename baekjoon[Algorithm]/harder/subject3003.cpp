#include <iostream>
#include <string>

using namespace std;

int main() {
    const int LENGTH = 6;
    int pieces[LENGTH] = {};
    int find_pieces[LENGTH] = {1, 1, 2, 2, 2, 8};

    for(int i = 0; i < LENGTH; i++){
        cin >> pieces[i];

        find_pieces[i] -= pieces[i];
    }
    //사실상 int 값을 받고 바로 find_pieces에서 값을 빼버리면 되기 때문에 pieces라는 배열을 만들 필요는 없었음... 수정하자
    for (int piece : find_pieces){
        cout << piece << " ";
    }

    return 0;
}