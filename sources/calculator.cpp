#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  cout<<"For taking simultanrously 5 courses, Chinese, Math, English, World History, Spanish";
  cout<<endl<<"mind the order"<<endl;
  double c,m,e,wh,s,sum,final;
  cin>>c>>m>>e>>wh>>s;
  sum=c+m+e+wh+0.5*s;
  final=sum/4.5;
  cout<<setprecision(2)<<final;
  return 0;
}
