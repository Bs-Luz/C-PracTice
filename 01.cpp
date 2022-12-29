//#include <iostream> // #include는 포함 시킨다는것으로 <iostream>을 포함시키겠다는 뜻이다
//#include <bitset> //비트연산자를 사용하기 위해 추가
//#define PI 3+2; //#은 컴파일러에 가기 전에 처리되기 때문에 전처리 한다
//using namespace std; // 라이브러리에 있는 std라는 함수를 사용하겠다고 선언
#include <iostream> 
#include <bitset> 
#define PI 3+2; 
using namespace std;
/*int main() // int는 무슨 자료형이냐 main이라는 변수를 정수형으로 선언한다 ()는 main의 변수를 비워둠

{
	//pi *r * r
	//pi = 3.14

	const int f = 1000; //상수는 변하지 않는 값이기 때문에 바로 값을 정해줘야 한다
						//float이나 int로 처리해도 되지만 오류를 막기 위해 변하지 않을 값은 상수로 처리해준다
	cout << f << endl;

	//int e;

	int a = 100; // int는 정수형으로 100.2같은 소수점은 삭제 시키고 100으로 인식한다
	//int = 32bit +- 20억,-10억~+10억
	float b = 0.2; // float는 소수 32bit
	char c = 'X'; // char은 문자형
	bool d = true; // 참 거짓을 판단하여 0,1로 출력함 true=1 , false=0 으로 표현
	//e = 999;

	//long e = 100; // long = 64bit
	//double f = 0.21568; // double = 64bit

	cout << "hello " << "World" << endl; // <<"hello woorld"<<와 <<"hello "<<"world"는 동일하게 나온다
	cout << a << endl; // endl;은 한 문단을 마무리하고 다음 문단으로 넘어간다는 뜻 즉 줄바꿈
	cout << b << endl; //cout은 모니터로 출력을 해준다는 뜻
	cout << c << endl;
	cout << d << endl;
	//cout << e << endl;

	a = 200;
	cout << a << endl;

	a = 300;
	cout << a << endl; //변수는 값이 바뀔 수 있다
	// 변수에 값을 할당해주지 않으면 컴파일러가 문제를 인식하여 오류를 알려주고 컴파일 되지 않는다
	// 그럼으로 변수에는 항상 값을 할당해줘야 하며 출력전에 할당해줘야 한다
	return 0;
}*/
// 한번에 주석 처리를 하고 싶을 경우 주석 처리 하고 싶은 범위를 정하고 ctrl + k + c 키를 누르면 된다
// 되돌릴 경우에는 ctrl + k + u 키를 누르면 된다
// /**/로도 주석 가능하며 /*이 시작된 부분부터 */끝나는 부분까지 주석처리가 된다

//계산기 만들기
//int main()
//{
//	bool a;
//	bool b;
//
//	cout << "1+1=" << 1 + 1 << endl; 이렇게만 입력해도 컴퓨터가 알아서 출력은 해줌
//	cin >> a;//cin은 우리가 컴퓨터에 입력을 해주겠다는 뜻
//	cin >> b;
//	cout << "1/1=" << a + b << endl;
//	//+,-,*,/,%등을 연산자라 함
//	//%는 나누기의 나머지를 계산해줌
//	//or a(참) 또는 b(거짓) = 참
//	//and a(참) and b(거짓) = 거짓
//	return 0;
//}
// 2진수로 표현한 1~10
// 00000001 <=> 1
// 00000010 <=> 2
// 2^0 * x + 로 계산

// 비트연산자
// &(and)
// |(or)

