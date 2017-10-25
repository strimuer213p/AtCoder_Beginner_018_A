/*
問題文
太郎君と次郎君と三郎君の 3 人の人が豆まきで対戦をした。得点が高いほうが上の順位である。それぞれの得点が与えられるので、それぞれの順位を答えよ。
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