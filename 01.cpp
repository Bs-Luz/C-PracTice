//#include <iostream> // #include�� ���� ��Ų�ٴ°����� <iostream>�� ���Խ�Ű�ڴٴ� ���̴�
//#include <bitset> //��Ʈ�����ڸ� ����ϱ� ���� �߰�
//#define PI 3+2; //#�� �����Ϸ��� ���� ���� ó���Ǳ� ������ ��ó�� �Ѵ�
//using namespace std; // ���̺귯���� �ִ� std��� �Լ��� ����ϰڴٰ� ����
#include <iostream> 
#include <bitset> 
#define PI 3+2; 
using namespace std;
/*int main() // int�� ���� �ڷ����̳� main�̶�� ������ ���������� �����Ѵ� ()�� main�� ������ �����

{
	//pi *r * r
	//pi = 3.14

	const int f = 1000; //����� ������ �ʴ� ���̱� ������ �ٷ� ���� ������� �Ѵ�
						//float�̳� int�� ó���ص� ������ ������ ���� ���� ������ ���� ���� ����� ó�����ش�
	cout << f << endl;

	//int e;

	int a = 100; // int�� ���������� 100.2���� �Ҽ����� ���� ��Ű�� 100���� �ν��Ѵ�
	//int = 32bit +- 20��,-10��~+10��
	float b = 0.2; // float�� �Ҽ� 32bit
	char c = 'X'; // char�� ������
	bool d = true; // �� ������ �Ǵ��Ͽ� 0,1�� ����� true=1 , false=0 ���� ǥ��
	//e = 999;

	//long e = 100; // long = 64bit
	//double f = 0.21568; // double = 64bit

	cout << "hello " << "World" << endl; // <<"hello woorld"<<�� <<"hello "<<"world"�� �����ϰ� ���´�
	cout << a << endl; // endl;�� �� ������ �������ϰ� ���� �������� �Ѿ�ٴ� �� �� �ٹٲ�
	cout << b << endl; //cout�� ����ͷ� ����� ���شٴ� ��
	cout << c << endl;
	cout << d << endl;
	//cout << e << endl;

	a = 200;
	cout << a << endl;

	a = 300;
	cout << a << endl; //������ ���� �ٲ� �� �ִ�
	// ������ ���� �Ҵ������� ������ �����Ϸ��� ������ �ν��Ͽ� ������ �˷��ְ� ������ ���� �ʴ´�
	// �׷����� �������� �׻� ���� �Ҵ������ �ϸ� ������� �Ҵ������ �Ѵ�
	return 0;
}*/
// �ѹ��� �ּ� ó���� �ϰ� ���� ��� �ּ� ó�� �ϰ� ���� ������ ���ϰ� ctrl + k + c Ű�� ������ �ȴ�
// �ǵ��� ��쿡�� ctrl + k + u Ű�� ������ �ȴ�
// /**/�ε� �ּ� �����ϸ� /*�� ���۵� �κк��� */������ �κб��� �ּ�ó���� �ȴ�

//���� �����
//int main()
//{
//	bool a;
//	bool b;
//
//	cout << "1+1=" << 1 + 1 << endl; �̷��Ը� �Է��ص� ��ǻ�Ͱ� �˾Ƽ� ����� ����
//	cin >> a;//cin�� �츮�� ��ǻ�Ϳ� �Է��� ���ְڴٴ� ��
//	cin >> b;
//	cout << "1/1=" << a + b << endl;
//	//+,-,*,/,%���� �����ڶ� ��
//	//%�� �������� �������� �������
//	//or a(��) �Ǵ� b(����) = ��
//	//and a(��) and b(����) = ����
//	return 0;
//}
// 2������ ǥ���� 1~10
// 00000001 <=> 1
// 00000010 <=> 2
// 2^0 * x + �� ���

// ��Ʈ������
// &(and)
// |(or)