//int main() //int는 정수 자료형 main은 함수 ()값이 없다 main함수를 정수형으로 선언한다
//{
//	//int number = 100; // 이름짓기 _바를 제외하고 특수문자를 사용할 수 없다
//	//int apple_number = 100;//중간에 대문자를 섞어 구분을 해준다
//	//int appleNumber = 100; //대문자와 소문자는 다르게 인식한다
//	//int int = 100; //예약어에 등록되어 있는 이름은 사용하지 못한다 ex)int
//	//이름을 지을때 시작은 소문자로 한다(개발자들간의 룰이다)
//	//int appleNumber = 100;
//	//int number = 1;
//	//number += appleNumber;// number = number + appleNumber;가 +=로 표현될 수 있다
//	//number++; // number+1;은 ++로 표현될 수 있다
//	int number = 0;
//	/*cout << number << endl;
//	cout << number-- << endl;
//	cout << --number << endl;*/
//
//	//number += 100;
//	//bool t = true;
//	int i = 0;
//	bool t = i < 10000; //조건을 만들어줌
//	//cout << t << endl;
//	while(t) // 조건이 만족하는 한 무한하게 실행함(거짓일때는 실행 안됨)
//	{
//		i = i + 1; // i값을 지속적으로 더해주어 조건에 의해 빠져나올 수 있게 해줌
//		t = i < 10000; //조건을 한번 더 만들어줘야 무한루프에 빠지지 않고 빠져나올 수 있음
//		number += 1;
//	}
//	cout << number << endl;
//	/*number *= 100;
//	number /= 100;
//	number |= 100;
//	number &= 100;*/
//	//number=number+1;
//	//cout << number++ << endl;
//
//	//number = number + 1;
//	//cout << number<< endl; //cout << ++number << endl;
//
//	//cout << number << endl;
//	//number = number + 1; //cout << number++ << endl;
//	//number++;
//	//number += 1;
//	//number += 10;
//
//	//cout << ++number << endl;
//
//	//cout << number << endl;
//
//	//cout << number << endl;
//	//number += appleNumber;
//	//cout << number << endl;
//	//number = number + appleNumber;
//	//cout << number << endl;
//
//	//number++;
//	//cout << number << endl;
//	//++number;
//	//cout << number << endl;
//	//number = number + 1;
//	//cout << number << endl;
//	//number 값은 변수 이므로 연산 될때마다 계속 덮어씌워진다
//
//	/*const int a = 0b0001; // 0b는 bit로 표현하겠다라는 뜻
//	int b = 0b1000; //bit단위로 변수 입력
//	int d = (100 + 10) * 3;
//	int e = 100 + 10 * 3;
//	//const int c = a & b; // &(and)는 모두 같은 값이여야 참(1)이다 둘 중 하나라도 틀리면 0(거짓)이다
//	//const int c = a | b; // |(or)은 하나라도 같은 것이 있다면 참(1)이다 둘 중 하나라도 틀리면 0(거짓)이다
//	//const int c = ~b; // ~은 0을 1로 1을 0으로 바꿔줌
//	//const int c = b >> 1; // <<는 왼쪽으로 한칸 >>는 오른쪽으로 한칸 쉬프트(밀어낸다)
//	const int c = ~(b<<1); //연산순서를 명확하게 해주고 싶을때 ()씌워라
//	
//	//cout << a << endl;
//	cout << bitset<8>(a) << "," << bitset<8>(b) << endl;//32비트로 출력됨
//	cout << bitset <8>(c) << endl;
//	cout << d << "," << e << endl;*/
//	return 0;
//}

//int main()
//{//목적 : 10이라는 숫자를 8번을 곱해서 출력하기
//
//	/*int number = 10;
//	const int b = 10;
//
//	int count = 0;*/
//	//10000번하기
//	/*int count = 0;
//	do {
//		cout << "Hello World!" << endl;
//
//	} while (count++10);*/ // do while은 먼저 수행을 하고 조건을 확인
//	/*for (int count = 0; count < 10; count++) //단순 반복 연산 같은일을 할때 주로 사용
//	{
//		cout << "Hello World!" << endl;
//	}*/
//	//while (count++ < 10) //while은 조건을 확인하고 수행
//	//{
//	//	/*number = number * 10;
//	//	count += 1;*/
//	//	cout << "Hello World!" << endl;
//	//}
//
//	/*number = number * 10;
//	number = number * 10;
//	number = number * 10;
//	number = number * 10;
//	number = number * 10;
//	number = number * 10;
//	number = number * 10;
//	number = number * 10;*/
//
//	//cout << number << endl;
//
//	return 0;
//}

