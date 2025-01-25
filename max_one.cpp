#include<iostream>
#include<string>
using namespace std;

int main() {
    string s[8] = {"a", "b", "a", "a", "a", "b", "c", "d"};
    string l = s[0];  // Changed char l to string l
    int count = 1;    // Initialize count to 1
    int max = -1000;  // Initialize max to a low value
    
    for(int i = 1; i < 8; i++) {
        if(s[i] == l) {
            count++;
            if(max < count) {
                max = count;
            }
        } else {
            count = 1;  // Reset count to 1
            l = s[i];   // Update l to the new character sequence
        }
    }
    
    cout << max << endl;
    return 0;
}
