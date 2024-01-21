#include <bits/stdc++.h>
using namespace std;
int ar[10];
int siz = 0;
int i = 0;
void insertion_end(int a)
{
    if (siz == 10)
    {
        return;
    }
    ar[i] = a;
    i++;
    siz++;
}
bool insert_at_start(int a)
{
    if(siz==10) return false;
    for(int j=i-1;j>=0;j--)
    {
        ar[j+1]=ar[j];
    }
    ar[0]=a;
    i++;
    siz++;
    return true;

}
bool delete_start()
{
    
}
bool delete_array()
{
    if(siz==0)return false;
    i--;
    siz--;
}
void print_array()
{
    for (int j = 0; j < siz; j++)
    {
        cout << ar[j] << " ";
    }
}
int main()
{
    insertion_end(10);
    insertion_end(20);
    insertion_end(30);
    insertion_end(40);
    insertion_end(50);
    insertion_end(60);
    insertion_end(70);
    insertion_end(80);
    insertion_end(90);
    insertion_end(100);
    print_array();
    delete_array();
    return 0;
}