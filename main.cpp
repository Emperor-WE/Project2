#include  <graphics.h> 	// 引用 EasyX 图形库
#include  <Windows.h>

int main(void)
{
	initgraph(600, 340);	// 初始化图形界面, 画布大小为640x480

	loadimage(NULL, ("bg.jpg"));

	settextcolor(RGB(255, 255, 0));      //设置字体颜色
	settextstyle(30, 0, "微软雅黑");

	rectangle(300, 40, 550, 80);     //(左上角x,左上角y, 右下角x，右下角y
	outtextxy(310, 45, "1-网站404攻击"); //在指定位置输出文本

	rectangle(300, 100, 550, 140);
	outtextxy(310, 105, "2-网站篡改攻击"); //在指定位置输出文本

	rectangle(300, 160, 550, 200);
	outtextxy(310, 165, "3-网站攻击修复"); //在指定位置输出文本

	rectangle(300, 220, 550, 260);
	outtextxy(310, 225, "4-查看攻击记录"); //在指定位置输出文本

	rectangle(300, 280, 550, 320);
	outtextxy(310, 285, "5-退出"); //在指定位置输出文本

	system("pause");
	closegraph();			   // 关闭图形界面
}