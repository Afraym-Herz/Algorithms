#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<cctype>
#include<string>
#include<string.h>
#include<math.h>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int Partition (int ar[] , int start , int end ){
int i = start , j = end , pivLoc = i ;
while (true){
    while (ar[pivLoc]<=ar[j] && j !=pivLoc) j-- ;
    if (j==pivLoc) break ;
    else if (ar[i] > ar[j]) {
        swap (ar[pivLoc],ar[j]) ;
        pivLoc = j ;
    }
    while (ar[pivLoc] >= ar[i] && pivLoc !=i) i++;
    if (pivLoc==i) break ;
    else if (ar[i]>ar[pivLoc]) {
           swap (ar[i],ar[pivLoc]);
           pivLoc = i ;
    }

}
return pivLoc ;
}


void QuickSort (int ar[] , int start , int end){
    if (start<end){
    int pivLoc = Partition(ar,start,end) ;
    QuickSort(ar,start,pivLoc-1);
    QuickSort(ar,pivLoc+1,end) ;
    }
}



int main(){
 ios_base::sync_with_stdio(false);cin.tie(0) ;cout.tie(0) ;
 int n ; cin >>n;
 int ar[n] ;
 for (int i =0 ; i < n ;i++) cin>>ar[i] ;
    QuickSort(ar,0,n-1) ;

 for (int i =0 ; i < n ;i++) cout<<ar[i]<<" ";

    }

