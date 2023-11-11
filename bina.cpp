 // C++ program to convert binary 
// to decimal 
#include <iostream> 
using namespace std; 

int binaryToDecimal(int binary) 
{  
	int decimal = 0; 

	int weight = 1;  
	while (binary) { 
		int rem = binary % 10; 
		binary = binary / 10; 
		decimal += rem * weight; 
		weight = weight * 2; 
	} 

	return decimal; 
} 

// Driver code 
int main() 
{ 
	int binary; 
    cout<<"enter the number:";
    cin>>binary;
	cout << binaryToDecimal(binary) << endl; 
}