//for문
//int main()
//{
//	{//목적 : 1부터 100까지 더한 결과를 출력하기
//		int b = 0;
//		for (int i = 0; i <= 100; i+=1)
//		{
//
//			b = b + i;
//
//		}
//		cout << b << endl;
//		return 0;
//	}
//}
// 
//while문
//int main()
//{
//	int i = 0;
//	int b = 0;
//	while (i<100)
//	{
//		i += 1;
//		b = b + i;
//	}
//	cout << b << endl;
//	return 0;
//}

//do while문
//int main()
//{
//	int i = 0;
//	int b = 0;
//	do { 
//		i += 1;
//		b = b + i;
//	} while (i < 100);
//	cout << b << endl;
//		
//}

//별찍기

//int main()
//{
//	/*int b;
//	cin >> b;*/
//	
//	for (int i = 0; i < 5; i++)
//		
//		{
//		
//			for (int a = 0; a <= i; a++)
//			{
//				
//				cout << "*";
//			}
//			
//			cout << endl;
//
//			}
//	
//		
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c;
//
//	cin >> c;
//
//	while (a < c)
//	{
//		b = 0;
//		while (b <= a)
//		{
//			cout << "*";
//			b++;
//		}
//		cout << endl;
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int number = 0;
//	int number2 = 1;
//	int t;
//	t = number && number2;
//	t = number || number2;
//	cout << t << endl;
//	return 0;
//}

//if문(조건이 성립하면 1번 아니면 2번)
//과자가 1000원 이하일때만 구매하겠다
//int main()
//{
//	int goal = 2000;
//	const int price = 1500;
//	int money = 10000;
//
//	if (price > goal)
//	{
//		cout << "Buy" << endl;
//		
//		money = money - goal;
//
//	}
//	else
//	{
//		cout << "Go Home"<< endl;
//	}
//	
//	cout << "money:"<< money<<"원" << endl;
//	return 0;
//}

//switch문(케이스별로 정의를 내림)
//break;를 넣으면 다음 명령이 있어도 break;앞에 있는 명령이 수행되면 탈출한다
//break;는 switch에만 들어가는게 아니다 for문 등에도 들어갈 수 있다
//int main()
//{
//	int score = 80;
//	switch (score)
//	{
//	case 10:
//		cout << "BUY" << endl;
//		break;
//	case 50:
//		cout << "Go Home" << endl;
//		break;
//	case 90:
//		cout << "Go Home2" << endl;
//		break;
//	case 100:
//		cout << "Go Google" << endl;
//		break;
//	default:
//		cout << "Nothing" << endl;
//		break;
//	}
//	return 0;
//}
// 
//if else는 switch문과 동일한 기능을 할 수 있다
//int main()
//{
//	int score = 20;
//
//	if (score==10)
//	{
//		cout << "Buy" << endl;
//		
//		money = money - goal;
//
//	}
//	else if (score == 10)
//	{
//		cout << "Go Home" << endl;
//	}
//	
//	else
//	{
//		cout << "Nothing"<< endl;
//	}
//	
//	cout << "money:"<< money<<"원" << endl;
//	return 0;
//}

//조건에 연산자를 이용해 사용할 수 있다
//int main()
//{
//	int score = 90;
//	int mathScore = 90;
//
//	if (score == 10 && mathScore == 10)
//	{
//		cout << "Buy" << endl;
//	}
//	else if (score == 90 || mathScore == 90)
//	{
//		cout << "Go Home" << endl;
//	}
//
//	else
//	{
//		cout << "Nothing" << endl;
//	}
//
//	return 0;
//}

