#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> arr;
    
    cin >> n;
    
    arr.resize(n + 1);
    
    arr[0] = 0;
    
    for (int i=1; i <= n; i++) {
        arr[i] = arr[i/2] + ((i % 2)?1:0);
    }
    
    for (auto i : arr)
        cout << i << " ";
    cout << "\n";

    return 0;
}
