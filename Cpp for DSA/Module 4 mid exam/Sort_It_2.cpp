#include<bits/stdc++.h>
using namespace std;

int* sort_it(int N) 
{
    int* a = new int[N];
    for (int i = 0; i < N; i++) 
    {
        cin >> a[i];
    }

    sort(a, a + N, greater<int>());

    return a;
}

int main() 
{
    int N;
    cin >> N;
    int* sorted_array = sort_it(N);

    for (int i = 0; i < N; i++) 
    {
        cout << sorted_array[i] << " ";
    }

    cout << endl;
    delete[] sorted_array;

    return 0;
}
