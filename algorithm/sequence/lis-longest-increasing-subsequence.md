# LIS\(Longest Increasing Subsequence\)

## 1 . Lower Bound

 `수열 (10, 20, 50, 40, 70)` 이 있다고 가정 할 때,

빈 vector 하나를 생성하여 수열의 수를 차례대로 하나씩 삽입하되, vector의 맨 마지막 수가 넣을 수 보다 큰 경우 넣을 수의 lower bound로 탐색하고 그 자리를 대신하여 수를 넣어준다. 

1. 10을 삽입한다. \(10\)
2. 20을 삽입한다. \(10, 20\)
3. 50을 삽입한다.  \(10, 20, 50\)
4. vector의 맨 끝자리 숫자인 50이 40보다 큰 수이므로 40의 lower bound를 탐색하여 그 수를 대신하여 40을 넣어준다. \(10, 20, 40\)
5. 70을 삽입한다. \(10, 20, 40, 70\)

vector의 길이인 4가 수열의 최장 부분 수열의 길이가 된다.

이것이 왜 이렇게 되는지는 종이에 하나씩 적어보면 진짜 이 방법을 생각한 사람은 개천재라고 생각할 것이다.. 

이 방법에는 단점이 있는데 최장 부분 수열의 길이는 알 수 있지만 구성하는 수들은 알 수 없다. lower bound로 더 가능성있는 수들로 vector를 채워나가기 때문에 그 수들을 최장 부분 수열을 구성하는 수라고 볼 수 없다. 그냥 몇 번 적어보면 이해된다. 

장점은 O\(N\*logN\)이고 구현하기 편하다.

```cpp
#include<stdio.h>
#include<vector>
using namespace std;
int main(){
 int n,temp;
 vector<int> a,lis;
 lis.push_back(-9999);//대충 문제에서 제일 짝은 수 끼워넣어라
 scanf("%d",&n);
 for(int i =1;i<=n;i++){
   scanf("%d",&temp);
   a.push_back(temp);
 }
vector<int>::iterator itr,temp_itr;
for(itr=a.begin();itr<=a.end();itr++)
{
  if(lis.back()<*itr)
  lis.push_back(*itr);
  else
  {temp_itr=lower_bound(lis.begin(),lis.end(),*itr);
  *temp_itr=*itr;}
}
printf("%lu",lis.size()-1);
return 0;
}
```

## 2. Index Tree

나도 모름

