#include<bits/stdc++.h>
#define ll long long
#define nl "\n"
#define csort(n) sort(n.begin(),n.end())
#define rsort(n) sort(n.begin(),n.end(),greater<ll>())
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
using namespace std ;
int remove_min(int a,int b,string str,int n){  // function to calculate min for two given char  
stack<char>s ; 
char n1  = (a+48) ;                    //converting the integers to char
char n2 = (b+48) ;   
for (int i = 0; i < n; i++)
{
    if(s.empty() && (str[i]==n1 || str[i]==n2)){
        s.push(str[i]) ; 
    }
    else if(!s.empty()){
        if(s.top()==n1 && str[i]==n2){      //using stack to find the longest possible alt seq
            s.push(str[i]) ; 
        }
        else if(s.top()==n2 && str[i]==n1){
            s.push(str[i]) ; 
        }
    }
   
}
 return n - s.size() ;          // unused/(removed) = total length - length of alt seq ;

}
int main(){
string s;  
int n  ; 
cin>>n ; 
cin>>s ;                       // input in string format
int ans  = INT_MAX ;           // declaring ans with max possible value as we want to find min
for (int i = 0; i <=2; i++)
{
    for (int j = i+1; j <=3; j++)
    {
        ans = min(ans,remove_min(i,j,s,n)) ;   // checking all possible alternating combinations
    }
}
cout<<ans ;  
}
