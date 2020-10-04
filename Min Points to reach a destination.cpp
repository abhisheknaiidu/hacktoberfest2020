#include<bits/stdc++.h>
using namespace std;

int minPositivePoints(int** arr, int n, int m)
{
    int** dp = new int*[n];
    for(int i = 0; i < n; i++)
    dp[i] = new int[m];
    
    if(arr[n-1][m-1] <= 0)
    dp[n-1][m-1] = 1 - arr[n-1][m-1];
    else
    dp[n-1][m-1] = 1;
    
    for(int i = n-2; i >= 0; i--)
    dp[i][m-1] = max(dp[i+1][m-1] - arr[i][m-1],1);
    
    for(int i = m-2; i >= 0; i--)
    dp[n-1][i] = max(dp[n-1][i+1] - arr[n-1][i],1);
    
    for(int i = n-2; i >= 0; i--)
    {
        for(int j = m-2; j >= 0; j--)
        {
            dp[i][j] = max(min(dp[i+1][j],dp[i][j+1])-arr[i][j],1);
        }
    }
    return dp[0][0];
    
}

int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m;
	    cin >> n >> m;
	    int** mat = new int*[n];
	    for(int i = 0; i < n; i++)
	    mat[i] = new int[m];
	    
	    for(int i = 0; i < n; i++)
	    for(int j = 0; j < m; j++)
	    cin >> mat[i][j];
	    
	    cout << minPositivePoints(mat,n,m) << endl;
	    
	}
	
	return 0;
}
