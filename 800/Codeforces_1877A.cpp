/*
author: Farhana Mariyan Tarannum
Port City International University,Chittagong
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define MOD 1000000007
ll mod_add(ll a, ll b) { return (a % MOD + b % MOD) % MOD; }
ll mod_sub(ll a, ll b) { return (a % MOD - b % MOD + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return (a % MOD * b % MOD) % MOD; }
#define INF (int)1e9
#define PI 3.1415926535897932384626433832795

#define endl "\n" 
#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);


int main(){
    optimize();

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum = sum + a[i];
        }
        int me = 0 - sum;
        cout << me << endl;
        
        
     }
    return 0;
}