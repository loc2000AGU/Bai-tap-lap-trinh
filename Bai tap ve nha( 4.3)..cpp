#include<stdio.h>
#define MAX 100
void NhapMang(int a[], int SoPTMangA);
void XuatMang(int a[], int SoPTMangA);
void CopySoLe(int a[], int SoPTMangA, int b[], int *SoPTMangB);

int	main()
{
	int a[MAX], SoPTMangA;
	int b[MAX], SoPTMangB;
	printf("Nhap so phan tu cho mang:");	scanf("%d",&SoPTMangA);
	NhapMang(a,SoPTMangA);
	printf("Mang vua nhap la:");	XuatMang(a,SoPTMangA);
	CopySoLe(a,SoPTMangA,b,&SoPTMangB);
	printf("\nCac so le duoc sao chep tu mang A:");	XuatMang(b,SoPTMangB);
	return	0;
}

void NhapMang(int a[], int SoPTMangA)
{
	for(int i=0;i<SoPTMangA;i++)
	{
		printf("Nhap a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
}

void XuatMang(int a[], int SoPTMangA)
{
	for(int i=0;i<SoPTMangA;i++)
		printf("%d\t",a[i]);
}

void CopySoLe(int a[],int SoPTMangA,int b[], int SoPTMangB)
{
	for(int i=0; i<SoPTMangA; i++)
		if(a[i] % 2 != 0)
		{
			b[SoPTMangB] = a[i];
			SoPTMangB = SoPTMangB+1;
		}
}
