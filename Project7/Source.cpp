#include"Students.h"
#include "Teacher.h"

int main() {
	int num;
	cout << "Enter num: ";
	cin >> num;

	switch (num) {

		//test student
	case 1: {
		Student *s;
		int n;

		ifstream in_file("students.txt");
		in_file >> n;
		/*cout << n<<endl;*/
		s = new Student[n];
		for (int i = 0;i < n;i++) {
			in_file >> s[i];
		}

		printStudents(s, n);

		cout << ("man" == s[0]) << endl;
		cout << ("man" != s[0]) << endl;

		cout << (10 > s[0]) << endl;

		cout << (s[0].operator<(s[1])) << endl;
	}break;

		//test teacher
	case 2: {
		teacher *ts;
		int n;
		int i = 0;
		fstream in_file("Teacher.txt");
		in_file >> n;
		ts = new teacher[n];
		while (!in_file.eof()) {
			in_file >> ts[i++];
		}
		print(ts, n);
	}break;

		//test Exam
	case 3: {
		teacher *ts;
		Student *ss;
		int sn,tn;
		int i = 0;
		fstream in_file("Teacher.txt");
		ofstream out_file("Exams.txt");
		in_file >> tn;
		ts = new teacher[tn];
		while (!in_file.eof()) {
			in_file >> ts[i++];
		}
		in_file.close();

		in_file.open("students.txt");
		in_file >>sn;
		i = 0;
		ss = new Student[sn];
		while (!in_file.eof()) {
			in_file >> ss[i++];
		}

		cout << "Teachers:" << endl;
		print(ts, tn);
		cout << "\n Students:" << endl;
		printStudents(ss, sn);
		
		int en = sn*tn;
		Exam *es;
		es = new Exam[en];
		string subject;
		int k = 0;
		double grade;
		for (int i = 0;i < tn;i++) {
			cout << "Enter subject for current teacher:" << endl;
			cin >>subject;
			
			for (int j = 0;j < sn;j++) {
				cout << "Enter grade for current student" << endl;
				cin >> grade;
				/*Exam e(subject, ss[j].getSname(), ts[i].getSname(), grade); //реализация по конструктору
				es[k++] = e;*/
				es[k++].create_exam(subject, ss[j], ts[i],grade); //реализация по методу
			}}

		cout << "Exam list:" << endl;
		printExam(es, en);

		int choice;
		while (true) {
			cout << "Choose a task: " << endl;
			cout << "1- print girls:" << endl;
			cout << "2- print boys:" << endl;

			cout << "0-exit" << endl;
			cin >> choice;
			switch (choice)
			{
			case 1: {
				for (int (i=0;i<sn;i++))

			}	break;
			}
		}
		delete[]ts;
		delete[]ss;


	}break;
	}
	system("pause");
	return 0;
}
