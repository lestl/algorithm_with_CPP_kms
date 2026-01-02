#include <iostream>

using namespace std;
int main(){
    int len;
    int num;
    int max_num;
    int min_num;

    cin >> len;
    if (len >= 1 && len <= 1000000){
        int num_arr[len];
        
        for (int i = 0; i < len; i++){
        cin >> num;

        if (num >= -1000000 && num <= 1000000){
            num_arr[i] = num;
        }
        else{
            break;
        }
    }
    max_num = num_arr[0];
    min_num = num_arr[0];
    for (int i = 1; i < len; i++){
        if(num_arr[i] > max_num){
            max_num = num_arr[i];
        }
        if(num_arr[i] < min_num){
            min_num = num_arr[i];
        }
    }
    cout << min_num << " " << max_num;
    return 0;
}
}