// 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.

// 입력
// 첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.

// 출력
// 첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.

#include <iostream>
#include <string>

using namespace std;

int main(){
    string input = "";
    char result;
    int max = 0;
    int check = 0;
    
    cin >> input;

    if(input.length() <= 1000000){
        for(int i = 0; i < input.length(); i++){
            check = 1;
            for(int j = 1; j < input.length(); j++){
                if(input[i] == input[j] - 32 || input[i] == input[j] + 32 || input[i] == input[j]){
                    check++;
                }
            } 
        if(max < check){
            result = input[i];
            max = check;
        }else{
            result = '?';
        }
        }
        
        if(result >= 97 && result <= 122){
            result -= 32;
        }
        cout << result <<endl;
        cout << max;
        return 0;
    }
    return 0;
}