// continue는 다음 명령을 무시하고 계속 진행
//int main()
//{
//	int score = 100;
//	int mathScore = 0;
//	if (score == 100)
//	{
//		for (int i = 0; i < 100; i++)
//		{
//			cout << mathScore << endl;
//			if (++mathScore == 10)
//			{
//				break;
//			}
//
//		}
//		return 0;
//	}
//}

//continue는 다음 명령을 무시하고 다음 반복으로 넘어간다 !=로 간소화 할 수 있음
//int main()
//{
//	int score = 100;
//	int mathScore = 0;
//	if (score == 100)
//	{
//		for (int i = 0; i < 100; i++)
//		{
//			cout << mathScore << endl;
//			if (mathScore == 10)
//			{
//				continue;
//			}
//			++mathScore;
//		}
//	}
//}

//100이하의 홀수를 출력하기
//int main()
//{
//	int i = 0;
//	for (; i < 100; i++)//100보다 작을때까지 0~100까지 증감하는 조건문
//	{
//		if (i%2!=0)
////홀수를 판단하는 조건문
////2로 나눈 값은 모두 0이고 짝수이기 때문에
////나누었을때 0이 아닌값을 찾는 조건문
//		cout << i << endl;
//	}
//	return 0;
//}

//100이하의 짝수를 출력하기
//int main()
//{
//	int i = 0;
//	for (; i < 100; i++)//100보다 작을때까지 0~100까지 증감하는 조건문
//	{
//		if (i % 2 != 1)
//			//짝수를 판단하는 조건문
//			//2로 나눈 값은 모두 0이고 짝수이기 때문에
//			//나누었을때 1이 아닌값을 찾는 조건문
//			cout << i << endl;
//	}
//	return 0;
//}

//#include <iostream> 
//#include <bitset> 
//#define PI 3+2; 
//using namespace std; 

//int main()
//{
//	const int constPi = 3+2;
//	float a = 3*constPi;
//	
//	cout << a << endl;
//
//	float b = 3 * PI;
//
//	cout << b << endl;
//
//	return 0;
//}

//int main()
//{
//	int score = 100;
//	int mathScore = 0;
//
//	if (score == 100)
//	{
//		cout << "Great" << endl;
//		mathScore = score;
//	}
//	else if (score == 50)
//	{
//		mathScore = score * 2;
//	}
//	else
//	{
//		mathScore = score / 2;
//		cout << "Bad" << endl;
//	}
//
//	mathScore = (score == 100) ? score : (score == 50) ? score * 2 : score;
//
//		cout << mathScore << endl;
//	
//	return 0;
//}

//배열
//int main()
//{
//	int score1 = 100;
//	int score2 = 50;
//	int score3 = 10;
//
//	int score[3];
//	score[0]=100;
//	score[1] = 50;
//	score[2] = 10;
//
//	for(int  i =0; i<10000; i++)
//	{
//		score[i] = 1;
//	}
//	cout << score[0] << "," << score[1] << "," << score[2] << endl;
//
//	return 0;
//}

//int main()
//{
//	int score1 = 100;
//	int score2 = 50;
//	int score3;
//	score3 = 10;
//
//	int score[10];
//	cout << "Size:" << sizeof(score1) << endl;
//	cout << "Size:" << sizeof(score) << endl;
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout<<score[i] << endl;
//	}
//	for (int i = 5; i < 10; i++)
//	{
//		cout << score[i] << endl;
//	}
//	return 0;
//}

//A, B, C, D, E 다섯 과목의 평균 점수를 구하기,배열을 이용하기
//int main()
//{
//	int j = 0;
//	int score[5];
//
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> score[i];
//		j += score[i];
//		
//	}	
//	cout << j/5 << endl;
//	return 0;
//}

//int main()
//{
//	int j = 0;
//	int score[5];
//
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> score[i];
//		j += score[i];
//
//	}
//	cout << j << "," << j / 5 << endl;
//	return 0;
//}

