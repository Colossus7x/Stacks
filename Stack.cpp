//Pa 6
#include <stack>
#include <iostream>
#include <cmath>
using namespace std; 

int main(){
	stack<int> myStack; 
	int n; 
	cout << "Enter a positive integer: " << endl; 
		cin>>n;
	if((n%2)==0){
		myStack.push(2);
	}
	if((n%3)==0){
		myStack.push(3);
	}	
	if((n%5)==0){
		myStack.push(5);
	}	
	if((n%7)==0){
		myStack.push(7);
	}	
	if((n%11)==0){
		myStack.push(11);
	}
	for(int i = 2; i <= sqrt(n); i++){
	 	if (n % i == 0 && i % 2 != 0 && i % 3 != 0 && i % 5 !=0 && i % 7 != 0 && i % 11 != 0){
            myStack.push(i);
        }
	}
	while(!myStack.empty()){
        cout << myStack.top() << " * ";
        myStack.pop();
    }
    
	cout << endl;
	
	return 0; 
}
