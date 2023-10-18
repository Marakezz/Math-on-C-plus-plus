#include <iostream>
#include <string>
#include <math.h>

using namespace std ;

int main()
{
int n , i , j , iter=0 ;
cout<<"Pa3MePHocTb = " ;
cin>>n ;
double x[n][n] , d[n] , a[n] , b[n] , y[n] , P[n] , Q[n] , otvet[n] ;
double e=0.01 ;
cout<<"MaTpuLLa :"<<endl ;
for (i=0 ; i<n ; i++) {
for (j=0 ; j<n ; j++)
cin>>x[i][j] ;
cin>>d[i] ;
}


for(i=0 ; i<n ; i++)
{
a[i]=x[i][i-1] ;
b[i]=-x[i][i] ;
y[i]=x[i][i+1] ;
}
a[0] = 0 ;
y[n-1]=0 ;
P[0]=y[0]/b[0] ;
Q[0]= -d[0]/b[0] ;

for (i=1 ; i<n-1 ; i++)
{
P[i]=y[i]/(b[i]-a[i]*P[i-1]) ;
Q[i]=(a[i]*Q[i-1] - d[i])/(b[i] - a[i]*P[i-1]) ;
}
otvet[n-1] = (a[n-1]*Q[n-2] - d[n-1])/(b[n-1]-a[n-1]*P[n-2]) ;

for(i=n-2 ; i>=0 ; i--)
{
otvet[i] = P[i]*otvet[i+1] + Q[i] ;
}



cout<<"OTBET :"<<endl ;
for (i=0 ; i<n ; i++)
{
cout<<"X"<<i+1<<" = "<<otvet[i]<<" " ;
}


}