#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);

    int* arr = new int[n];
    int num;

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        arr[i] = num;
    }

    sort(arr, arr+n);

    printf("%d", arr[k - 1]);

    delete[]arr;

    return 0;
}