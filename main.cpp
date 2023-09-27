#include <iostream>
#include "func.hpp"




int main()
{
    string str_orig = "";
    string str_new = "";
    
    cin >> str_orig;
    str_new = A2B_B2A(str_orig);
    
    cout<<str_new << endl;

    return 0;
}