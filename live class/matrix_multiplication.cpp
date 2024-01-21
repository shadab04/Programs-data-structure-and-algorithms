#include <iostream>
using namespace std;

int main() {
    int A[3][4] = {
        {4,1,2,6},
        {15,3,9,7},
        {20,11,8,10},
    };
    int B[4][4] = {
        {5,4,3,2},
        {8,6,1,9},
        {2,6,1,5},
        {3,7,8,4},
    };
    int ans[3][4];
         
    for(int i = 0; i < 3; i++) {
     
        for(int j = 0; j < 4; j++) {
             int sum = 0;
            for(int k = 0; k < 4; k++) {
                sum += A[i][k] * B[k][j];
            }
            ans[i][j] = sum;
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}