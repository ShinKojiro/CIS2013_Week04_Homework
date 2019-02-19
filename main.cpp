#include <iostream>

using namespace std;

int feetInchesInput(int feet, int inches);
double feetToMeters(int);
double inchesToMilimeters();
void output();

int main(){
    int feet;
    int inches;

    feetInchesInput(feet, inches);
    inchesToMilimeters(feet, inches)

    return 0;
}

int feetInchesInput(int& feet, int& inches){
    cout << "How many feet? :  ";
    cin >> feet;
    cout << "How many inches? :  ";
    cin >> inches;
}