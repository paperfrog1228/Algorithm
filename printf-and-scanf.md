---
description: c에서 printf와 scanf에 대해서 배웠다. 쉬운 내용은 다 지웠다.
---

# printf & scanf

## printf

```cpp
long long a;
printf("%lld",a); //lld는 long long 타입을 출력할 때 사용한다
```

```cpp
int a;
printf("%d %x",a,a);
printf("%d %o",a,a);
```

## scanf

scanf의 리턴 값은 입력 받은 인자의 개수이다.

그래서 입력 값이  
1 2  
3 4  
5 6  
같이 2개씩 주는 경우 다음과 같은 코드로 파일의 끝까지 입력 받을 수 있다.

```cpp
while(scanf("%d %d",&a,&b)==2);
```

scanf는 공백과 줄바꿈의 입력은 무시한다. 그러나 %c는 다 받는다.  
그래서 %c로 입력 받을 경우 입력 형태에 맞춰서 scanf를 사용하면 된다.  
입력 값이  
A B C  
D E F  
같은 경우 다음과 같은 코드로 입력 받을 수 있다.

```cpp
scanf("%c %c %c\n",&x,&y,&z);
```

%\[ \]를 쓸 경우 안의 문자가 나올 때까지 입력을 받고 %\[^ \]를 쓸 경우 안의 문자가 아닐 때 까지 입력 받음

```cpp
char str[20];
scanf("%[123]",str);//3512345 입력 할 경우
printf("%s",str);//35123으로 출력함
```

