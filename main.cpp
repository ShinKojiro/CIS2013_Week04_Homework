#include <iostream>

using namespace std;

int feetInchesInput(int& feet, int& inches);
double feetToMeters(double feet, double meters);
double inchesToMilimeters(double inches, double milimeters);
void output(double feet, double, inches, double Meters, double milimeters);

int main(){
    int feet;
    int inches;
    double meters;
    double milimeters;

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

double feetToMeters(int)