#include<iostream>
using namespace std;

int main(){

// Operator & For Loop

// Bitwise Operator 
    // AND -> &
    // OR  -> |
    // NOT -> ~
    // XOR -> ^

    // int a = 4;
    // int b = 6;

    // cout << " a & b " << (a&b) << endl;
    // cout << " a | b " << (a|b) << endl;
    // cout << " ~a " << (~a) << endl;
    // cout << " a ^ b " << (a^b) << endl;



// Left Shift(<<) and Right Shift(>>)
// Left Shift :- a<<b = a*b*2 (for small numbers)
// Right Shift :- a>>b = a/(b*2) (for small numbers)
// NOTE: In left shift and right shift with positive number padding is done with zero ,but in left shift and right shift with negative number padding depends on the compiler.


    // cout << (17>>1) << endl;
    // cout << (17>>2) << endl;
    // cout << (19<<1) << endl;
    // cout << (19<<2) << endl;



// Increment and Decrement Operator 
    //  int i = 1;
    //  cout << i++ << endl;  // post  increment
    //  cout << ++i << endl;  // pre increment

    //  cout << i-- << endl;  // post  decrement  
    //  cout << --i << endl;  // pre  decrement




//                              For Loop 


    // int n ; //Example1
    // cout << " Enter the value of n" << endl;
    // cin >> n;
    // cout << "Prnting count from 1 to n" << endl;
    // for(int i = 1; i <= n; i++){
    //     cout << i << endl;
    // }


    // int n; //Example1
    // cout << " Enter the value of n" << endl;
    // cin >> n;
    // cout << "Prnting count from 1 to n" << endl;
    // int i = 1;
    // for(;;){
    //     if(i <= n){
    //         cout << i << endl; 
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }


    // Example4 with multiple inputs
    // for(int a = 0, b = 1, c = 2; a>=0, b>=1, c>=2; a--, b--, c--){
    //     cout << a << ' ' << b << ' ' << c << ' ' << endl;
    // }


    // int n; //Example5
    // cout << " Enter the value of n" << endl;
    // cin >> n;
    // int sum = 0;
    // for(int i = 1; i <= n ; i++){
    //     sum += i;
    // }
    // cout << "sum = " << sum << endl;


    // int n; //Example6 - Fibonacci series
    // cout << " Enter the value of n" << endl;
    // cin >> n;
    // int sum = 0;
    // for(int a=0,b=1,i=1; i<=n ; i++){
    //     cout << a << " ";
    //     sum = a + b;
    //     a = b;
    //     b = sum;
    // }


    // int n; //Example7 - Prime or not 
    // cout << " Enter the value of n" << endl;
    // cin >> n;
    // int count = 0;
    // for(int i = 2; i < n ; i++){
    //     if(n % i == 0){
    //         cout << "Not a Prime number" << endl;
    //         break;
    //     }
    //     count++;
    // }
    // if(count == (n-2)){
    //     cout << "Prime Number" << endl;
    // }


    // int n; //Example7 - Prime or not
    // cout << " Enter the value of n" << endl;
    // cin >> n;

    // bool isPrime = 1;
    // for(int i = 2; i < n ; i++){
    //     if(n % i == 0){
    //         isPrime = 0;
    //         break;
    //     }
    // }
    // if(isPrime == 1){
    //     cout << "Prime Number" << endl;
    // }
    // else{
    //     cout << "Not a Prime number" << endl;
    // }


    // Example8 - Continue
    // for(int i = 1; i <= 5; i ++){
    //     cout << "HI" << endl;
    //     cout << "HEY" << endl;
    //     continue;
    //     cout << "Reply to krde" << endl;
    // }


    // int n; //Leetcode ques 1 (Diff b/w product and sum of an integer )
    // cout << " Enter the value of n" << endl;
    // cin >> n;
    // int prod = 1, sum = 0;
    // for(int i = 1; n!=0 ; i++ ){
    //     int x = n % 10;
    //     prod *= x;
    //     sum += x;
    //     n = n/10;
    // }
    // cout << "Product:" << prod << endl; 
    // cout << "Sum:" << sum << endl; 
    // cout << "Diffrence:" << prod-sum << endl; 


}



