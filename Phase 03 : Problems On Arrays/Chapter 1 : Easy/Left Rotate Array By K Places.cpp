/************************************************************
 * 🧩 Problem: Left Rotate an Array by d Positions
 *
 * Approach 1 — Using temporary buffer (extra O(d) space)
 * - Save first d elements in temp[]
 * - Shift the rest left by d
 * - Copy temp elements to the end
 *
 * Time: O(n)
 * Space: O(d)
 ************************************************************/

#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d){
    d = d % n;

    int temp[d];
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }

    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }

    for(int i=n-d; i<n; i++){
        arr[i] = temp[i-(n-d)];
    }

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int d;
    cin >> d;
    leftRotate(arr, n, d);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

/************************************************************
 * 🟢 Approach 2 — Optimal (Three reversals, O(1) extra space)
 * - Reverse first d elements
 * - Reverse remaining n-d elements
 * - Reverse whole array
 *
 * Time: O(n)
 * Space: O(1)
 ************************************************************/

#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d){
    d = d % n;
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int d;
    cin >> d;
    leftRotate(arr, n, d);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
