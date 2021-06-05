#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int k = 3;
    int a[n] = {2, -18, 31, 13, 4, 15};

    priority_queue<int, vector<int>, greater<int>> high_val;
    int max_sum = 0;

    for( int i = 0; i < n; i++ ){
        high_val.push(a[i]);
        if( high_val.size() > k ){  // keeping track of k highest numbers
            high_val.pop();
        }
    }

    for( int i = 0; i < k; i++ ){
        max_sum = max(max_sum, max_sum+high_val.top());
        high_val.pop();
    }

    cout<<max_sum<<endl;

    return 0;
}
