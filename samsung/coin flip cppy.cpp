#include<iostream>
using namespace std;
  int arr[16][16];
  int n,m,k,ans;

 void flip(int i) {
 for (int j = 0; j < n; j++)
 if (arr[j][i])
 arr[j][i] = 0;
 else
 arr[j][i] = 1;
 }

 void solve(int cnt)
 {
if (cnt == k)
 {
int counT = 0 , row = 0;
 for (int i = 0; i < n; i++)
 {
 counT = 0 ;
 for (int j = 0; j < m; j++)
 {
 if ( arr[i][j] == 1 )
 counT++;
 }
 if (counT == m)
 row++;
 }
 ans = max(ans , row);
 return ;
 }
for (int jj = 0; jj < m; jj++)
 {
     cout<<jj<<endl;
 flip(jj);
solve(cnt + 1);
 flip(jj);
}
 return;
 }

 int main()
 {
 int t = 1;
 //cin >> t;
 while (t--)
 {
 cin >> n >> m >> k;
 for (int i = 0; i < n; i++)
 {
 for (int j = 0; j < m; j++)
 {
cin >> arr[i][j];
}
 }

 ans = 0;
 solve(0);
 cout << ans << endl;
 }

 }
