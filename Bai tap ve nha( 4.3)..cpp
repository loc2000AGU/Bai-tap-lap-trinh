#include<stdio.h>
#define MAX 100
void NhapMang(int a[], int nA);
void XuatMang(int a[], int nA);
void CopySoLe(int a[], int nA, int b[], int *nB);
void CopySoAm(int a[],int nA,int b1[], int *nB1);

int	main()
{
	int a[MAX], nA;
	int b[MAX], nB=0;
	int b1[MAX], nB1=0;
	int b2[MAX],nB2;
	printf("Nhap so phan tu cho mang:");	scanf("%d",&nA);
	NhapMang(a,nA);
	printf("Mang vua nhap la:");	XuatMang(a,nA);
	CopySoLe(a,nA,b,&nB);
	printf("\nCac so le duoc sao chep tu mang A:");	XuatMang(b,nB);
	CopySoAm(a,nA,b1,&nB1);
	printf("\nCac so le duoc sao chep tu mang A cho truoc:");	XuatMang(b1,nB1);
	
	printf("\nSo hoan hao duoc sao chep tu mang A cho truoc:"); XuatMang(b2,nB2);
	return	0;
}

void NhapMang(int a[], int nA)
{
	for(int i=0;i<nA;i++)
	{
		printf("Nhap a[%d]:",i+1);
		scanf("%d",&a[i]);
	}
}

void XuatMang(int a[], int nA)
{
	for(int i=0;i<nA;i++)
		printf("%d\t",a[i]);
}

void CopySoLe(int a[],int nA,int b[], int *nB)
{
	for(int i=0; i<nA; i++)
		if(a[i]%2!=0)
		{
			b[*nB]=a[i];
			*nB=*nB+1;
		}		
}

void CopySoAm(int a[],int nA,int b1[], int *nB1)
{
	for(int i=0; i<nA; i++)
		if(a[i]<0)
		{
			b1[*nB1]=a[i];
				*nB1=*nB1+1;
		}
}