//계산기 +,-,*,/,%
//연산자 우선 순위 무시하고 입력한 순서대로 계산
//100개까지 숫자 입력을 받을 수 있게
//100 + 10 = 종료하시겠습니까?(Y/N)
//Y라고 대답하면 프로그램 종료,
//N이라고 대답하면 다시 연산하도록
//int main()
//{
//	int num[99] = {};
//	int num1 = 0;
//	/*bool y = true;
//	bool n = false;*/
//	char a;
//	a = 0;
//	cout << "계산할 정수(최대 100개)와 연삭식을 입력하세요" << endl;
//
//	cin >> num1;
//
//	for (int i = 0; i < 100; i++)
//	{
//		cin >> num[num1];
//		if (a=='+')
//		{
//			num[num1] += num[num1];
//		}
//		else if (a == '-')
//		{
//			num[num1] -= num[num1];
//		}
//		else if (a == '*')
//		{
//			num[num1] *= num[num1];
//		}
//		else if (a == '/')
//		{
//			num[num1] /= num[num1];
//		}
//		else if (a == '%')
//		{
//			num[num1] %= num[num1];
//		}
//		else if(a=='=')
//		{
//			num[num1] = num[num1];
//		}
//		else
//		{
//			cout << "종료하시겠습니까?(Y/N)" << endl;
//		}
//		break;
//		/*cout << "종료하시겠습니까?(Y/N)" << endl;*/
//		cin >> a;
//	}
//	
//	return 0;
//}

//실습 01
//최대값
//3가지 정수를 받아서 최대값을 출력하는 함수

//int Max(int a, int b, int c)
//{
//	int m = a;
//
//	if (a < b)
//	{
//		m = b;
//	}
//	if (m < c)
//	{
//		m = c;
//	}
//	cout << m;
//	return m;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	
//	cin >> a >> b >> c ;
//
//	int k = Max(a, b, c);
//	cout << k << endl;
//
//	return 0;
//} //도움 받은거

//내가 한거
//int Max(int a, int b, int c)
//{
//	int m ;
//
//	if (a > b && a > c)
//	{
//		m = a;
//	}
//	else if (b > a && b > c)
//	{
//		m = b;
//	}
//	else
//	{
//		m = c;
//	}
//
//	return m;
//}//함수를 만들때에는 함수값을 출력해줄 새로운 변수를 선언해줘야 한다
////함수의 ()에는 입력받을 변수만 입력 가능하며 입력과 같은 자료형으로 각각 입력해줘야 한다
//
//int main()
//{
//	int a, b, c;
//	/*int a = 0;
//	int b = 0;
//	int c = 0;*/
//
//	cin >> a >> b >> c;
//
//	cout << Max(a,b,c) << endl;
//
//	return 0;
//}//초기화가 중요하다
////입력값이 잘 못 입력되면 쓰레기값이 나오고 지역변수가 초기화되지 않았다는 에러가 난다
//// cin >>a,b,c; 는 잘 못된 입력값이다 cin >> a>>b>>c;가 옳은 입력값이다
////위와같이 입력코드를 잘 못 입력할경우에도 지역변수가 초기화 되지 않았다는 에러가 난다

//실습 02
//2가지 정수를 받아서 변수에 값을 저장하고 값을 교체하는 함수
//A=100, B=50 -> A=50, B=100
// 
//int Swap(int A, int B)
//{
//	int C ;
//	
//	C = A;
//	A = B;
//	B = C;
//
//	cout << A << B << endl;
//
//
//	return C;
//새로운 변수라 아무것도 없는 상태인 C에 입력받은 A값을 저장해주고
//변수 A를 비운뒤 입력받은 B를 비워준다
//그 뒤 비워진 B에 C를 넣어주면 A와B는 바뀐다

//int main()
//{
//	int A, B;
//
//	cin >> A >> B;
//
//	cout << Swap(A, B)<< endl;
//
//	return 0;
//}

//실습 03
//어떤 정수를 받아서 각 자리의 합을 구하는 함수

