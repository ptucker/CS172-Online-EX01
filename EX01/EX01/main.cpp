//
//  main.cpp
//  EX01
//
//  Created by Josiah on 5/23/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

/*
EX01_01
a) CPU
b) RAM
c) i: on a disk
d) v: a binary digit, like 0 or 1
e) address
f) 8
g) iv: allocates resources like memory to programs that are running
h) ii: is any software that runs with the support of the operating system
*/

//EX01_02
void ex02(){
    bool hasPassedTest = true;
    int x = rand() % 100;
    int y = rand() % 100;
    
    cout<<"x = "<<x<<"\ny = "<<y<<endl;
    
    if (x>y){
        cout<<"x is greater than y"<<endl;
    }
    //PT: use else if here
    if (x<y){
        cout<<"x is not greater than y"<<endl;
    }
    //PT: and you can just use else here
    if (x==y){
        cout<<"x is equal to y"<<endl;
    }
    
    int numberOfShares;
    cout<<"Enter a number: ";
    cin>>numberOfShares;
    if (numberOfShares<100){
        cout<<numberOfShares<<" is less than 100"<<endl;
    }
    else {
        cout<<numberOfShares<<" is not less than 100"<<endl;
    }
    
    //PT: naming your variables more carefully will help here
    //PT: int boxwidth, bookwidth
    int input1;
    int input2;
    cout<<"Enter a box width: ";
    cin>>input1;
    cout<<"Enter a book width: ";
    cin>>input2;
    if (input1 % input2 == 0){
        cout<<"The box width of "<<input1<<" is evenly divisible by the book width of "<<input2<<"\n";
    }
    else {
        cout<<"The box width of "<<input1<<" is not evenly divisible by the book width of "<<input2<<"\n";
    }
    int input3;
    int input4;
    cout<<"Enter the shelf life for a box of chocolate: ";
    cin>>input3;
    cout<<"Temperature outside: ";
    cin>>input4;
    if (input4 > 90){
        cout<<"The shelf life of the box of chocolate has been reduced to "<<input3-4<<" from "<<input3<<" because it is greater than 90 degrees outside";
    }
    else {
        cout<<"The shelf life of the box of chocolate remained at "<<input3<<" because it is not greater than 90 degrees outside.\n";
    }
}

//EX01_03
void ex03(){
    int input5;
    double value1;
    cout<<"\nEnter the area of a square: ";
    cin>>input5;
    value1 = pow(input5+input5,0.5);
    cout<<"The length of the diagonal of the square with area "<<input5<<" is "<<value1;
    char input6;
    //PT: clearly!
    cout<<"\nIs Josiah super cool? Enter \"y\" for yes or \"n\" for no (HINT: The answer is yes): ";
    cin>>input6;
    if (input6=='y'){
        cout<<"You chose YES! Of course he is!";
    }
    if (input6=='n'){
        cout<<"You chose NO! You're wrong, but ok.";
    }
    //PT: char tab = '\t'; -4
    char tab = ' ';
    string mailingAddress;
    cout<<"Enter a mailing address: ";
    //PT: getline(cin, mailingAddress); //so you can get multiple words -4
    cin>>mailingAddress;
    string empty = "";
}

//EX01_04
int doubleInt(int x){
    return x*2;
}
int add(int x, int y){
    return x+y;
}
void plus1(int& x){
    x += 1;
}
void ex04(){
    int input7;
    while(true){
        cout<<"\nEnter a number between 1 and 10: ";
        cin>>input7;
        //PT: input7 >= 1 && input7 <= 10) -2
        if (input7>1 && input7<10){
            cout<<"Good Job!"<<endl;
            break;
        }
        else {
            cout<<"Try again.";
        }
    }
    int cubeSum = 0;
    for (int x=0;x<input7+1;x++){
        cubeSum = cubeSum+pow(x,3);
    }
    cout<<"\nThe sum of the cubes from 1 to "<<input7<<" is "<<cubeSum<<"\n";
    cout<<"Here are the even numbers from 0 to 40: ";
    for (int x=0;x<41;x++){
        if (x%2==0){
            cout<<x<<" ";
        }
    }
    cout<<"Double "<<input7<<" is "<<doubleInt(input7)<<endl;
    int randNum = rand() % 100;
    int randNum2 = rand() % 100;
    cout<<"The sum of "<<randNum<<" and "<<randNum2<<" is "<<add(randNum, randNum2)<<endl;
}

//EX01_05
void arrayValues(int values[], int size){
    cout<<"Array contents: ";
    for (int i=0;i<size;i++){
        cout<<values[i]<<" ";
    }
}
void findValue(int values[], int size){
    cout<<"\nSearch for an integer in the array: ";
    int input9;
    cin>>input9;
    bool found = false;
    for (int i=0;i<size;i++){
        if (values[i] == input9){
            found = true;
            cout<<input9<<" is at index "<<i<<" of the array"<<endl;
        }
    }
    if (!found){
        cout<<input9<<" is not in the array"<<endl;
    }
}
void ex05(){
    int nums[5];
    int input8;
    for (int i=0;i<5;i++){
        cout<<"Enter an integer: ";
        cin>>input8;
        nums[i]=input8;
    }
    int sum = 0;
    int product = 1;
    for (int i=0;i<5;i++){
        sum += nums[i];
        product *= nums[1];
    }
    cout<<"The sum of these numbers is "<<sum<<"\nThe product of these numbers is "<<product<<endl;
    arrayValues(nums, sizeof(nums)/sizeof(nums[0]));
    findValue(nums, sizeof(nums)/sizeof(nums[0]));
}
int main(){
    
    ex02();
    ex03();
    ex04();
    ex05();
    
}