//int main() //int�� ���� �ڷ��� main�� �Լ� ()���� ���� main�Լ��� ���������� �����Ѵ�
//{
//	//int number = 100; // �̸����� _�ٸ� �����ϰ� Ư�����ڸ� ����� �� ����
//	//int apple_number = 100;//�߰��� �빮�ڸ� ���� ������ ���ش�
//	//int appleNumber = 100; //�빮�ڿ� �ҹ��ڴ� �ٸ��� �ν��Ѵ�
//	//int int = 100; //���� ��ϵǾ� �ִ� �̸��� ������� ���Ѵ� ex)int
//	//�̸��� ������ ������ �ҹ��ڷ� �Ѵ�(�����ڵ鰣�� ���̴�)
//	//int appleNumber = 100;
//	//int number = 1;
//	//number += appleNumber;// number = number + appleNumber;�� +=�� ǥ���� �� �ִ�
//	//number++; // number+1;�� ++�� ǥ���� �� �ִ�
//	int number = 0;
//	/*cout << number << endl;
//	cout << number-- << endl;
//	cout << --number << endl;*/
//
//	//number += 100;
//	//bool t = true;
//	int i = 0;
//	bool t = i < 10000; //������ �������
//	//cout << t << endl;
//	while(t) // ������ �����ϴ� �� �����ϰ� ������(�����϶��� ���� �ȵ�)
//	{
//		i = i + 1; // i���� ���������� �����־� ���ǿ� ���� �������� �� �ְ� ����
//		t = i < 10000; //������ �ѹ� �� �������� ���ѷ����� ������ �ʰ� �������� �� ����
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
//	//number ���� ���� �̹Ƿ� ���� �ɶ����� ��� ���������
//
//	/*const int a = 0b0001; // 0b�� bit�� ǥ���ϰڴٶ�� ��
//	int b = 0b1000; //bit������ ���� �Է�
//	int d = (100 + 10) * 3;
//	int e = 100 + 10 * 3;
//	//const int c = a & b; // &(and)�� ��� ���� ���̿��� ��(1)�̴� �� �� �ϳ��� Ʋ���� 0(����)�̴�
//	//const int c = a | b; // |(or)�� �ϳ��� ���� ���� �ִٸ� ��(1)�̴� �� �� �ϳ��� Ʋ���� 0(����)�̴�
//	//const int c = ~b; // ~�� 0�� 1�� 1�� 0���� �ٲ���
//	//const int c = b >> 1; // <<�� �������� ��ĭ >>�� ���������� ��ĭ ����Ʈ(�о��)
//	const int c = ~(b<<1); //��������� ��Ȯ�ϰ� ���ְ� ������ ()������
//	
//	//cout << a << endl;
//	cout << bitset<8>(a) << "," << bitset<8>(b) << endl;//32��Ʈ�� ��µ�
//	cout << bitset <8>(c) << endl;
//	cout << d << "," << e << endl;*/
//	return 0;
//}

//int main()
//{//���� : 10�̶�� ���ڸ� 8���� ���ؼ� ����ϱ�
//
//	/*int number = 10;
//	const int b = 10;
//
//	int count = 0;*/
//	//10000���ϱ�
//	/*int count = 0;
//	do {
//		cout << "Hello World!" << endl;
//
//	} while (count++10);*/ // do while�� ���� ������ �ϰ� ������ Ȯ��
//	/*for (int count = 0; count < 10; count++) //�ܼ� �ݺ� ���� �������� �Ҷ� �ַ� ���
//	{
//		cout << "Hello World!" << endl;
//	}*/
//	//while (count++ < 10) //while�� ������ Ȯ���ϰ� ����
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

//for��
//int main()
//{
//	{//���� : 1���� 100���� ���� ����� ����ϱ�
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
//while��
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

//do while��
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

//�����

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

//if��(������ �����ϸ� 1�� �ƴϸ� 2��)
//���ڰ� 1000�� �����϶��� �����ϰڴ�
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
//	cout << "money:"<< money<<"��" << endl;
//	return 0;
//}

