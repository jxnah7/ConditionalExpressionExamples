#include <iostream>

using namespace std;

int main()
{
    
    int num;
    
    cout << "Please, enter number: ";
    cin >> num;
    
// Determine the range using COMPLEX CONDITIONAL (LOGICAL) EXPRESSIONS
    
    if (num >= 5 && num <= 10)
        cout << num << " is within the range 5-10" << endl;     //Show a message
    else if(num >= 11 && num <= 15)
        cout << num << " is within the range 11-15" << endl;    //Show a message
    else if(num >= 16 && num <= 20)
        cout << num << " is within the range 16-20" << endl;    //Show a message
    else    
        cout << num << " is outside the range 5-20" << endl;     //Show a message


    cout << endl << endl;
    
    return 0;
}
