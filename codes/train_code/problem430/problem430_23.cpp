#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
int a, b;
cin >> a >> b;

int d = a / b;
int r = a % b;
double f = (double)a/b;

printf("%d %d %f\n", d, r, f);
}

