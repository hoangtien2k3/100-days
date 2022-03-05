
/*
    Đề bài: Cho xâu s được nhập từ bàn phím, bạn hãy viết hàm chuyển các ký tự in thường 
            trong xâu s thành in hoa và hiển thị xâu s ra màn hình.

*/

// sử dụng tham chiếu
#include <iostream>

using namespace std;

void toUpper(string &s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] -= 32;
		}
	}
}

int main() {
	string s;
	cin >> s;
	toUpper(s);
	cout << s;
	return 0;
}



// sự dụng tham trị
#include <iostream>

using namespace std;

void toUpper(string *s) {
	for (int i = 0; i < (*s).size(); i++) {
		if ((*s)[i] >= 'a' && (*s)[i] <= 'z') {
			(*s)[i] -= 32;
		}
	}
}

int main() {
	string s;
	cin >> s;
	toUpper(&s);
	cout << s;
	return 0;
}