/*
��蕶
���Y�N�Ǝ��Y�N�ƎO�Y�N�� 3 �l�̐l�����܂��őΐ�������B���_�������ق�����̏��ʂł���B���ꂼ��̓��_���^������̂ŁA���ꂼ��̏��ʂ𓚂���B
*/

#include<iostream>

int main() {
	int a, b, c,d,e,f;
	std::cin >> a >> b >> c;
	a > b&&a > c ? d = 1 : ((a<b&&a>c) || (a > b&&a < c) ? d = 2 : d = 3);
	b > c&&b > a ? e = 1 : ((b<a&&b>c) || (b > a&&b < c) ? e = 2 : e = 3);
	c > b&&c > a ? f = 1 : ((c<a&&c>b) || (c > a&&c < b) ? f = 2 : f = 3);
	std::cout << d <<"\n"<< e <<"\n"<< f << std::endl;

	return 0;
}