//int Sum(int A)
//{
//	int B, C, D, F;
//	
//	B = A % 10;
//	C = (A % 100) / 10;
//	D = A / 100;
//	/*A%10 = B;
//	(A&100)/10 = C;
//	A / 100 = D;*/
//	
//	F = B + C + D;
//
//	return F;
//}
//
//int main()
//{
//	int A;
//
//	cout << Sum(A) << endl;
//	return 0;
//}

//int Sum(int A)
//{
//	int B = 0;
//
//	do {
//		B += A % 10;
//		A = A / 10;
//	} while (A > 0);
//
//	/*for (; A > 0; A)
//	{
//		B += A % 10;
//		A = A / 10;
//	}*/
//
//	//while (A > 0)
//	//{
//	//	B += A % 10;
//	//	//B+=C == B=B+C
//	//	A=A/10;
//	//}
//
//	return B;
//}
//
//int main()
//{
//	int A;
//	cin >> A;
//
//	cout <<Sum(A) << endl;
//
//	return 0;
//}

//실습 04
//주사위를 N번 던졌을 때 나오는 각 눈의 수를 출력하는 프로그램
//(주사위는 각면은 동일하다고 가정, 랜덤 함수를 사용)
//N = 1200번 => 1= 200번, 2= 200번, ... 6=200번;

#include <stdlib.h>
#include <time.h>

//rand함수와 rand함수를 정상적으로 구동시켜줄 srand(time(NULL))을 저장하고 있는 라이브러리

//int Dice(int N)
//{
//	srand(time(NULL));
//	//int Rand = rand();
//	//임의의 값을 리턴해주는 함수
//	//결과값이 1,7,13,19 이면 주사위 1
//	//주사위의 눈으로 매칭시킨다
//	int C,I, J, K, L, M, O;
//	C = 0;
//	I = 0;
//	J = 0;
//	K = 0;
//	L = 0;
//	M = 0;
//	O = 0;
//
//	for (int C = 0; C < N; C++)
//	{
//		int Rand = rand();
//
//		if (Rand % 6 == 1)
//		{
//			I++;
//		}
//		else if (Rand % 6 == 2)
//		{
//			J++;
//		}
//		else if (Rand % 6 == 3)
//		{
//			K++;
//		}
//		else if (Rand % 6 == 4)
//		{
//			L++;
//		}
//		else if (Rand % 6 == 5)
//		{
//			M++;
//		}
//		else
//		{
//			O++;
//		}
//	}
//	cout << I <<"," << J << "," << K << "," << L << "," << M << "," << O << endl;
//
//	return I,J,K,L,M,O;
//}
//
//int main()
//{
//	int N;
//
//	cin >> N;
//
//	cout << Dice(N) << endl;
//
//	return 0;
//}

//실습 05
//이자 계산기
//은행 예금 1억(X)을 저축했을 때 단리, 복리에 의한 이자가 얼마인지
//출력하는 프로그램
//단리 : 원금*이자율*기간
//복리 : (원금*이자율)*이자율
//입력 = 원금, 이자율, 기간

//void Dan(float A, float B, float C)
//{
//	float D,V;
//	D = A * B * C;
//	V = 0;
//
//	cout << A + D << "," << D << endl;
//
//	for (int n = 0; n < C; n++)
//	{
//		//V = A * B;
//		//A += V;
//		A += A * B;
//	}
//	
//	cout << A  << "," << V << endl;
//
//}
//int main()
//{
//	float A, B, C;
//	A, B, C = 0;
//
//	cin >> A >> B >> C;
//
//	Dan(A, B, C);
//	return 0;
//}

//실습 06
//팩토리얼 구하는 함수
//n!
//7!=>7x6x5x4x3x2x1
//3!=>3x2x1

