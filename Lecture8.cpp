#include<iostream>
using namespace std;



// Switch Statement

// int main(){



//     // char ch = '1';
//     // int num = 1;
//     // switch (ch)
//     // {
//     // case 1: cout << "First" << endl;
//     //         cout << "First again" << endl;
//     //         break;

//     // case '1': switch(num){
//     //             case 1: cout << "Value if num is " << num << endl;
//     //             break;
//     //         }
//     //           break;
    
//     // default: cout << "It is default case" << endl;
//     //          break;
//     // }    
//     // cout << endl;

// //Note: You can use exit() in place of break. Use of continue keyword in case of Switch is worthless.


// //Calculator pyaara sa 

//     // int a, b;
//     // cout << "Enter value of a" << endl;
//     // cin >> a;
//     // cout << "Enter value of b" << endl;
//     // cin >> b;
//     // int n;
//     // cout << "Enter: \n 1. for Addition \n 2. for Subtraction \n 3. for multiplication \n 4. for addition " << endl;
//     // cin >> n;
//     // switch(n){
//     //     case 1: cout << a+b << endl;
//     //         break;
//     //     case 2: cout << a-b << endl;
//     //         break;
//     //     case 3: cout << a*b << endl;
//     //         break;
//     //     case 4: cout << a/b << endl;
//     //         break;
//     //     default: cout << "Please enter valid number." << endl;
//     //         break;
//     // }


// // Homework - To find number of each notes in a given amount.

//     // int n;
//     // cout << " Enter amount value : " << endl;
//     // cin >> n;

//     // switch( n >= 100){
//     //     case 1: cout << "Number of 100 notes : " << n/100 << endl;
//     //     n = n % 100;
//     //         break;
//     // }
//     // switch( n >= 50){
//     //     case 1: cout << "Number of 50 notes : " << n/50 << endl;
//     //     n = n % 50;
//     //         break;
//     // }
//     // switch( n >= 20){
//     //     case 1: cout << "Number of 20 notes : " << n/20 << endl;
//     //     n = n % 20;
//     //         break;
//     // }
//     // switch( n >= 10){
//     //     case 1: cout << "Number of 10 notes : " << n/10 << endl;
//     //     n = n % 10;
//     //         break;
//     // }

//     return 0;
// }



// Functions - prevents code from getting: Bulky, Buggy, Unreadability

// Example 1

    // int power (int num1, int num2){

    //     int ans = 1;
    //     for(int i = 1; i <=num2; i++ ){
    //         ans = ans * num1;
    //     }

    //     return ans;
    // }

    // int main(){
    //     int a, b;
    //     cin >> a >> b;

    //     int ans = power(a,b);
    //     cout << "Answer is: " << ans << endl;
    //     return 0;
    // }

// Example 1 - Optimized Code

    // int power (){
    //     int a, b;
    //     cin >> a >> b;

    //     int ans = 1;
    //     for(int i = 1; i <=b; i++ ){
    //         ans = ans * a;
    //     }

    //     return ans;
    // }

    // int main(){
        

    //     int ans = power();
    //     cout << "Answer is: " << ans << endl;

    //     ans = power();
    //     cout << "Answer is: " << ans << endl;

    //     ans = power();
    //     cout << "Answer is: " << ans << endl;

    //     return 0;
    // }


// Example 2 - Even or not


    // bool isEven(int a){

    //     if(a&1){ //odd
    //         return 0;
    //     }
    //     else{ //even
    //         return 1;
    //     }
    // }

    // int main(){

    //     int num;
    //     cin >> num;

    //     if(isEven(num)){
    //         cout << "Number is Even" << endl;
    //     }
    //     else{
    //         cout << "Number is Odd" << endl;
    //     }

    //     return 0;
    // }


// Example 3 - nCr Program

// Formula : nCr = n! / (r! * (n – r)!)

    // int factorial(int n){

    //     int fact = 1;
    //     for(int i=1; i <= n; i++){
    //         fact = fact*i;
    //     }
    //     return fact;
    // }

    // int nCr(int n, int r){

    //     int ans = factorial(n) / (factorial(r) * factorial(n-r));
    //     return ans;
    // }

    // int main(){

    //     int a, b;
    //     cin >> a >> b;

    //     cout << "nCr is : " << nCr(a, b) << endl;

    //     return 0;
    // }


// REMARK: When our function returns nothing for example, then we declare it of "void" type. 

// Example 4 - A void function that simply print the counting 

    // void printCounting(int n){
    //     for(int i =1; i <= n; i++){
    //         cout << i << " " ;
    //     }
    //     cout << endl;
    //     return ; // If want to use, use else not.
    // }

    // int main(){
    //     int n;
    //     cin >> n;

    //     printCounting(n);

    //     return 0;
    // }


// Example 5 - Prime or not

    // bool isPrime(int n){

        
    //     for(int i = 2; i < n; i++){
    //         if(n % i == 0){
    //             return 0;
    //         }
    //     }
    //     return 1;
    // }

    // int main(){
    //     int n;
    //     cin >> n;

    //     if(isPrime(n)){
    //         cout << "The number is prime." << endl;
    //     }
    //     else{
    //         cout << "The number is not prime." << endl;
    //     }

    //     return 0;
    // }


// Homework1 - To find the nth term of an A.P

    // int term(int a, int d, int n){
    //     int ans = a + ((n-1)*d);
    //     return ans;
    // }

    // int main(){
    //     int a, d, n;
    //     cout << "Enter value of first term, difference b/w term & value of n : " << endl;
    //     cin >> a >> d >> n;

    //     cout << n <<"th term of A.P is : " << term(a,d,n) << endl;

    //     return 0;

    // }


// Homework2 - Total number of set bits in a and b

    // int setBit(int a){
    //     int count = 0;
    //     while(a!=0){
    //         int bit = ( a & 1);
    //         if (bit == 1){
    //             count++;
    //         }
    //         a = a >> 1;
    //     }
    //     return count;
    // }

    // int main(){
    //     int a , b;

    //     cout << "Enter First Number: " ;
    //     cin >> a;
    //     cout << endl << "Enter Second Number: "; 
    //     cin >> b;
    //     cout << endl;

    //     int ans = setBit(a) + setBit(b);

    //     cout << "Total number of set bits is: " << ans << endl;

    //     return 0;
    // }


//  Homework3 - To find the nth term of fibonacci series

    // int term( int n){
    //     int a=0;
    //     int b=1;
    //     int sum = 0;
    //     if(n==a){
    //         return a;
    //     }
    //     else if(n==b+1 || n==b){
    //         return b;
    //     }
    //     for(int i = 1; i < n; i++){
    //         sum = a + b;
    //         a = b;
    //         b = sum;
    //     }
    //     return sum;
    // }

    // int main(){
    //     int n;
    //     cin >> n;
    //     int ans = term(n);
    //     cout << "nth term : " << ans << endl;
    // }

    
