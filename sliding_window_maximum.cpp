/*
show_maximums function shows the maximums of all the
subarrays of length k of an array.
*/

#include<bits/stdc++.h>

using namespace std;

void show_maximums( vector<int> a, int k ){
    deque<int> dq(k);
    int n = a.size();
    int i = 0;

    for( ; i < k; i++ ){
        while( !dq.empty() && a[dq.back()] < a[i] ){    // removing previous smaller elements
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout<<a[dq.front()]<<' ';

    for( ; i < n; i++ ){
        while( !dq.empty() && dq.front() <= i-k ){  // removing elements outside this window
            dq.pop_front();
        }

        while( !dq.empty() && a[dq.back()] < a[i] ){
            dq.pop_back();
        }
        dq.push_back(i);

        cout<<a[dq.front()]<<' ';
    }

    cout<<endl;
}

int main(){
    vector<int> a = {12, 1, 78, 90, 57, 89, 56};
    show_maximums(a, 3);

    return 0;
}
