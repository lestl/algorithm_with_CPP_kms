#include <iostream>
#include <iomanip>

using  namespace std;

int main(){
    int grade = 0;
    int max_grade = 0;
    float result = 0;
    int len = 0;

    cin >> len;
    if(len > 0 && len <= 1000){
        float grade_arr[len];
        for(int i = 0; i < len; i++){
            cin >> grade;
            if(grade >= 0 && grade <= 100){
            grade_arr[i] = grade;
        }
        }
        max_grade = grade_arr[0];
        for(int i = 0; i < sizeof(grade_arr) / sizeof(grade_arr[0]); i++){
            if (max_grade < grade_arr[i]){
                max_grade = grade_arr[i];
            }
        }
        for(int i = 0; i < sizeof(grade_arr)/ sizeof(grade_arr[0]); i++){
            grade_arr[i] = (grade_arr[i] / max_grade) * 100;
            result += grade_arr[i];
        }
        cout << fixed << setprecision(2) << result / len << endl;
    }
    return 0;
}