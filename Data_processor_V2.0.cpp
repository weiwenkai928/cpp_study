#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <windows.h>
#include <limits>
using namespace std;


//函数模块
//求和
    double Sum(const vector<double>& a){
  double sum = 0;
for(double x:a){
    sum += x;
  }
  return sum;
}

//均值
     double Meanvalue(const vector<double> &a){
   double sum = 0;
  double meanvalue = 0;
int steps = 0;
  for(double x:a){
    steps++;
    sum += x;
  }
 meanvalue = (double)sum / steps;
 return meanvalue;
}




//方差
     double Variance(const vector<double> &a){
  double variance = 0;
double sum = 0;
double meanvalue = 0;
  int steps = 0;
  double part = 0;
  for(double x:a){
    steps++;
    sum += x;
  }
 meanvalue = (double)sum / steps;
 double ssum = 0;
 for(double x : a){
    part = (x - meanvalue) * (x - meanvalue);
    ssum += part;
 }
  variance = ssum / steps;
  return variance;
}

int main(){ 
    cout<<"欢迎使用数据分析系统"<<endl;
SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);


  //输入模块
 int n = 0;
 vector<double>a;
 while(true){
  cout<<"请问需要输入多少个数据"<<endl;
  if( !(cin>>n) || n <= 0){
    cout<<"非法输入！请重新输入"<<endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
     continue;
  }
  a.assign(n, 0);
  cout<< "请依次输入数据"<<endl;
   for(int i = 0;i < n;i++){
    cin >> a[i];
   }
   cout<<"输入结果如下"<<endl;
   for(int i = 0;i < n;i++){
    cout << a[i] <<" "<<endl;
     }
     break;
    }   
   
 




   //功能菜单
int number;
   cout<<"输入对应的数字以实现对应功能"<<endl;
cout<<R"(
========
 1 求和
 2 均值
 3 方差
 4 最值
 5 排序
 0 退出
========
)";


//判断模块
while(true){//==========================

if(!(cin>>number)){ 
    if(  number < 0 || number > 5){
      cout<<"非法输入！请重新输入"<<endl;
     cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
continue;
  }
}

    //============================
    switch (number)
{
case 1:{
    double result = Sum(a);
   cout<<"求和为 "<<result<<endl;
  break;

}

case 2:{
   double result =  Meanvalue(a);
  cout<<"均值为 "<<result<<endl;
 break;

}

case 3:{
    double result = Variance(a);
   cout<<"方差为 "<<result<<endl;
break;
}

case 4:{//最值标准库
      double resultmax = *max_element(a.begin(), a.end());
     double resultmin = *min_element(a.begin(), a.end());
    cout<<"最大值为 "<<resultmax<<endl;
   cout<<"最小值为 "<<resultmin<<endl;
  break;
}

case 5:{//排序标准库
       sort(a.begin(), a.end());
      cout <<"排序结果为 "<<endl;
     for(size_t i = 0;i < a.size();i++){
    cout << a[i] <<" "<<endl;
        }
   break;
    }


default:{
  cout<<"该功能不存在,请重新输入"<<endl;
  break;
    }
   }
 }//==========================
   return 0;
    }
