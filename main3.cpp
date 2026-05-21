#include <iostream>
using namespace std;

int main() {

    int n;
    double sum = 0;
    int mark;
    double average;
    int min_mark;
    int max_mark;
    int pass_student = 0;
    int fall_student = 0;
    cout << "enter the number of students ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "enter mark" << endl;
        cin >> mark;

        sum += mark;
        if (i == 0) {
            min_mark = max_mark = mark;
        }

        if (mark >= max_mark)
            max_mark = mark;

        if (mark <= min_mark)
            min_mark = mark;

        if (mark >= 50) {
            cout << "PASS" << endl;
            pass_student++;

        }
        else {
            cout << "fall "<<endl;
            fall_student++;

        }




    }
    average = sum / n;

    cout << "the average of student =  " << average << endl;
    cout << "the number of the student=  " << n << endl;
    cout << "the sum of mark=  " << sum<<endl;
    cout << "the sum pass of student  " << pass_student<<endl;
    cout << "the sum fall of student  " << fall_student<<endl;
    cout << "the minmum mark =  " << min_mark << endl;
    cout << "the maxmum mark =  " << max_mark << endl;

    return 0;
}
