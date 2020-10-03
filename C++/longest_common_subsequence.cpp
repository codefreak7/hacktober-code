#include <iostream>
using namespace std;

int memo[10][6]; // array -> n x m

int longestCommonSubsequence(string str1, string str2) {
    long unsigned int i, j;
    for(i = 1; i<str1.length(); i++) {
        for(j = 1; j<str2.length(); j++) {
            if(str1[i-1] == str2[j-1])
                memo[i][j] = 1 + memo[i-1][j-1];
            else
                memo[i][j] = memo[i-1][j] > memo[i][j-1]? memo[i-1][j]:memo[i][j-1];
        }
    }
    return memo[i-1][j-1];
}


int main() {
    string str1 = "helloworld"; 
    string str2 = "hlcowd"; 
    long unsigned int i, j;
    for(i = 0; i<str1.length(); i++) {
        memo[i][0] = 0;
    }
    for(i = 0; i<str2.length(); i++) {
        memo[0][i] = 0;
    }
    int lcs = longestCommonSubsequence(str1, str2);
    printf("%d\n", lcs);
    
    for(i = 0; i<str1.length(); i++) {
        for(j = 0; j<str2.length(); j++) {
            printf("%d ", memo[i][j]);
            
        }
        printf("\n");
    }
	return 0;
}
