#include<bits/stdc++.h>

using namespace std;

vector<pair<int, int>> sorted_with_index( int a[], int n ){
    vector<pair<int, int>> v;

    for( int i = 0; i < n; i++ ){
        v.push_back(make_pair(a[i], i));
    }

    sort(v.begin(), v.end());
    return v;
}

int main(){
    int n = 5;
    int a[n] = {3, 2, 1, 5, 4};
    vector<pair<int, int>> v = sorted_with_index(a, n);

    for( int i = 0; i < n; i++ ){
        cout<<v[i].first<<'\t'<<v[i].second<<endl;
    }

    return 0;
}
