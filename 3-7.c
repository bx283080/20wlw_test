/*3-7.c �������ڲ��Դ����Ż��ĸ����������*/
#include <stdio.h> /*�ļ�Ԥ����������׼���������*/
int main(void) /*C ���������������ʼ���*/
{
double counter; /*����˫����ʵ�ͱ���*/
double result;
double temp;
for (counter = 0; counter < 4000.0 * 4000.0 * 4000.0 / 20.0 + 2030;counter
+= (5 - 3 +2 + 1 ) / 4) /*ѭ��8 �ڶ�Σ�ÿ�ζ��мӼ��˳�����*/
{
temp=counter/1239;
result=counter;
}
printf("�������ǣ�%lf\n", result); /*���������*/
}