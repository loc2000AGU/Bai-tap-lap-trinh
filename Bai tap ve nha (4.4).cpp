
#include<stdio.h>
#define MAX 100
void NhapMangHaiChieu(int a[MAX][MAX],int Dong,int Cot);
void XuatMangHaiChieu(int a[MAX][MAX],int Dong,int Cot);
void Tong(int a[MAX][MAX],int Dong,int Cot);
void TongGTDong(int a[MAX][MAX],int Dong,int Cot);
void TongGTCot(int a[MAX][MAX],int Dong,int Cot);
void InSoAm(int a[MAX][MAX],int Dong,int Cot);
int amMax(int a[MAX][MAX],int Dong,int Cot);

int main()
{
	int a[MAX][MAX],Dong,Cot, tinhTong, tongDong,amMax1;
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
	InSoAm(a,Dong,Cot);
	amMax1=amMax(a,Dong,Cot);
	printf("\nGT am lon nhat cua mang la %d",amMax1);
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

void InSoAm(int a[MAX][MAX],int Dong,int Cot)
{
	printf("\nCac phan tu am trong mang:");
	for(int i=0;i<Dong;i++)
		for(int j=0;j<Cot;j++)
			if(a[i][j]<0)
				printf("%d\t",a[i][j]);
}

int soAm(int a[MAX][MAX],int Dong,int Cot)
{
	for(int i=0;i<Dong;i++)
	{
		for(int j=0;j<Cot;j++)
		{
			if(a[i][j]<0)
				return	a[i][j];
		}
	}
	return	0;
}
int amMax(int a[MAX][MAX],int Dong,int Cot)
{
	int max=soAm(a,Dong,Cot);
	if(max==0)
		return	0;
	else
	{
		for(int i=0;i<Dong;i++)
		{
			for(int j=0;j<Cot;j++)
			{
				if(((a[i][j])<0)&&(a[i][j]>max))
				{
					max=a[i][j];
				}
			}
		}			
	}
	return max;	
}
