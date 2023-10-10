//Task 1
#include <iostream>
using namespace std;
int main(){
    int grade;
    cout << "Enter score: ";
    cin>> grade;
    if (grade >= 90 && grade <=100){
        cout << "A";
    }
    else if (grade >= 75 && grade < 90){
        cout << "B";
    }
    else if (grade >= 60 && grade < 75){
        cout << "C";
    }
    else if (grade >= 45 && grade < 60){
        cout << "D";
    }
    else if (grade >= 0 && grade < 45){
        cout << "F";
    }
    else {
        cout << " Invalid score.";
    }
    return 0;
}
// Task 2
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (num % 2 == 0){
        if (num % 5 == 0){
            cout << "Even and divisible by 5.";
        }
        else{
            cout << "Even and not divisile by 5.";
        }
    }
    else if (num % 5 == 0){
        cout << "Odd and divisible by 5.";
    }
    else {
        cout << "Odd and not divisible by 5.";
    }
    return 0;
}
// Task 3
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter year: ";
    cin >> num;
    if (num % 4 == 0){
        cout << "Leap year";
    }
    else {
        cout << "Not a leap year";
    }
 
    return 0;
}
// Task 4
#include <iostream>
using namespace std;
int main(){
    double attendence, gpa;
    cout << "Enter gpa and attendence respectively: ";
    cin >> gpa >> attendence;
    if (gpa >= 3.5){
        if (attendence >= 80){
            cout << "Eligible for scholarship.";
        }
    }
    else {
        cout << "Not eligible for scholarship.";
    }
    return 0;
}
// Task 5
#include <iostream>
using namespace std;
int main(){
    char letter;
    cout << "Input letter: ";
    cin >> letter;
    if (letter == 'a' || letter == 'e'|| letter == 'i'|| letter == 'o'|| letter == 'u'){
        cout << "It's a vowel.";
    }
    else {
        cout << "Not a vowel.";
    }
    return 0;
}
