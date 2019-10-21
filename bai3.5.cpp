#include<stdio.h>
#include<math.h>
int TinhTongBP(int n)
{
	for(int i=1;i<=n;i++)
		i=(i*i)+1;
	return 1;	
}
int main()
{
	int n;
	printf("nhap mot so nguyen: ");
	scanf("%d",&n);
	int TBP= TinhTongBP(n);
	printf("%d \n",TBP);
	
	return 0;
}
