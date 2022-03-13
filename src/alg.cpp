// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    if (arr != 0) {
        int ans = 0;
        int a = size;
        int cur = size - 1;
        while (cur >= 0) {
            if (arr[cur] == value) {
                ans++;
                cur--;
            }
            if (arr[cur] > value) {
                cur--;
            }
            if (arr[cur] < value) {
                cur = -1;
            }
        }
        return ans;
    }
    if (arr == 0) {
        return 0;
    }
}
