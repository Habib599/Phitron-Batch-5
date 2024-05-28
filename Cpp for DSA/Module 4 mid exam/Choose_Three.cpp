#include<bits/stdc++.h>
using namespace std;


bool find3(int a[], int N, int S) 
{
    sort(a, a + N);

    for (int i = 0; i < N - 2; ++i) 
    {
        int left = i + 1;
        int right = N - 1;

        while (left < right) 
        {
            int sum = a[i] + a[left] + a[right];

            if (sum == S) return true;
            else if (sum < S)  ++left;
            else --right;
        }
    }
    return false;
}

// bool find3(int a[], int N, int S) 
// {
//     if(a[1]==NULL) return false;

//     for (int i = 0; i <= N - 2; i++) 
//     {
//         for (int j = i+2; j <= N-1; j++)
//         {
//             int sum = a[i] + a[i+1] + a[j];
//             if(sum==S) return true;
//         }
        
//     }
//     return false;
// }

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int N, S;
        cin >> N >> S;
        int a[N];

        for (int i = 0; i < N; ++i) 
        {
            cin >> a[i];
        }

        if (find3(a, N, S)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

