#include <stdio.h>

int fibonacci(int n, int * dp) {
    
    // if already computed
    // return the value
    
    if(dp[n] != -1)
        return dp[n];
    
    else if(n == 0 || n == 1) {
        dp[n] = n; // store the value for future reference
        return n;
    }
    
    else {
        // store the value for future reference
        dp[n] = fibonacci(n-1, dp)+fibonacci(n-2, dp);
        return dp[n];
    }
}

int main() {
    int n = 5, i;
    int dp[6] = {-1, -1, -1, -1, -1, -1};
    
    int x = fibonacci(5, dp);
    
    for(i = 0; i<=n; i++) {
        printf("%d ", dp[i]);
    }
    printf("\n%d", x);
	return 0;
}
