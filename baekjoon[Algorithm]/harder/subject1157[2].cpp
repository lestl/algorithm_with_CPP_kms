// 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

// 입력
// 첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

// 출력
// 첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
#include <iostream>
#include <string>

using namespace std;

int main(){
    int length = 26;
    int apb[length] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int* acc = apb;
    int ASC = 0;
    int max = 0;
    int min = 0;
    int pre = 0;
    int spot = 0;
    char result;
    string input = "";

    cin >> input;
    if(input.length() <= 1000000){
    for(int i = 0; i < input.length(); i++){
        ASC = input[i];
        if(ASC >= 97 && ASC <= 122){
            ASC -= 32;
        }
        ASC -= 65;
        acc[ASC]++;
    }

    max = acc[0];
    min = acc[0];
    for (int i = 1; i < length; i++){
        pre = acc[i];
        if(max < pre){
            max = pre;
            spot = i;
        }
    }

    for (int i = 0; i < length; i++){
        if(i != spot){
            if(max == acc[i]){
            result = '?';
            cout << result;
            return 0;
        }
        }
    }

    result = (char)spot + 65;
    cout << result << endl;
    return 0;
}
return 0;
}