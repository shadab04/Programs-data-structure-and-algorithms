#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int files[50], indexBlock[50], indBlock, n;
void recurse1();
void recurse2();

void recurse1(){
    cout << "Enter the index block: ";
    cin >> indBlock;
    if (files[indBlock] != 1){
        cout << "Enter the number of blocks and the number of files needed for the index " << indBlock << " on the disk: ";
        cin >> n;
    }
    else{
        cout << indBlock << " is already allocated" << endl;
        recurse1();
    }
    recurse2();
}

void recurse2(){
    int flag = 0;
    for (int i=0; i<n; i++){
        cin >> indexBlock[i];
        if (files[indexBlock[i]] == 0)
            flag++;
    }
    if (flag == n){
        for (int j=0; j<n; j++){
            files[indexBlock[j]] = 1;
        }
        cout << "Allocated" << endl;
        cout << "File Indexed" << endl;
        for (int k=0; k<n; k++){
            cout << indBlock << " ------> " << indexBlock[k] << ": " << files[indexBlock[k]] << endl;
        }
    }
    else{
        cout << "File in the index is already allocated" << endl;
        cout << "Enter another indexed file" << endl;
        recurse2();
    }
    cout << "Do you want to enter more files?" << endl;
    cout << "Enter 1 for Yes, Enter 0 for No: ";
    int ch;
    cin >> ch;
    if (ch == 1)
        recurse1();
    else
        exit(0);
    return;
}

int main()
{
    for(int i=0;i<50;i++)
        files[i]=0;

    recurse1();
    return 0;
}
