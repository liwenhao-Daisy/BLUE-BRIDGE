//#include <stdio.h>
//02只需要在01的基础上改动两个符号就好 
//int main(){
//	int g,A,B;
//	int count=0;
//	printf("请输入三个数 :");
//	scanf("%d,%d,%d ",g,A,B);
//	if(A%g==0&&B%g==0)count++;
//	printf("")
//	return 0;
//}


//#include <iostream>/*求与其大于1的公约数*/ 
//#include<algorithm>
//using namespace std;
//
//int gcd(int a,int b){
//	return b? gcd(b,a%b):a;
//	
//}
//int main(){
//	int count =0;
//	for(int i=1;i<=2021;i++)
//	   if(gcd(i,2021)>1)count++;//此处就是改动的地方 
//	cout<<count<<endl;
//	return 0;
//}

//01
//#include <iostream>/*求与其互质的数1到2020*/ 
//#include<algorithm>
//using namespace std;
//
//int gcd(int a,int b){
//	return b? gcd(b,a%b):a;
//	
//}
//int main(){
//	int count =0;
//	for(int i=1;i<=2020;i++)
//	   if(gcd(i,2020)>1)count++;
//	cout<<count<<endl;
//	return 0;
//}

//03----有多少正整数是2020的约数 
//#include<stdio.h>
//#include <iostream>
//using namespace std;
//int main(){
//	int sum=0;
//	int x=2020;
//	for(int i=1;i<=x;i++)
//	//	if(x==(x/i*i)*x) //---错误原因在这个式子 
//	    if(x==x/i*i)//----这是题目中所给的条件 ！！！ 
////	      if(x/i!=i) -----写这几行只是礼貌表示一下，其实没用 
////	        sum+=1;//注意一下这里不是2，而是1 
////	      else
//		    sum++;
//	
//	 cout<<sum<<endl;
//	return 0;
//}
//int main(){
//	int sum=0;
//	int x=2020;
//	for(int i=1;i<=x;i++){
//	//	if(x==(x/i*i)*x) //---错误原因在这个式子 
//	    if(x==x/i*i)
//	      if(x/i!=i)
//	        sum+=2;
//	      else
//		    sum++;
//	}
//	printf("%d",sum);
//	return 0;
//}

//04-----很不错哈哈哈第一个用C++写出来的程序 
//#include<iostream>
//
//using namespace std;
//int main(){
//	int sum=0;
//	int x=2020;
//	for(int i=1;i<=x;i++)
//	   if(i%4==0&&i%6==0) sum++;
//	cout<<sum<<endl;
//	return 0;
//}

//单位换算
//对于这一类题需要熟即计算机的换算关系

//进制转换
//数据结构：记清楚其中的关系，套用即可，注意它根节点从哪里开始，是否需要减一
//N0=N2+1;


//----大题编程阶段
//01----回文日期
//我们只要 枚举日期的后四位，整个日期便可以推出来 
//#include <bits/stdc++.h>
//#include<iostream>
//#include<cstring>
//#include <algorithm>
//
//using namespace std;
//
//int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//bool check(int date)
//{
//    int year = date / 10000;
//    int month = date % 10000 / 100;
//    int day = date % 100;
//
//    if (!month || month >= 13 || !day) return false;
//
//    if (month != 2 && day > months[month]) return false;
//    if (month == 2)
//    {
//        bool leap = year % 4 == 0 && year % 100 || year % 400 == 0;
//        if (day > 28 + leap) return false;
//    }
//
//    return true;
//}
//
//int main()
//{ 
//    int date1, date2;
//    cin >> date1 >> date2;
//
//    int res = 0;
//    for (int i = 0; i < 10000; i ++ )
//    {
//        int x = i, r = i;
//        for (int j = 0; j < 4; j ++ ) r = r * 10 + x % 10, x /= 10;
//
//        if (r >= date1 && r <= date2 && check(r)) res ++ ;
//    }
//
//    printf("%d\n", res);
//    return 0;
//}

//using namespace std;
//
//int a,b;
//long long cnt=0;
//int days[]={-1,31,29,31,30,31,30,31,31,30,31,30,31};
//int main(){
//	scanf("%d %d ",&a,&b);
//	for(int m=1;m<=12;m++){
//		for (int d=1;d<=days[m];d++){
//			int year=1000*(d%10)+100*(d/10)+10*(m%10)+m/10;
//			int data=10000*year+100*m+d;
//			if(data>=a&&data<=b)cnt++;
//		}
//	}
//	cout<<cnt<<endl;
//	return 0;
//}

//02谷歌的招聘
//遍历枚举连续子串，找到第一个质数输出。
//#include <iostream>
//#include <unordered_map>
//#include <algorithm>
//#include <vector>
//#include <string>
//using namespace std;
//
//const int MAX_L = 1010;
//
//
//unordered_map<int, bool> isNotPrime;
//vector<int> primes;
//
//void GetPrime(int n) {
//    for (int i = 2; i < n; i++) {
//        if (isNotPrime[i] == false) {
//            primes.push_back(i);
//            for (int j = i + i; j < n; j += i) {
//                isNotPrime[j] = true;
//            }
//        }
//    }
//}
//
//bool IsPrime(int num) {
//    for (int i = 0; primes[i] * primes[i] <= num; i++) {
//        if (num % primes[i] == 0) return false;
//    }
//    return true;
//}
//
//int main() {
//    int l, k;
//    string str;
//    cin >> l >> k >> str;
//    GetPrime(40000);
//    int flag = false;
//    for (int i = 0; i + k <= str.length(); i++) {
//        int num = stoi(str.substr(i, k));
//        if (IsPrime(num)) {
//            printf("%s\n", str.substr(i, k).c_str());
//            flag = true;
//            break;
//        }
//    }
//    if (!flag) puts("404");
//    return 0;
//}


