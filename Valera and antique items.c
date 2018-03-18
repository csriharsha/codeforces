#include <stdio.h>
#include<assert.h>
#define rep(i, n) for(int i=0; i<n; i++)

int main(void) {
	int n, v;
	assert(scanf("%d", &n)==1), assert(scanf("%d", &v)==1);
	int N[n], count=0;
	memset(N, 0, n*(sizeof(int)));
	rep(i, n)
	{
	    int k;
	    assert(scanf("%d", &k)==1);
	    int A[k], cnt=0;
	    rep(j, k)
	    { assert(scanf("%d", &A[j])==1); (!cnt && A[j]<v?cnt++:"");}
	    (cnt?N[i]=i+1,count++:"");
	}
	printf("%d\n", count);
	rep(i, n) (N[i]?printf("%d ", N[i]):"");
	return 0;
}
//http://codeforces.com/problemset/problem/441/A
