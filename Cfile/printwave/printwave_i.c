#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
 FILE *fp, *data;               //データ用
 short wav[110160];             //読み込んだ音声ファイルのデータ格納
 short head[22];                //ヘッダ格納用
 int i = 0, size = 0, last = 110160; //カウンター用
 fp = fopen("い.wav", "r");   //音声データの読み込み
 data = fopen("い.raw", "w"); //データファイル

 if (fp == NULL)
 {
  printf("Not File");
  exit(EXIT_FAILURE);
 }
 else
  //読み込みおよびデータ数の取得
  fread(head, sizeof(short), 22, fp); //ヘッダー取得
 //ここからプログラム書く
 //size = fread(&wav[i], sizeof(short), 1, fp); //1つのデータの読み込み
 //printf("%d\n", size);
 for (i = 0; i < last; i++)
 {
  size = fread(&wav[i], sizeof(short), 1, fp); //1つのデータの読み込み
  //printf("%d\n", size);
  printf("%d\n", wav[i]);
 }
 //データの個数がlastになるように
 //ここまで

 printf("Read_wav end \n");

 //書き出し
 for (i = 0; i < last; i++)
  {
   fprintf(data, "%6d\t%6d\n", i, wav[i]);
 }
 printf("Write_wav end\n");
 fclose(fp);
 fclose(data);

 return 0;
}