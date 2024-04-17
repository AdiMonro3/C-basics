#include<iostream>
using namespace std;
int main(){
    /*  question1 ->int a;
    cin>>a ;
    if(a%5==0){
        cout<<"given integer is divsible  by 5 ";
    }
    else {
    cout<<"integer is not divisible by 5";
    }*/

/* question 2-->int year;
cin>>year;
if (year%4==0){
    if(year%100==0){
        if(year%400==0){
            cout<<year<<" is leap year";
        }
        else{
            cout<<year<<" is not leap year";
        }
    }
    else{
        cout<<year<<" is leap year";
    }
}
else{
    cout<<year<<" is not leap year";
}*/

/* question3-->int  num ,absolutenum;
cin>>num;
if(num<0){
absolutenum=num*(-1);
cout<<absolutenum<<" is absolute value of "<<num;
}
else{
    cout<<num;
}*/


/* question3-->float  x1, y1, x2, y2, x3, y3;

    // Input the coordinates of three points
    cout << "Enter coordinates of first point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of second point (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter coordinates of third point (x3 y3): ";
    cin >> x3 >> y3;

    // Calculate slopes using integer arithmetic
    float Slope1 = (y2 - y1) / (x2 - x1);
    float Slope2 = (y3 - y1) / (x3 - x1);

    // Simplify slope1 calculation to avoid division by zero
    //int dx1 = x2 - x1;
    //int dy1 = y2 - y1;

    // Simplify slope2 calculation to avoid division by zero
    //int dx2 = x3 - x1;
    //int dy2 = y3 - y1;

    // Check if the points are collinear using cross multiplication
    // (dy1 / dx1) == (dy2 / dx2) can be rewritten as
    // dy1 * dx2 == dy2 * dx1 to avoid floating-point division
    if (Slope1 == Slope2) {
        cout << "The points (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << "), and (" << x3 << ", " << y3 << ") lie in straight line." << endl;
    } else {
        cout << "The points (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << "), and (" << x3 << ", " << y3 << ") lie in strainght line." << endl;
    }*/

    /*Ques : Print numbers from 1 to 100
    int i;
    for(i=1;i<=100;i++){
        cout<<i<<endl;
    }*/

    /*Ques : Print all the even numbers from 1 to 100
    int i;
    for(i=1;i<=100;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }*/

    /*HW : Print the table of ‘n’. Here ‘n’ is a integer which user will input.
    int i,n,c;
    cin>>n;
    for(i=1;i<=10;i++){
        c=i*n;
        cout<<c<<endl; 
        }*/

       /* Ques : WAP to check if a number is prime or not.

       int i,n ,flag;
       cin>>n;
        for(i=2;i<n;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
if(flag==1){
    cout<<n<<" is not a prime number";
}
else{
    cout<<n<<" is a prime number";
}*/

/*Ques : WAP to count digits of a given number.
int n;
cin>>n;
int count=0;
while(n>0){
    n=n/10;
    count++;
    }
cout<<count;*/

/*int n;
cin>>n;
int sum =0;

while(n>0){
    int lastdigit=n%10;
    sum=sum +lastdigit;
    n=n/10;
   // cout<<sum;
}
cout<<sum;*/

/*HW : WAP to print sum of all the even digits of a given number.
int n;
cin>>n;
int sum=0;
while(n>0){
    int lastdigit =n%10;
    if(lastdigit%2==0){
        sum=sum +lastdigit;
    }
    n=n/10;
    }
cout<<"sum of all even digits are "<<sum;*/

/* Ques : WAP to print reverse of a given number.
int n;
cin>>n;
int reverse=0;
while(n>0){
    int lastdigit=n%10;
    reverse=reverse*10+lastdigit;
    n=n/10;
}
cout<<reverse;*/



        
    



    return 0;
}

