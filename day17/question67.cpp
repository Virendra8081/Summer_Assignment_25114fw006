#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& a, vector<int>& b) {
    vector<int> ans;

    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {

        if (a[i] < b[j]) {
            i++;
        }
        else if (a[i] > b[j]) {
            j++;
        }
        else { // a[i] == b[j]

            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);

            i++;
            j++;
        }
    }

    return ans;
}

int main() {
    int arr[] = {2, 4, 5, 8};
    int brr[] = {2, 3, 6, 7, 8, 12};

    vector<int> a(arr, arr + 4);
    vector<int> b(brr, brr + 6);

    vector<int> ans = intersection(a, b);

    for (int x : ans) {
        cout << x << " ";
    }
}