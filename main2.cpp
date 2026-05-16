
#include <iostream>
using  namespace std;
int main()
{
	int mark;
	int sum = 0;
	int highrst_mark, lowes_mark;
	cout << "Enter grades for 5 students : " << endl;
	for (int i = 1; i <= 5; i++)
	{
		cin >> mark;
		cout << "student" << i << ":" << mark << endl;


		if (i == 1) {
			highrst_mark = mark;
			lowes_mark = mark;

		}
		if (mark >= highrst_mark) {
			highrst_mark = mark;
		}
		if (mark <= lowes_mark)
		{
			lowes_mark = mark;
		}
		sum = sum + mark;
	}
	double average = sum / 5.0;
	cout << "Avarege =" << average << endl;
	cout << "the highrst mark :" << highrst_mark << endl;
	cout << "the lowes mark:" << lowes_mark << endl;

	return 0;
}

