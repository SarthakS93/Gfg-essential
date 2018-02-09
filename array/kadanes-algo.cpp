#include<iostream>
#include<climits>
using namespace std;

/*
 * Main idea is to look for all positive contigous segments of the array
 */
int getLargestSumOfContigousSubarray(int a[], int n) {
    int max_so_far = INT_MIN, max_ending_here = 0;
    for (int i = 0; i < n; i++) {
        max_ending_here += a[i];
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }
    return max_so_far;
}


int main() {

    int n, a[1000000];
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];

    cout<<getLargestSumOfContigousSubarray(a, n)<<endl;

    return 0;
}
