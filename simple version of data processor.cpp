#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;


//函数模块
//求和
double Sum(const vector<double>& a){
  int sum = 0;
  for(int x:a){
    sum += x;
  }
  return sum;
}

//均值
double Meanvalue(const vector<double> &a){
  int sum = 0;
  double meanvalue = 0;
  int steps = 0;
  for(int x:a){
    steps++;
    sum += x;
  }
 meanvalue = (double)sum / steps;
 return meanvalue;
}




//方差
double Variance(const vector<double> &a){

}


//最值
double MaxMin(const vector<double> &a){

}



int main(){



  //输入模块
 double n = 0;
  cout<<"请问需要输入多少个数据"<<endl;
  cin>>n;
  if(n <= 0){
    cout<<"非法输入！"<<endl;
    return 1;
  }
vector<double>  a(n);
  cout<< "请依次输入数据"<<endl;
   for(int i = 0;i < n;i++){
    cin >> a[i];
   }
   cout<<"输入结果如下"<<endl;
   for(int i = 0;i < n;i++){
    cout << a[i] <<" "<<endl;
   }
cout<<"按下任意键继续"<<endl;




   //功能菜单
int number;
   cout<<"输入对应的数字以实现对应功能"<<endl;
cout<<R"(
========
 1 求和
 2 均值
 3 方差
 4 最值
 0 退出
========
)";


//判断模块
while(true){
cin>>number;
if(number == 0){
  cout<<"程序已退出"<<endl;
  return 1;
}
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

}

case 4:{

}



default:{
  cout<<"该功能不存在,请重新输入"<<endl;

}
  break;
  }
}

   return 0;
  }