//switch��(���̽����� ���Ǹ� ����)
//break;�� ������ ���� ����� �־ break;�տ� �ִ� ����� ����Ǹ� Ż���Ѵ�
//break;�� switch���� ���°� �ƴϴ� for�� ��� �� �� �ִ�
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
//if else�� switch���� ������ ����� �� �� �ִ�
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
//	cout << "money:"<< money<<"��" << endl;
//	return 0;
//}

//���ǿ� �����ڸ� �̿��� ����� �� �ִ�
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

// continue�� ���� ����� �����ϰ� ��� ����
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

//continue�� ���� ����� �����ϰ� ���� �ݺ����� �Ѿ�� !=�� ����ȭ �� �� ����
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

//100������ Ȧ���� ����ϱ�
//int main()
//{
//	int i = 0;
//	for (; i < 100; i++)//100���� ���������� 0~100���� �����ϴ� ���ǹ�
//	{
//		if (i%2!=0)
////Ȧ���� �Ǵ��ϴ� ���ǹ�
////2�� ���� ���� ��� 0�̰� ¦���̱� ������
////���������� 0�� �ƴѰ��� ã�� ���ǹ�
//		cout << i << endl;
//	}
//	return 0;
//}

//100������ ¦���� ����ϱ�
//int main()
//{
//	int i = 0;
//	for (; i < 100; i++)//100���� ���������� 0~100���� �����ϴ� ���ǹ�
//	{
//		if (i % 2 != 1)
//			//¦���� �Ǵ��ϴ� ���ǹ�
//			//2�� ���� ���� ��� 0�̰� ¦���̱� ������
//			//���������� 1�� �ƴѰ��� ã�� ���ǹ�
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

//�迭
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

//A, B, C, D, E �ټ� ������ ��� ������ ���ϱ�,�迭�� �̿��ϱ�
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

//���� +,-,*,/,%
//������ �켱 ���� �����ϰ� �Է��� ������� ���
//100������ ���� �Է��� ���� �� �ְ�
//100 + 10 = �����Ͻðڽ��ϱ�?(Y/N)
//Y��� ����ϸ� ���α׷� ����,
//N�̶�� ����ϸ� �ٽ� �����ϵ���
//int main()
//{
//	int num[99] = {};
//	int num1 = 0;
//	/*bool y = true;
//	bool n = false;*/
//	char a;
//	a = 0;
//	cout << "����� ����(�ִ� 100��)�� ������� �Է��ϼ���" << endl;
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
//			cout << "�����Ͻðڽ��ϱ�?(Y/N)" << endl;
//		}
//		break;
//		/*cout << "�����Ͻðڽ��ϱ�?(Y/N)" << endl;*/
//		cin >> a;
//	}
//	
//	return 0;
//}

//�ǽ� 01
//�ִ밪
//3���� ������ �޾Ƽ� �ִ밪�� ����ϴ� �Լ�

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
//} //���� ������

//���� �Ѱ�
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
//}//�Լ��� ���鶧���� �Լ����� ������� ���ο� ������ ��������� �Ѵ�
////�Լ��� ()���� �Է¹��� ������ �Է� �����ϸ� �Է°� ���� �ڷ������� ���� �Է������ �Ѵ�
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
//}//�ʱ�ȭ�� �߿��ϴ�
////�Է°��� �� �� �ԷµǸ� �����Ⱚ�� ������ ���������� �ʱ�ȭ���� �ʾҴٴ� ������ ����
//// cin >>a,b,c; �� �� ���� �Է°��̴� cin >> a>>b>>c;�� ���� �Է°��̴�
////���Ͱ��� �Է��ڵ带 �� �� �Է��Ұ�쿡�� ���������� �ʱ�ȭ ���� �ʾҴٴ� ������ ����

//�ǽ� 02
//2���� ������ �޾Ƽ� ������ ���� �����ϰ� ���� ��ü�ϴ� �Լ�
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
//���ο� ������ �ƹ��͵� ���� ������ C�� �Է¹��� A���� �������ְ�
//���� A�� ���� �Է¹��� B�� ����ش�
//�� �� ����� B�� C�� �־��ָ� A��B�� �ٲ��

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