//int Fack(int n)
//{
//	int k = 1; // 0에 아무리 곱해도 0이기 때문에 초기값은 1이 되어야 한다
//
//	for (int i = n; i > 0; i--)
//	//입력받은 수에서 1씩 줄어들며 곱하고 싶기 때문에
//	//변수 i에 입력받은 n을 대입해주고 n을 대입받은 i가 0이 될때까지 줄여주며 반복한다
//	{
//		k *= i;
//	//초기값 k에는 1이 저장되어 들어가고 i는 입력받은 값이 들어가서 곱해진 값이
//	//k에 저장되고 줄어든 i값이 k와 곱해지는걸 0이 될때까지 반복한다
//	}
//	
//	return k;
//}
//
//int main()
//{
//	int n = 0;
//
//	cin >> n;
//
//	cout << Fack(n) << endl;
//
//	return 0;
//}

//실습 07
//N@ = N+(N-1)...+1
//N@ = 7+6+5+4+3+2+1
//재귀함수 사용

//int factorial(int n)
//{	
//		if (n > 1)
//		{
//			return  n + factorial(n - 1);
//		}
//		else
//		{
//			return 1;
//		}
//	
//	return n;
//}
//
//int main()
//{
//	int n;
//	n = 0;
//
//	cin >> n;
//
//	cout << factorial(n);
//
//	return 0;
//}

//실습 08
//1,1,2,3,5,8,13,21
//F(N) = F(N-1)+F(N-2)
//재귀함수 구현

//int Fibonacci(int N)
//{
//	/*if (N <= 2)
//	{
//		return 1;
//	}
//
//	return Fibonacci(N - 1) + Fibonacci(N - 2);*/
//	//강사님이 알려주신 간단하고 직관적이게 코드를 줄일 수 있는 법
//	//if문은 else를 생략할 수 있다
//
//	if (N > 2)
//	{
//		return Fibonacci(N - 1) + Fibonacci(N - 2);
//	}
//	else if (N > 1)
//	{
//		return  1;
//	}
//	return N;
//}

//int main()
//{
//	int N = 0;
//
//	cin >> N;
//
//	cout << Fibonacci(N);
//
//	return 0;
//}

//실습 09
//2차원 배열

//int main()
//{
//	//int A = 100;
//	//int B = 50;
//
//	int Array1D[5] = {1,2,3,4,5};
//	int Array2D[5][5] = { 1,2,3,4,5 };
//	int k=1;
//	int l = 1;
//	for (int i = 0; i < 5; i++)
//	{
//		Array1D[i] = k;
//		k++;
//		cout << Array1D[i] << "";
//		//int C = Array1D[i];
//	}
//	cout << endl;
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			Array2D[j][j] = l;
//			l++;
//			cout << Array2D[j][j] << " ";
//		}
//		//cout << Array1D[i] << endl;
//
//		cout << endl;
//	}
//	
//	//cout << Array1D<< endl;/*<<" " << Array2D*/;
//
//	return 0;
//}

//실습 10
//피보나치 수열 재귀함수 사용하지 않고 구현
//프로그램의 수행시간 구하기

//int Fibonacci1(int N)
//{
//	int Num1 = 1;
//	int Num2 = 0;
//	int Num3 = 1;
//	
//	for (int i = 1; i < N; i++)
//	{
//		Num1 = Num2+Num3;
//		Num2 = Num3;
//		Num3 = Num1;
//	}
//	return Num1;
//}

#include <ctime>
//int main()
//{
//	int N;
//	N = 0;
//	
//	clock_t start, finish;
//	double duration;
//	start = clock();
//	cin >> N;
//	cout << Fibonacci1(N)<<endl;
//	//수행 시키고 싶은 코드
//	//cout<<Fibonacci(N)<<endl;
//	finish = clock();
//	duration = (double)(finish - start) / CLOCKS_PER_SEC;
//	cout << duration << "초" << endl;
//
//	return 0;
//}

//포인터

// 포인터를 이용해 A,B값을 스왑하라

//void Swap(int *A, int *B)
//{
//	int C = 0;
//
//	C = *A;
//	*A = *B;
//	*B = C;
//
//	return ;
//}
//
//int main()
//{
//	int I = 3;
//	int J = 10;
//	int *PtrA = &I;
//	int *PtrB = &J;
//	/*cout << "A: " << A << endl;
//	cout << "B: " << PtrB << endl;
//	cout << "B: " << *PtrB << endl;
//	*PtrB *= 10;
//	cout << "B: " << *PtrB << endl;
//	cout << "A: " << A << endl;*/
//	Swap(PtrA,PtrB);
//	cout << I << J;
//}

