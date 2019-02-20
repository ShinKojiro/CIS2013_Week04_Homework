#include <iostream>

using namespace std;

const double metersInAFoot = 0.3048;
const double centimetersInAMeter = 100;
const double inchesInAFoot = 12;

// Its pretty pointless to do centimeters, the conversion from meters to centimeters is a no brainer...

void feetInchesInput(double& feet, double& inches);
// void inchesToFeet(double& feet, double& inches, double& feetAdded);
// void feetToMeters(double feet, double& meters, double& centimeters);
void conversions(double& feet, double& inches, double& feetAdded, double& meters, double& centimeters);
void output(double feet, double inches, double meters, double centimeters, double feetAdded);

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

void feetInchesInput(double& feet, double& inches){
    
    cout << "This is Feet/Inches to Meters/Centimeters conversion." << endl << endl;

    cout << "How many feet? :  ";
    cin >> feet;
    cout << "How many inches? :  ";
    cin >> inches;
    cout << endl;
}

void conversions(double& feet, double& inches, double& feetAdded, double& meters, double& centimeters){
    feet = feet + (inches / inchesInAFoot);
    feetAdded = (inches / inchesInAFoot);
    meters = (feet * metersInAFoot);
    centimeters = (meters * centimetersInAMeter);
}

// void inchesToFeet(double& feet, double& inches, double& feetAdded){
//     feet = feet + (inches / inchesInAFoot);
//     feetAdded = (inches / inchesInAFoot);
// }

// void feetToMeters(double feet, double& meters, double& centimeters){
//     meters = (feet * metersInAFoot);
//     centimeters = (meters * centimetersInAMeter);
// }

void output(double feet, double inches, double meters, double centimeters, double feetAdded){
    cout << (feet - feetAdded) << " feet and " << inches << " inches (" << feetAdded << " more feet) converts to: " << endl;
    cout << meters << " meters or " << centimeters << " centimeters." << endl;
}