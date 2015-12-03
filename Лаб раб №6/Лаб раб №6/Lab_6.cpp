/* ласс ? ќдномерный массив.
ƒополнительно перегрузить следующие операции : *?  умножение массивов;
[] ? доступ по индексу;
= = ? проверка на равенство;
<= ? сравнение. */

#include "masiv.h " 
#include<iostream>
using namespace std;

int main()
{
	Massiv m, m1, m2, m3;
	int q, w, M, a;
	do {
		cout << "1-Massiv 1\n";
		cout << "2-Massiv 2\n";
		cout << "3-Massiv 1 * Massiv 2\n";
		cout << "4-Massiv 1 <= Massiv 2\n";
		cin >> q;
		switch (q)
		{
		case 1:
		{
				  cout << "1-Sozdat masiv\n";
				  cout << "2-Dobavit znachenie\n";
				  cout << "3-Print\n";
				  cout << "4-Delete (index)\n";
				  cin >> w;
				  switch (w) {
				  case 1:
				  {
							cout << "M=\t";
							cin >> M;
							for (int i(0); i < M; i++)
							{
								cout << "=\t";
								cin >> a;
								m1.push(a);
							}
				  }
					  break;

				  case 2:
				  {
							cout << "=\t";
							cin >> a;
							m1.push(a);
				  }
					  break;

				  case 3: m1.show(); break;
				  case 4:
				  {
							cout << "index=\t";
							cin >> a;
							m1.del(a);
				  }
					  break;
				  }
		}
			break;
		case 2:
		{
				  std::cout << "1-Sozdat masiv\n";
				  std::cout << "2-Dobavit znachenie\n";
				  std::cout << "3-Print\n";
				  std::cout << "4-Delete (index)\n";
				  std::cin >> w;
				  switch (w)
				  {
				  case 1:
				  {
							cout << "M=\t";
							std::cin >> M;
							for (int i(0); i < M; i++)
							{
								cout << "=\t";
								cin >> a;
								m2.push(a);
							}
				  }
					  break;

				  case 2:
				  {
							cout << "=\t";
							cin >> a;
							m2.push(a);
				  }
					  break;
				  case 3: m2.show(); break;
				  case 4:
				  {
							cout << "index=\t";
							cin >> a;
							m2.del(a);
				  }
					  break;
				  }
		}
			break;
		case 3: {
					m = m1 * m2;
					m.show();
		}break;
		case 4: {
					if (m1 <= m2)
						cout << "true\n";
					else
						cout << "false\n";
		}
			break;
		}
		
	} while (q != 0);
	
	cout << "(int)M1=" << (int)m1 << endl;
	cout << "(int)M2=" << (int)m2 << endl;

	return 0;
}
