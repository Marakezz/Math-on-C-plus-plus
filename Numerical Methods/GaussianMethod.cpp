#include <iostream>
#include <string>
#include <vector>

using namespace std ;

int main()
{
int n , i ,j ;
double t , t1 , sum;
cout<<"Pa3mepHocTb : " ;
cin>>n ;
double a[n][n], b[n], x[n];
for (i=0 ; i<n ; i++)
{
for (j=0 ; j<n ; j++)
cin>>a[i][j] ;
cin>>b[i] ;
}

for (i=0 ; i<n ; i++)
{
t=a[i][i] ;
for (j=0 ; j<n ; j++)
a[i][j]=a[i][j]/t ;
b[i]=b[i]/t ;
for( int k=i+1 ; k<n ; k++)
{
t1=a[k][i] ;
for(j=i ; j<n ; j++)
a[k][j]-=a[i][j]*t1 ;
b[k]-=b[i]*t1 ;
}

}
cout<<endl ;
for (i=0 ; i<n ; i++){
for(j=0 ; j<n ; j++)
cout<<a[i][j]<<" " ;
cout<<"| "<<b[i]<<endl ;
}

for (i=n ; i>0 ; i--)
{
sum=0 ;
for (j=i+1 ; j<=n ; j++)
sum+=a[i-1][j-1]*x[j] ;
x[i]=b[i-1]-sum ;
cout<<"X"<<i<<"= "<<x[i]<<" " ;
}




return 0 ;
}