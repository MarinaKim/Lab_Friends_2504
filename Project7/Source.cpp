#include"Students.h"

int main() {
	Student *s;
	int n;

	ifstream in_file("in.txt");
	in_file >> n;
	/*cout << n<<endl;*/
		s = new Student[n];
		for (int i = 0;i < n;i++) {
			in_file >> s[i];}

		printStudents(s, n);

		cout << ("man" == s[0]) <<endl;
		cout << ("man" != s[0]) << endl;

		cout << (10 > s[0]) << endl;

		cout << (s[0].operator<(s[1]))<< endl;
	system("pause");
	return 0;
}
