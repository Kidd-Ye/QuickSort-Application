//
//  main.cpp
//  Sort
//
//  Created by kidd on 2018/8/9.
//  Copyright © 2018年 Kidd. All rights reserved.
//

#include <iostream>
using namespace std;

void Move(int a[], int len){
    int i = 0, j = len-1;
    while (i<j) {
        while (i<j && a[i]%2 != 0) {
            i++; //从前向后寻找偶数，不符合则加一
        }
        while (i < j && a[j]%2 != 1) {
            j--; // 从后向前寻找奇数
        }
        if(i < j){
            swap(a[i], a[j]);
        }
        i++;
        j--;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int a[] = {2,4,6,8,10,1,3,5,7,9};
    Move(a, 10);
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
