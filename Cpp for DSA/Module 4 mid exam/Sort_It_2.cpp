#include<bits/stdc++.h>
using namespace std;

int* sort_it(int N)
{
    int* a = new int[N];
    for (int i = 0; i < N; i++) 
    {
        cin >> a[i];
    }

  for (int i = 0; i < N - 1; i++) 
  {
    for (int j = 0; j < N - i - 1; j++) 
    {
      if (a[j] < a[j + 1]) 
      {
        swap(a[j], a[j + 1]);
      }
    }
  }

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
