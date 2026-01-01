#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;
    string sub_str;
    string unavilable_name = "joonas";
    bool is_lower_case;

    cout << "사용자명 입력 :";
    cin >> sub_str;

    for(int i = 0; i < sub_str.size(); i++){
        if(!islower(sub_str[i])){
            is_lower_case = false;
            break;
        }
    }

    if (sub_str.size() > 50 & is_lower_case == false){
        cout << "오류 ㅗ";
    }else{
        str = sub_str;
    }
    
    if (unavilable_name == str){
        cout << str << "??!";
    }else{
        cout << str;
    }
}