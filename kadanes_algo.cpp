#include <bits/stdc++.h>

using namespace std;

int max_subarray_sum( int arr[], int n ){
    long long int max_sum = arr[0];
    long long int local_max_sum = 0;

    for( int i = 0; i < n; i++ ){
        local_max_sum += arr[i];
        max_sum = max(max_sum, local_max_sum);

        if( local_max_sum < 0 ) //since a negative sum lowers local maximum,
            local_max_sum = 0; //we are keeping it zero.
    }

    return max_sum;

}

int main(){
    int n;
    cin>>n;
    int a[n];
    for( int i = 0; i < n; i++ ){
        cin>>a[i];
    }
    cout<<max_subarray_sum( a, n )<<endl;

    return 0;
}
