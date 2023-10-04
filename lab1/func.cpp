#include "func.hpp"

string A2B_B2A(string str_orig) {
    string str_new = "";
    for(int i = 0; i < str_orig.length(); i++) {
        switch(str_orig[i]) {
            case 'a':
                str_new.push_back('b');
                break;
            case 'b':
                str_new.push_back('a');
                break;
            case 'c':
                str_new.push_back('c');
                break;
        }
        
    }
    return str_new;
}