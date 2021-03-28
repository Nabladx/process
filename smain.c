#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a[] = { 1.0, 2.0, 3.0, 4.0 };
	float ar[] = { 1.0, 4.0, 9.0, 16.0 };
	float arr[4];
	float m = 0.0, d = 0.0, m_in_2 = 0.0, m_2_in = 0.0;
	for (int i = 0; i < 4; i++)
	{
		scanf("%f", &arr[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		m = m + a[i] * arr[i];
	}
	m_2_in = m * m;
	for (int i = 0; i < 4; i++)
	{
		m_in_2 = m_in_2 + ar[i] * arr[i];
	}
	d = m_in_2 - m_2_in;
	printf("%f\n", m);
	printf("%f\n", d);
	return 0;
}
