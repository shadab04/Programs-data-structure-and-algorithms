 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {
 vector<int> vector1={2,3,6,8,10};
 cout<<" Display element->";
 for(int& vec:vector1)
 {
    cout<<vec<<" ";
 }
 cout<<endl;
 vector1.push_back(9);
 cout<<" After Display element->";
 for(int& vec:vector1)
 {
    cout<<vec<<" ";
 }
 return 0;
 }