#include<iostream>
#include <string>
using namespace std;

void permute(string a, int l, int r)
{
    // Base case
    if (l == r) {
            cout<<a<<endl;

    }
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l+1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}int main() {
    int x, y = 0, n;
    cin>>x;
    string *arr = new string [x];
    while (x--)
        cin >> arr[y++];

    x = 0;
    while (y--) {
        n = arr[x].length();
        permute(arr[x++], 0, n - 1);
    }


    return 0;
}
