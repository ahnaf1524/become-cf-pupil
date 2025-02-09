/*  
 █████╗ ██╗  ██╗███╗   ██╗ █████╗ ███████╗ █████╗  ██████╗██████╗  
██╔══██╗██║  ██║████╗  ██║██╔══██╗██╔════╝██╔══██╗██╔════╝██╔══██╗ 
███████║███████║██╔██╗ ██║███████║███████╗███████║██║     ██████╔╝ 
██╔══██║██╔══██║██║╚██╗██║██╔══██║╚════██║██╔══██║██║     ██╔═══╝  
██║  ██║██║  ██║██║ ╚████║██║  ██║███████║██║  ██║╚██████╗██║      
╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝ ╚═════╝╚═╝      
------------------------------------------------------------------
Problem  : A. Tram
Link     : https://codeforces.com/problemset/problem/116/A
Submit   : https://codeforces.com/problemset/submit/116/A
Date     : 08/02/2025
Author   : ahnaf_cp
------------------------------------------------------------------
*/
#include <iostream>

#include <string>

#include <array>

#include <cmath>

#include <iomanip>

#include <vector>

#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
void input_arr(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin >> N;
  int n = N * 2;
  int * tram = new int[n];
  vector < int > tram_cap;
  input_arr(tram, n);
  for (int i = 1; i < n; ++i) {
    if (tram[i] > tram[i + 1]) {
      int a1 = tram[i] - tram[i + 1];
      int a2 = a1 + tram[i + 2];
      tram_cap.push_back(a2);
    }
  }
  int maxCap = tram_cap[0];
  for (int n: tram_cap) {
    if (n > maxCap) {
      maxCap = n;
    }
  }
  cout << maxCap << endl;
  delete[] tram;
  return 0;
}
