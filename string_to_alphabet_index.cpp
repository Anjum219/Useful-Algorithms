#include<bits/stdc++.h>
#define LL long long int

using namespace std;

vector<int> string_to_alphabet_index( string s ){
    vector<int> a;

    for( int i = 0; i < s.length(); i++ ){
        a.push_back(s[i] - 'a');
    }

    return a;
}

int main(){
    string s;
    cin>>s;

    vector<int> a = string_to_alphabet_index(s);

    for( int i = 0; i < a.size(); i++ ){
        cout<<a[i]<<' ';
    }
    cout<<endl;

    return 0;
}
