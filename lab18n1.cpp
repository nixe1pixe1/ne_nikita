#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
using namespace std;

int first, last;


void quicksort(int *mas, int first, int last)

{

int mid, count;

int f=first, l=last;

mid=mas[(f+l) / 2]; 

do

{

while (mas[f]<mid) f++;

while (mas[l]>mid) l--;


if (f<=l)

{

count=mas[f];

mas[f]=mas[l];

mas[l]=count;

f++;

l--;

}

} while (f<l);

if (first<l) quicksort(mas, first, l);

if (f<last) quicksort(mas, f, last);

}


int main()

{
SetConsoleOutputCP(1251);
srand (time(NULL));
int n;

cout<<"N?"<<endl;

cin>>n;

int *A=new int[n];

cout<<"Исходный массив: ";

for (int i=0; i<n; i++)

{

A[i]=rand()%100;

cout<<A[i]<<" ";

}

first=0; last=n-1;

quicksort(A, first, last);

cout<<endl<<"Отсортированный массив: ";

for (int i=0; i<n; i++) cout<<A[i]<<" ";

delete []A;

system("pause");

return 0;}
