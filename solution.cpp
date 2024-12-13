// use for loop to gather input and sort based on conditions

#include <iostream>
using namespace std;
int main()
{
    
    //initialize vars
    
    int pos = 0;
    int neg = 0;
    int zero = 0;
    int sum = 0;
    int prod = 1;
    int input;
    
    //for loop
    
    for (int num = 1; num <= 10; ++num)
    {
        cout << "Enter whole number " << num << ": ";
        cin >> input;
        if (input > 0)
        {
            pos += 1;
            sum += input;
        }
        else if (input < 0)
        {
            neg += 1;
            prod *= input;
        }
        else
        {
            zero += 1;
        }
    }
    
    //end for loop
    
    cout << endl;
    
    //output results
    
    cout << "Of the 10 numbers entered:" << endl;
    cout << "\t" << zero << " were 0's." << endl;
    cout << "\t" << neg << " were negative." << endl;
    cout << "\t" << pos << " were positive." << endl;
    cout << endl;
    
    //output totals
    
    cout << "The product of the negative numbers was " << prod << '.' << endl;
    cout << "The sum of the positive numbers was " << sum << '.' << endl;
    return 0;
}
