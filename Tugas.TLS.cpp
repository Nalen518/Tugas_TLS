#include <iostream>
#include <cmath>
using namespace std;

int main (){
    double radius,area,circumference;

    cout << "Enter the radius of the circle :";
    cin >> radius;

    if (radius > 0){
    area = M_PI * pow (radius,2);
    circumference =2*M_PI*radius;

    cout << "Area of the circle : " << area << endl;
    cout << "circumference of the circle :" << circumference << endl;

     } else{
        cout << "ERROR : The number that you input must bigger than zero" << endl;
     }
  

  
    return 0;



}
