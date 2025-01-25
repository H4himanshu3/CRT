#include<iostream>
#include<set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;  
    
    
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        s.insert(v);
    }

    
    int target;
    cout << "Enter the element to search for: ";
    cin >> target;

    
    auto it = s.find(target);

    if (it != s.end()) {
        cout << "Element " << target << " found in the set." << endl;
    } else {
        cout << "Element " << target << " not found in the set." << endl;
    }

    return 0;
}
