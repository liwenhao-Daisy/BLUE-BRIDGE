//#include <stdio.h>
//02ֻ��Ҫ��01�Ļ����ϸĶ��������žͺ� 
//int main(){
//	int g,A,B;
//	int count=0;
//	printf("������������ :");
//	scanf("%d,%d,%d ",g,A,B);
//	if(A%g==0&&B%g==0)count++;
//	printf("")
//	return 0;
//}


//#include <iostream>/*���������1�Ĺ�Լ��*/ 
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
//	   if(gcd(i,2021)>1)count++;//�˴����ǸĶ��ĵط� 
//	cout<<count<<endl;
//	return 0;
//}

//01
//#include <iostream>/*�����以�ʵ���1��2020*/ 
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

//03----�ж�����������2020��Լ�� 
//#include<stdio.h>
//#include <iostream>
//using namespace std;
//int main(){
//	int sum=0;
//	int x=2020;
//	for(int i=1;i<=x;i++)
//	//	if(x==(x/i*i)*x) //---����ԭ�������ʽ�� 
//	    if(x==x/i*i)//----������Ŀ������������ ������ 
////	      if(x/i!=i) -----д�⼸��ֻ����ò��ʾһ�£���ʵû�� 
////	        sum+=1;//ע��һ�����ﲻ��2������1 
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
//	//	if(x==(x/i*i)*x) //---����ԭ�������ʽ�� 
//	    if(x==x/i*i)
//	      if(x/i!=i)
//	        sum+=2;
//	      else
//		    sum++;
//	}
//	printf("%d",sum);
//	return 0;
//}

//04-----�ܲ����������һ����C++д�����ĳ��� 
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

//��λ����
//������һ������Ҫ�켴������Ļ����ϵ

//����ת��
//���ݽṹ����������еĹ�ϵ�����ü��ɣ�ע�������ڵ�����￪ʼ���Ƿ���Ҫ��һ
//N0=N2+1;


//----�����̽׶�
//01----��������
//����ֻҪ ö�����ڵĺ���λ���������ڱ�����Ƴ��� 
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

//02�ȸ����Ƹ
//����ö�������Ӵ����ҵ���һ�����������
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


//03��������2.0�汾
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
//bool check(int date) //�ж������Ƿ�Ϸ�
//{
//    int year = date / 10000;
//    int month = date % 10000 / 100;
//    int day = date % 100;
//    if(!day || month < 0 || month > 12 ) return false;
//    if(month != 2 && day >months[month]) return false;
//    if(month == 2)
//    {
//        if((year%4==0&&year%100!=0)||(year%400==0)) //��������
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
//bool check1(string s)  //�ж��Ƿ��ǻ�������
//{
//    int len = s.size();
//    for(int i = 0, j = len - 1; i < j ; i++,j--)  //˫ָ��
//    {
//        if(s[i] != s[j]) return false;
//    }
//    return true;
//}
//bool check2(string s)  //�ж��Ƿ���ABABBABA �͵Ļ�������
//{
//    if(check1(s))  //���ȸ�����Ҫ������ĸ�ʽ
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
//            if(check1(s)&&!flag)   //�����������
//            {
//                cout<<i<<endl;
//                flag = 1;  //���һ�£����������
//            }
//            if(check2(s))  //���ABABBABA �͵Ļ�������
//            {
//                cout<<i<<endl;
//                return 0;
//            }
//        }
//    }
//    return 0;
//}

//04----ISBBN���� 
//�ҵĽ���˼����ȫ������������������ 
//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//string s,a;
//int main(){
//	cin>>s;
//	a=s;   //Ŀ����Ϊ�����ĶԱ� 
//	int sum=0;
//	for(int i=0,j=1;j<=9;++i)
//	   if(s[i]!='-')
//	     sum+=(s[i]-'0')*j++; //�˴���ת��Ϊint���� s='5' int b=s-'0';��b=5 
//	if(sum%11==10)
//	  s[12]='x';
//	else s[12]=sum%11+'0';
//	
//	if (s==a)puts("right");
//	else
//	cout<<s<<endl;
//	return 0;
//}

//05���ڼ���

//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//int months[13] = {//0Ϊռλ�� 
//    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
//};
//
//int is_leap(int year, int month) //�ж�����
//{
//    if(year % 400 == 0 || (year % 4 == 0 && year % 100)) return 1;
//    return 0;
//}
//
//int get_days(int year, int month) //��ĳ��ĳ���ж�����
//{
//    if(month == 2) return months[month] + is_leap(year, month);//�Ƕ��·��������������꣬���������2�·�+һ�� 
//    return months[month];//����2����ֱ�ӷ������� 
//}
//
//int main()
//{
//    int y, d;
//    scanf("%d%d", &y, &d);//���һ������ 
//
//    int days = 0; //ͳ���Ѿ����˶�����
//    for(int month = 1; month <= 12; month ++ )//ö���·� 
//    {
//        for(int day = 1; day <= get_days(y, month); day ++ ) //ö������µ�ÿһ��
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
//// ������㺯��
//int leapyear(int year) {
//    return ((year%4 == 0 && year%100 != 0) || year%400 == 0) ? 1 : 0;
//}
//
//int main()
//{
//    int y, d, month=0, day, i;
//
//    // ��������
//    cin >> y >> d;
//
//    // ����������
//    days[1] += leapyear(y);
//    i = 0;
//    while(d > 0) {//�˴���whileѭ������ 
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
//    // ������
//    cout << month << endl << day << endl;
//
//    return 0;
//}

//07ʱ����ʾ
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
//    tim /= 1000;//���뻻�����
//
//    int hour  = 0, min = 0, sec = 0;
//    hour = tim / 3600 % 24;//ģ24����ʲô���� 
//    min = tim / 60 % 60;
//    sec = tim % 60;
//
//    printf("%02d:%02d:%02d\n",hour , min , sec);
//
//    return 0;
//}

//08����
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
        cout << week[(d - 9) % 7];   //��Ϊ�ź�������һ 
    }
    else
    {
        int sum = d + 21;//�������·�ʣ���21�� 
        for (int i = 5; i < m; i ++ )
            sum += day[i];//�ۼӺ�������� 

        cout << week[sum % 7]<<endl;
    }
    return 0;
}

//09�������Ƽ�
 


