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
const int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};

int main(){
    optimize();

    int t;
    cin>>t;
    while(t--)
    {
        char a[10][10];
        for (int i = 0; i < 10; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < 10; j++)
            {
                a[i][j] = s[j];
            }
            
        }
        int t = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (a[i][j] == 'X')
                {
                    t = t + score[i][j];
                }
                
            }
            
        }
        
        cout << t << endl;
       
    }
    return 0;
}