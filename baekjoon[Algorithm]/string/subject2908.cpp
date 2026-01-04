#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
    
// int main(){
//     int length = 2;
//     int num = 0;
//     char pre;
//     int max = 0;
//     string str[length];
//     int result[length];

//     for(int i = 0; i < length; i++){
//         cin >> str[i];
//     }
    
//     while(num < length){
//         if(str[num].length() <= 3){
//             pre = str[num][0];
//             str[num][0] = str[num][2];
//             str[num][2] = pre;
//         }

//         num++;

//     }
//     result[0] = stoi(str[0]);
//     result[1] = stoi(str[1]);

//     max = result[0];
//     if(max < result[1]){
//         max = result[1];
//     }

//     cout << max;
// }

int main(){
    string in1, in2;

    cin >> in1 >> in2;

    //reverse 함수로 string 전체를 뒤집을 수 있다.
    //begin과 end 값을 뒤집었다.
    //혹은 swap(in1[0][0], str[0][1]); 등으로 해당 두 값을 swap하여도 가능하다.
    reverse(in1.begin(), in1.end());
    reverse(in2.begin(), in2.end());

    if (in1 > in2) cout << in1;
    else cout << in2;

    return 0;
}
//근데 결과적으로 백준에서 메모리나 시간 차이는 거의 없었다.