#include  <graphics.h> 	// ���� EasyX ͼ�ο�
#include  <Windows.h>

int main(void)
{
	initgraph(600, 340);	// ��ʼ��ͼ�ν���, ������СΪ640x480

	loadimage(NULL, ("bg.jpg"));

	settextcolor(RGB(255, 255, 0));      //����������ɫ
	settextstyle(30, 0, "΢���ź�");

	rectangle(300, 40, 550, 80);     //(���Ͻ�x,���Ͻ�y, ���½�x�����½�y
	outtextxy(310, 45, "1-��վ404����"); //��ָ��λ������ı�

	rectangle(300, 100, 550, 140);
	outtextxy(310, 105, "2-��վ�۸Ĺ���"); //��ָ��λ������ı�

	rectangle(300, 160, 550, 200);
	outtextxy(310, 165, "3-��վ�����޸�"); //��ָ��λ������ı�

	rectangle(300, 220, 550, 260);
	outtextxy(310, 225, "4-�鿴������¼"); //��ָ��λ������ı�

	rectangle(300, 280, 550, 320);
	outtextxy(310, 285, "5-�˳�"); //��ָ��λ������ı�

	system("pause");
	closegraph();			   // �ر�ͼ�ν���
}