//03回文日期2.0版本
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
//bool check(int date) //判断日期是否合法
//{
//    int year = date / 10000;
//    int month = date % 10000 / 100;
//    int day = date % 100;
//    if(!day || month < 0 || month > 12 ) return false;
//    if(month != 2 && day >months[month]) return false;
//    if(month == 2)
//    {
//        if((year%4==0&&year%100!=0)||(year%400==0)) //闰年特判
//        {
//            if(day > 29) return false;
//        }
//        else 
//        {
//            if(day > 28) return false;
//        }
//    }
//    return true;
//}
//bool check1(string s)  //判断是否是回文日期
//{
//    int len = s.size();
//    for(int i = 0, j = len - 1; i < j ; i++,j--)  //双指针
//    {
//        if(s[i] != s[j]) return false;
//    }
//    return true;
//}
//bool check2(string s)  //判断是否是ABABBABA 型的回文日期
//{
//    if(check1(s))  //首先该日期要满足回文格式
//    {
//       if(s[0]!=s[2] || s[1]!= s[3] || s[0] == s[1]) return false;
//       return true;
//    }
//}
//int main()
//{
//    int date,flag=0;
//    cin>>date;
//    for(int i = date + 1; ;i++)
//    {
//        if(check(i))
//        {
//            string s = to_string(i);
//            if(check1(s)&&!flag)   //输出回文日期
//            {
//                cout<<i<<endl;
//                flag = 1;  //标记一下，避免多次输出
//            }
//            if(check2(s))  //输出ABABBABA 型的回文日期
//            {
//                cout<<i<<endl;
//                return 0;
//            }
//        }
//    }
//    return 0;
//}

//04----ISBBN号码 
//我的解题思想完全对上啦，哈哈哈哈哈 
//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//string s,a;
//int main(){
//	cin>>s;
//	a=s;   //目的是为了最后的对比 
//	int sum=0;
//	for(int i=0,j=1;j<=9;++i)
//	   if(s[i]!='-')
//	     sum+=(s[i]-'0')*j++; //此处是转换为int类型 s='5' int b=s-'0';则b=5 
//	if(sum%11==10)
//	  s[12]='x';
//	else s[12]=sum%11+'0';
//	
//	if (s==a)puts("right");
//	else
//	cout<<s<<endl;
//	return 0;
//}

//05日期计算

//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//int months[13] = {//0为占位符 
//    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
//};
//
//int is_leap(int year, int month) //判断闰年
//{
//    if(year % 400 == 0 || (year % 4 == 0 && year % 100)) return 1;
//    return 0;
//}
//
//int get_days(int year, int month) //求某年某月有多少天
//{
//    if(month == 2) return months[month] + is_leap(year, month);//是二月返回天数和是闰年，如果是闰年2月份+一天 
//    return months[month];//不是2月则直接返回天数 
//}
//
//int main()
//{
//    int y, d;
//    scanf("%d%d", &y, &d);//年和一个整数 
//
//    int days = 0; //统计已经过了多少天
//    for(int month = 1; month <= 12; month ++ )//枚举月份 
//    {
//        for(int day = 1; day <= get_days(y, month); day ++ ) //枚举这个月的每一天
//            if( ++ days == d) 
//                printf("%d\n%d\n", month, day);       
//    }
//    return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//int main()
//{
//    int y,d;
//    cin>>y>>d;
//    if(y%4==0&&y%100!=0||y%400==0)a[2]=29;else a[2]=28;
//    int x=0;
//    while(d>0){
//        if(d-a[x]<=0)break;
//        else{
//            d-=a[x];
//            x++;
//        }
//    }
//    cout<<x<<'\n'<<d;
//}

//#include <iostream>
//
//using namespace std;
//
//int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//
//// 闰年计算函数
//int leapyear(int year) {
//    return ((year%4 == 0 && year%100 != 0) || year%400 == 0) ? 1 : 0;
//}
//
//int main()
//{
//    int y, d, month=0, day, i;
//
//    // 输入数据
//    cin >> y >> d;
//
//    // 计算月与日
//    days[1] += leapyear(y);
//    i = 0;
//    while(d > 0) {//此处的while循环很赞 
//        if(d <= days[i]) {
//            month = i + 1;
//            day = d;
//            break;
//        } else {
//            d -= days[i];
//            i++;
//        }
//    }
//
//    // 输出结果
//    cout << month << endl << day << endl;
//
//    return 0;
//}

//07时间显示
//#include<iostream>
//using namespace std;
//
//typedef long long LL;
//
//int main()
//{
//    LL tim;
//    scanf("%lld",&tim);
//
//    tim /= 1000;//毫秒换算成秒
//
//    int hour  = 0, min = 0, sec = 0;
//    hour = tim / 3600 % 24;//模24代表什么啊？ 
//    min = tim / 60 % 60;
//    sec = tim % 60;
//
//    printf("%02d:%02d:%02d\n",hour , min , sec);
//
//    return 0;
//}

//08日期
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int day[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
string week[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

int main()
{
    int m,d;
    cin >> m >> d;

    if (m == 4) 
    {
        cout << week[(d - 9) % 7];   //因为九号是星期一 
    }
    else
    {
        int sum = d + 21;//加上四月份剩余的21天 
        for (int i = 5; i < m; i ++ )
            sum += day[i];//累加后面的天数 

        cout << week[sum % 7]<<endl;
    }
    return 0;
}

//09静静的推荐
 


