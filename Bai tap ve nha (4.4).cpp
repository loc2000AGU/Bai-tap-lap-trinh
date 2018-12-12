
#include<stdio.h>
#define MAX 100
void NhapMangHaiChieu(int a[MAX][MAX],int Dong,int Cot);
void XuatMangHaiChieu(int a[MAX][MAX],int Dong,int Cot);
void Tong(int a[MAX][MAX],int Dong,int Cot);
void TongGTDong(int a[MAX][MAX],int Dong,int Cot);
void TongGTCot(int a[MAX][MAX],int Dong,int Cot);

int main()
{
	int a[MAX][MAX],Dong,Cot, tinhTong, tongDong;
	printf("Nhap so dong: ");
	scanf("%d",&Dong);
	printf("\nNhap so cot: ");
	scanf("%d",&Cot);
	NhapMangHaiChieu(a,Dong,Cot);
	printf("\nMang vua nhap:");
	XuatMangHaiChieu(a,Dong,Cot);
	
	printf("\nGia tri tong cua mang:");	Tong(a,Dong,Cot);
	printf("\nGT tong cua tung dong:");	TongGTDong(a,Dong,Cot);
	printf("\nGia tri tong cua tung cot:"); TongGTCot(a,Dong,Cot);
	return	0;
}

void NhapMangHaiChieu(int a[MAX][MAX],int Dong,int Cot)
{
	for(int i=0;i<Dong;i++)
		for(int j=0;j<Cot;j++)
		{
			printf("Nhap PT cho mang (dong[%d], cot[%d])",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
}

void XuatMangHaiChieu(int a[MAX][MAX],int Dong,int Cot)
{
	for(int i=0;i<Dong;i++)
		{
			printf("\n");	
			for(int j=0;j<Cot;j++)
				printf("%5d",a[i][j]);
		}
}
void Tong(int a[MAX][MAX],int Dong,int Cot)
{
	int GTTong=0;
	for(int i=0;i<Dong;i++)
		for(int j=0;j<Cot;j++)
			GTTong=GTTong+a[i][j];      
			printf("%d",GTTong);
}
void TongGTCot(int a[MAX][MAX],int Dong,int Cot)
{
	
	for(int j=0;j<Cot;j++)
	{
		int Tong=0;
		for(int i=0;i<Dong;i++)
			Tong=Tong+a[i][j];
		printf("\nGia tri tong cua cot %d: %d",j+1, Tong);
	}
}

void TongGTDong(int a[MAX][MAX],int Dong,int Cot)
{
	for(int i=0;i<Dong;i++)
	{
		int Tong=0;
		for(int j=0;j<Cot;j++)
			Tong=Tong+a[i][j];
		printf("\nTong GT dong %d: %d",i+1,Tong);
	}
}


