#include <iostream>

using namespace std;

const double METERS_IN_A_FOOT = 0.3048;
const double CENTIMETERS_IN_A_METER = 100;
const double INCHES_IN_A_FOOT = 12;

void feetInchesInput(double& feet, double& inches){
    
    cout << "This is Feet/Inches to Meters/Centimeters conversion." << endl << endl;

    cout << "How many feet? :  ";
    cin >> feet;
    cout << "How many inches? :  ";
    cin >> inches;
    cout << endl;
}

void conversions(double& feet, double& inches, double& feetAdded, double& meters, double& centimeters){
    feet = feet + (inches / INCHES_IN_A_FOOT);
    feetAdded = (inches / INCHES_IN_A_FOOT);
    meters = (feet * METERS_IN_A_FOOT);
    centimeters = (meters * CENTIMETERS_IN_A_METER);
}

// void inchesToFeet(double& feet, double& inches, double& feetAdded){
//     feet = feet + (inches / INCHES_IN_A_FOOT);
//     feetAdded = (inches / INCHES_IN_A_FOOT);
// }

// void feetToMeters(double feet, double& meters, double& centimeters){
//     meters = (feet * METERS_IN_A_FOOT);
//     centimeters = (meters * CENTIMETERS_IN_A_METER);
// }

void output(double feet, double inches, double meters, double centimeters, double feetAdded){
    cout << (feet - feetAdded) << " feet and " << inches << " inches (" << feetAdded << " more feet) converts to: " << endl;
    cout << meters << " meters or " << centimeters << " centimeters." << endl;
}
// Its pretty pointless to do centimeters, the conversion from meters to centimeters is a no brainer...

// void feetInchesInput(double& feet, double& inches);
// void inchesToFeet(double& feet, double& inches, double& feetAdded);
// void feetToMeters(double feet, double& meters, double& centimeters);
// void conversions(double& feet, double& inches, double& feetAdded, double& meters, double& centimeters);
// void output(double feet, double inches, double meters, double centimeters, double feetAdded);

int main(){
    double feet;
    double feetAdded;
    double inches;
    double meters;
    double centimeters;

    feetInchesInput(feet, inches);
    // inchesToFeet(feet, inches, feetAdded);
    // feetToMeters(feet, meters, centimeters);
    conversions(feet, inches, feetAdded, meters, centimeters);
    output(feet, inches, meters, centimeters, feetAdded);

    return 0;
}

