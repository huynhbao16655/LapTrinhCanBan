#include<stdio.h>
int TinhCV(int R )
{
	int Kqcv = 2*3.14*R;
	return Kqcv;
}

int main()
{
	int R;
	printf("nhap vao ban kinh: ");
	scanf("%d",&R);
	int CV=TinhCV(R);
	printf(" Ket qua chu vi hinh tron la: %d",CV);
	return 0;
}
