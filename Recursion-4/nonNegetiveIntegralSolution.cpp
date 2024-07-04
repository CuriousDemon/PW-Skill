#include<iostream>
using namespace std;

int countSolutions(int n, int val)
{
	// initialize total = 0 
	int total = 0;

	// Base Case if n = 1 and val >= 0
	// then it should return 1
	if (n == 1 && val >=0)
		return 1;

	// iterate the loop till equal the val
	for (int i = 0; i <= val; i++){
		
		total += countSolutions(n-1, val-i);
		
	}
	
	// return the total no possible solution 
	return total;
}

int main(){
	
	int n = 5;
	int val = 2;
	
	cout<<countSolutions(n, val);
}

