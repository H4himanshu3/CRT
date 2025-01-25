#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;
    int n;

    
    cout << "Enter the number of binary numbers you want to generate: ";
    cin >> n;  // Read the number of binary numbers to generate

    
    q.push("1");

    
    for (int i = 1; i <= n; i++)
    {
        
        string x = q.front();
        q.pop();  

        
        cout << x << endl;

        
        q.push(x + "0");
        q.push(x + "1");
    }

    return 0;
}
