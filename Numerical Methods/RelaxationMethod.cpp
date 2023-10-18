#include <iostream>
#include <string>
#include <math.h>
using namespace std ;

int main()
{
int n , i , j , k , k1;
cout<<"Pa3mepHocTb : " ;
cin>> n ;
double a[n][n] , b[n] , d[n][n] , c[n] , x1[n] , Rn[n] , R[n] , sum=0 , m=0 , e=0.001 , otvet[n] ;
for (i=0 ; i<n ; i++){
for (j=0 ; j<n ; j++)
cin>>a[i][j] ;
cin>>b[i] ;
x1[i]=b[i] ;
otvet[i]=b[i] ;
}

for (i=0 ; i<n ; i++)
for (j=0 ; j<n ; j++){
d[i][j]=-(a[i][j]/a[i][i]) ;
c[i]=b[i]/a[i][i] ;
}


for (i=0 ; i<n ; i++){
sum=0 ;
for (j=0 ; j<n ; j++){
if (j!=i)
sum+=d[i][j]*x1[j] ;
}
R[i] = c[i] - x1[i] + sum ;
if(fabs(R[i])>m){
m=fabs(R[i]) ;
k=i ;
}
//if(m<=e)
//break ;

}
otvet[k]+=R[k] ;

while (1){
m=0 ;
for (i=0 ; i<n ; i++)
{
if(i==k)
Rn[i]=0 ;
else{
Rn[i]=R[i]+d[i][k]*R[k] ;
if(fabs(Rn[i])>m){
m=fabs(Rn[i]) ;
k1=i ;
}
}
}
if (m<=e)
break ;
else {
otvet[k1]+=Rn[k1] ;
for (i=0 ; i<n ; i++)
R[i]=Rn[i] ;
k=k1 ;
}
}




cout<<"OTBET : " ;
for (i=0 ; i<n ; i++)
cout<<otvet[i]<<" " ;




cout<<"-— "<<R[0]<<R[1]<<R[2] ;

for (i=0 ; i<n ; i++){
for (j=0 ; j<n ; j++)
cout<<d[i][j]<<" " ;
cout<<c[i] ; }


for (i=0 ; i<n ; i++){
for (j=0 ; j<n ; j++)
cout<<a[i][j]<<" " ;
cout<<b[i]<<endl ;

}}