#include <iostream>
#include <string>
#include <math.h>

using namespace std ;

int main()
{
int n , i , j , iter=0 ;
cout<<"Pa3MePHocTb = " ;
cin>>n ;
double a[n][n] , b[n] , xk[n] , xk1[n] ;
double e=0.01 , sum=0 , breaker = 0 ;
cout<<"MaTpuLLa :"<<endl ;
for (i=0 ; i<n ; i++)
{ sum=0 ;
for (j=0 ; j<n ; j++){
cin>>a[i][j] ;
sum+=fabs(a[i][j]) ; }
if(breaker<sum)
breaker = sum ;
cin>>b[i] ;
}


if (breaker>=1)
cout<<"ycJloBue cxogumocTu He BblnoJlH9eTc9!!!!!!!" ;
else {

for(i=0 ; i<n ; i++)
xk[i]=b[i] ;

while (1){
iter+=1 ;
for(i=0 ; i<n ; i++)
{
sum=0 ;
for(j=0 ; j<n ; j++)
{if(j!=i)
sum+=a[i][j]*xk[j] ; }
sum+=b[i] ;
xk1[i]=sum ;
}
breaker=fabs(xk1[0]-xk[0]) ;
for(i=1 ; i<n ; i++)
if(breaker<fabs(xk1[i]-xk[i]) )
breaker = fabs(xk1[i]-xk[i]) ;

if(breaker<=e)
break ;
else {
for(i=0 ; i<n ; i++)
xk[i]=xk1[i] ;
}

}

cout<<breaker<<" < e , "<<"KoJl-Bo uTep : "<<iter<<endl<<"OTBET : "<<endl<<"x = (" ;
for(i=0 ; i<n ; i++)
cout<<xk1[i]<<" " ;
cout<<")T" ;

}
cout<<"OTBET : "<<endl ;
for(i=0 ; i<n ; i++)
{for(j=0 ; j<n ; j++)
cout<<a[i][j]<<" ";
cout<<"| "<<b[i]<<endl ;
}

}