//�ǽ� 03
//� ������ �޾Ƽ� �� �ڸ��� ���� ���ϴ� �Լ�

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

//�ǽ� 04
//�ֻ����� N�� ������ �� ������ �� ���� ���� ����ϴ� ���α׷�
//(�ֻ����� ������ �����ϴٰ� ����, ���� �Լ��� ���)
//N = 1200�� => 1= 200��, 2= 200��, ... 6=200��;

#include <stdlib.h>
#include <time.h>

//rand�Լ��� rand�Լ��� ���������� ���������� srand(time(NULL))�� �����ϰ� �ִ� ���̺귯��

//int Dice(int N)
//{
//	srand(time(NULL));
//	//int Rand = rand();
//	//������ ���� �������ִ� �Լ�
//	//������� 1,7,13,19 �̸� �ֻ��� 1
//	//�ֻ����� ������ ��Ī��Ų��
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

//�ǽ� 05
//���� ����
//���� ���� 1��(X)�� �������� �� �ܸ�, ������ ���� ���ڰ� ������
//����ϴ� ���α׷�
//�ܸ� : ����*������*�Ⱓ
//���� : (����*������)*������
//�Է� = ����, ������, �Ⱓ

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

//�ǽ� 06
//���丮�� ���ϴ� �Լ�
//n!
//7!=>7x6x5x4x3x2x1
//3!=>3x2x1

//int Fack(int n)
//{
//	int k = 1; // 0�� �ƹ��� ���ص� 0�̱� ������ �ʱⰪ�� 1�� �Ǿ�� �Ѵ�
//
//	for (int i = n; i > 0; i--)
//	//�Է¹��� ������ 1�� �پ��� ���ϰ� �ͱ� ������
//	//���� i�� �Է¹��� n�� �������ְ� n�� ���Թ��� i�� 0�� �ɶ����� �ٿ��ָ� �ݺ��Ѵ�
//	{
//		k *= i;
//	//�ʱⰪ k���� 1�� ����Ǿ� ���� i�� �Է¹��� ���� ���� ������ ����
//	//k�� ����ǰ� �پ�� i���� k�� �������°� 0�� �ɶ����� �ݺ��Ѵ�
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

//�ǽ� 07
//N@ = N+(N-1)...+1
//N@ = 7+6+5+4+3+2+1
//����Լ� ���

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

//�ǽ� 08
//1,1,2,3,5,8,13,21
//F(N) = F(N-1)+F(N-2)
//����Լ� ����

//int Fibonacci(int N)
//{
//	/*if (N <= 2)
//	{
//		return 1;
//	}
//
//	return Fibonacci(N - 1) + Fibonacci(N - 2);*/
//	//������� �˷��ֽ� �����ϰ� �������̰� �ڵ带 ���� �� �ִ� ��
//	//if���� else�� ������ �� �ִ�
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

//�ǽ� 09
//2���� �迭

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

//�ǽ� 10
//�Ǻ���ġ ���� ����Լ� ������� �ʰ� ����
//���α׷��� ����ð� ���ϱ�

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
//	//���� ��Ű�� ���� �ڵ�
//	//cout<<Fibonacci(N)<<endl;
//	finish = clock();
//	duration = (double)(finish - start) / CLOCKS_PER_SEC;
//	cout << duration << "��" << endl;
//
//	return 0;
//}

//������

// �����͸� �̿��� A,B���� �����϶�

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

//�ǽ�10
//�迭�� �ּҰ� ���ϱ�

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

//�ǽ� 11
//���ڿ��� �������� ��ȯ�ϴ� �Լ� ����

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

//�ǽ� 12 - ������ ����
//�Լ� ȣ�� ������ ü���� �⵵��
//������-���� = ü��, �׸��� DodgeRate�� ������ ȸ��


void TakeDamage(float *Health, float *Damage, float *Armor, float *DodgeRate)
{
	
	srand(time(NULL)); //�ѹ��� ȣ��
	int Rand = rand();//������ ū �� ��ȯ
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