#include "testlib.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    
    // Generate a random length between 2 and 100000
    int length = rnd.next(2,100001);
    println(length);

    string s;
    do {
        // Generate a string of the required length with characters in the range [0-3]
        s = rnd.next("[0-3]{" + to_string(length) + "}");
    } while (count(s.begin(), s.end(), s[0]) == s.length()); // Ensure the string has at least two distinct elements

    println(s);

    return 0;
}