//실습10
//배열의 최소값 구하기

//int Findmin(int *Array ,int Size)
//{
//	int Min = Array[0];
//	
//	for (int i = 0; i < 5; i++)
//	{
//		if (Array[i] < Min)
//		{
//			Min = Array[i];
//		}
//
//	}
//	/*if (Array[0] < Array[1])
//	{
//		Min = Array[0];
//
//	}
//	if (Array[1] < Array[2])
//	{
//		Min = Array[1];
//
//	}
//	if (Array[2] < Array[3])
//	{
//		Min = Array[2];
//
//	}
//	if (Array[3] < Array[4])
//	{
//		Min = Array[3];
//
//	}
//	if (Array[4] < Array[5])
//	{
//		Min = Array[4];
//
//	}
//	if (Array[5] < Array[0])
//	{
//		Min = Array[5];
//	}	*/
//	
//	cout << Min << endl;
//
//	return Min;
//}
//
//int main()
//{
//	int Array[5] = { 36, 41, 50, 23, 6 };
//	int* PtrTemp = Array;
//	int Size = 0;
//
//	cout << Findmin(Array,5) << endl;
//
//}

//실습 11
//문자열을 역순으로 반환하는 함수 구현

//void Swap(char& A, char& B)
//{
//	char C = A;
//	A = B;
//	B = C;
//}
//
//char* Reverse(char* PtrCharacter, int Size)
//{
//	//	int C = 0;
//	//
//	//	C = *A;
//	//	*A = *B;
//	//	*B = C;
//	char Swap;
//	char Back = PtrCharacter[0];
//	char* PtrBack = &Back;
//
//
//	for (int i = 0; i < Size/2; i++)
//	{
//		
//		Swap = PtrCharacter[i];
//		PtrCharacter[i] = PtrCharacter[Size-1-i];
//		PtrCharacter[Size - 1 - i] = Swap;
//		//cout << Back <<endl;
//		//Back = PtrBack[i];
//		/*if (PtrBack[i] < Back)
//		{
//			Back = PtrBack[i];
//		}*/
//		//cout << "vv" << PtrCharacter << endl;
//	}cout << PtrCharacter << endl;
//	
//	return PtrCharacter;
//}
//
//int main()
//{
//	char A[5] = { 'A','B','C','D','E'};
//	char* PtrCharacter = A;
//	int Size = 0;
//	cout << A << endl;
//	
//	cout << Reverse(PtrCharacter,5) << endl;
//
//	return 0;
//}

//실습 12 - 데미지 계산기
//함수 호출 끝나고 체력이 닳도록
//데미지-방어력 = 체력, 그리고 DodgeRate로 공격을 회피


void TakeDamage(float *Health, float *Damage, float *Armor, float *DodgeRate)
{
	
	srand(time(NULL)); //한번만 호출
	int Rand = rand();//임의의 큰 수 반환
	double Pick = (double)Rand / RAND_MAX;

	int N = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{

		if (Pick < *DodgeRate)
		{
			
		}
		else if (*Damage < *Armor)
		{

		}
		else
		{
			*Health -= *Damage - *Armor;
		}
		cout << *Health << endl;
	}
	cout << *Health << endl;
	return;
}

int main()
{

	float Health, Damage, Armor, DodgeRate;
	Health = 1000;
	Damage = 50;
	Armor = 30;
	DodgeRate = 0.4;
	float* H = &Health;
	float* D = &Damage;
	float* A = &Armor;
	float* R = &DodgeRate;

	TakeDamage(H,D,A,R);
	cout << *H << endl;

	return 0;
}

int main()
{
	int A = 10000;
	int B = 100;

	int* PtrA = &A;
	int* PtrB = &B;
}