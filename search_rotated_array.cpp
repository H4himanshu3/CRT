#include<iostream>
using namespace std;
int main()
{
    long long n;
    cout << "The no. you want to find the square root: ";
    cin >> n;

    long long s = 0;
    long long e = n;
    long long ans = -1;
    
    while (s <= e) {
        long long mid = s + (e - s) / 2;
        long long sq = mid * mid;

        if (sq == n) {
            cout << "The square root of " << n << " is: " << mid;
            return 0;
        }
        else if (sq < n) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    cout << "The square root of " << n << " is: " << ans;
    return 0;
}
