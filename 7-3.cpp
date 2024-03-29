/*
7-3 岩洞施工 （20 分）
要将一条直径至少为 1 个单位的长管道水平送入地形复杂的岩洞中，究竟是否可能？下面的两幅图分别给出了岩洞的剖面图，深蓝色的折线勾勒出岩洞顶部和底部的轮廓。图 1 是有可能的，绿色部分显示直径为 1 的管道可以送入。图 2 就不可能，除非把顶部或底部的突出部分削掉 1 个单位的高度。

fig.JPG

本题就请你编写程序，判断给定的岩洞中是否可以施工。

输入格式：
输入在第一行给出一个不超过 100 的正整数 N，即横向采样的点数。随后两行数据，从左到右顺次给出采样点的纵坐标：第 1 行是岩洞顶部的采样点，第 2 行是岩洞底部的采样点。这里假设坐标原点在左下角，每个纵坐标为不超过 1000 的非负整数。同行数字间以空格分隔。

题目保证输入数据是合理的，即岩洞底部的轮廓线不会与顶部轮廓线交叉。

输出格式：
如果可以直接施工，则在一行中输出 Yes 和可以送入的管道的最大直径；如果不行，则输出 No 和至少需要削掉的高度。答案和数字间以 1 个空格分隔。

输入样例 1：
11
7 6 5 5 6 5 4 5 5 4 4
3 2 2 2 2 3 3 2 1 2 3
输出样例 1：
Yes 1
输入样例 2：
11
7 6 5 5 6 5 4 5 5 4 4
3 2 2 2 3 4 3 2 1 2 3
输出样例 2：
No 1
考场数据：
分数	通过数	提交数	通过率
20	455	2449	0.19
做题手记：
通过率算很高的了，没坑。
*/
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
using namespace std;
int main(){
	int n,h,h1=1000,h2=-1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>h;
		if(h1>h)h1=h;
	}
	for(int i=0;i<n;i++)
	{
		cin>>h;
		if(h2<h)h2=h;
	}
	if(h1>h2)cout<<"Yes "<<h1-h2;
	else cout<<"No "<<h2-h1+1;
	return 0;			
}