#include <iostream>
#include <cmath>
using namespace std; 

int main(){
    double total = 0;
    int n;
    cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" <<endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3); //stuff on gauchospace to set decimals 
    cin >> n; 
    while (n>0)
    {
        for (int i=0; i<n; i++)
        {
            total += (pow(-1,i))/(2*i+1);
        }
        cout << "The approximate value of pi using " << n << " terms is: " << 4.0*total <<endl; 
        cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" <<endl;
            cin >> n;
        cout << endl;
    if (n==-1)
        {
        exit(0);
        }
    }
    return 0;
}
