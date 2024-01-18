// #include<iostream>
// using namespace std;

// int main()
// {
// int n;
// cin>>n;
// if(n<=1)
// {
//     cout<<"false"<<endl;
// }
// else{
//     int flag=0;
// for(int i=2;i<=n;i++)
// {

//     if(n%i==0)
//     {
//         flag=1;
//         break;
//     }
// }
// if(flag==0)
// }
 
// {
//     cout<<
// }
// return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int number = 1; number <= n; number++) {
       
        if(number > 1){
            int flag = 0;
            for(int i = 2; i <= number - 1; i++) {
                if(number % i == 0) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) {
                cout<<number<<endl;
            }
        }
    }
    return 0;
}