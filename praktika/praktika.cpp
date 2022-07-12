#include <stdio.h>
#include <math.h>
#include <iostream>
#include <time.h>

#define SIZE 10
using namespace std;

void main() {

	int Ostv = 0, e = 0, f = 0, OneJob = 0, TwoJob = 0, d = 0, qo = 0, Job = 0, tem = 0, Ryad[20][20];
	int kaya = 0, saya = 0, saya2 = 0, saya3 = 0, temp = 1;
	int schet = 0, sum = 0, bi, ci, q, SizeSchet = 0, SizeSchetTwo = 0, u = 0, p = 0, SchetOne = 0, SchetTwo = 0, SchetThree = 0;
	int v = 0, z = 0, s = 0, c = 0, r, h, b = 0, a, nachal = 0, i, t, j, k, min = 0;
	int RyadSix[20][20], RyadOne[20][20], RyadTwo[20][20], RyadThree[20][20], RyadFour[SIZE * SIZE], RyadFive[SIZE * SIZE];

	srand(time(NULL));

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {

			RyadOne[i][j] = 1 + rand() % 100;

		}
	}
	cout << "FIRST ARRAY" << endl;
	cout << endl;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {

			cout << RyadOne[i][j] << "\t";

		}
		cout << endl;
	}
	cout << endl;
	cout << endl;

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {

			RyadTwo[i][j] = RyadOne[i][j];

		}
	}



	for (i = 0; i < SIZE; i++) {

		min = RyadTwo[i][0];

		for (j = 0; j < SIZE; j++) {

			if (min > RyadOne[i][j]) {
				min = RyadOne[i][j];
			}

		}

		for (k = 0; k < SIZE; k++) {
			RyadTwo[i][k] = RyadTwo[i][k] - min;
		}
	}


	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {

			cout << RyadTwo[i][j] << "\t";

		}
		cout << endl;
	}
	cout << endl;
	cout << endl;

	for (i = 0; i < SIZE; i++) {

		min = RyadTwo[0][i];

		for (j = 0; j < SIZE; j++) {

			if (min > RyadTwo[j][i]) {
				min = RyadTwo[j][i];
			}

		}

		for (k = 0; k < SIZE; k++) {
			RyadTwo[k][i] = RyadTwo[k][i] - min;
		}
	}


	cout << endl;
	cout << endl;

	while (1) {
		min = 0;
		c = 0;
		b = 0;
		s = 0;
		z = 0;
		bi = 0;
		ci = 0;
		d = 0;
		SizeSchet = 0;
		SizeSchetTwo = 0;

		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				RyadThree[i][j] = RyadTwo[i][j];

			}
		}

		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				cout << RyadThree[i][j] << "\t";

			}
			cout << endl;
		}
		cout << endl;
		cout << endl;

		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				RyadSix[i][j] = RyadTwo[i][j];

			}
		}

		for (Ostv = 0; Ostv < SIZE * SIZE; Ostv++) {
			for (kaya = 0; kaya < SIZE; kaya++) {
				for (t = 0; t < SIZE; t++) {
					for (i = 0; i < SIZE; i++) {

						nachal = 0;
						for (j = 0; j < SIZE; j++) {

							if (RyadThree[i][j] == 0) {
								nachal++;
							}

						}
						a = 1;
						if (nachal == 1) {

							for (j = 0; j < SIZE; j++) {

								if (RyadThree[i][j] == 0) {
									Job = 0;
									for (qo = 0; qo < bi; qo++) {
										if (RyadFour[qo] == j) {
											Job++;
										}
									}
									if (Job == 0) {

										RyadFour[bi] = j;
										bi++;

										for (k = 0; k < SIZE; k++) {
											RyadThree[k][j] = -1000;
										}
									}
								}
							}
						}

					}
				}



				for (t = 0; t < SIZE; t++) {
					for (i = 0; i < SIZE; i++) {

						nachal = 0;
						for (j = 0; j < SIZE; j++) {

							if (RyadThree[j][i] == 0) {
								nachal++;
							}

						}
						a = 1;
						if (nachal == 1) {
							for (j = 0; j < SIZE; j++) {
								if (RyadThree[j][i] == 0) {
									Job = 0;
									for (qo = 0; qo < ci; qo++) {
										if (RyadFive[qo] == j)
											Job++;
									}
									if (Job == 0) {

										RyadFive[ci] = j;
										ci++;

										for (k = 0; k < SIZE; k++) {
											RyadThree[j][k] = -1000;
										}
									}
								}
							}
						}

					}

				}
			}

			for (e = 0; e < SIZE; e++) {
				OneJob = 0;
				TwoJob = 0;
				for (f = 0; f < SIZE; f++) {

					if (RyadThree[e][f] == 0)
					{
						OneJob++;
					}

				}
				for (t = 0; t < SIZE; t++) {

					if (RyadThree[t][e] == 0)
					{
						TwoJob++;
					}

				}

				if (OneJob == TwoJob && OneJob > 1) {

					Job = 0;
					for (qo = 0; qo < bi; qo++) {
						if (RyadFour[qo] == e)
							Job++;
					}
					if (Job == 0) {

						for (k = 0; k < SIZE; k++) {
							RyadFour[bi] = e;
							bi++;
							RyadThree[k][e] = -1000;
						}
					}
				}
			}

		}

		c = 0;
		b = 0;

		cout << endl;

		cout << "COVERED COLOUMNS" << endl;
		for (i = 0; i < bi; i++) {
			if (RyadFour[i] > -1) {
				cout << RyadFour[i] << "\t";
				SizeSchet++;
			}
		}
		cout << endl;
		cout << endl;
		cout << "COVERED ROWS" << endl;
		for (i = 0; i < ci; i++) {
			if (RyadFive[i] > -1) {
				cout << RyadFive[i] << "\t";
				SizeSchetTwo++;
			}
		}
		cout << endl;
		cout << endl;


		cout << "UNCOVERED" << endl;
		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {
				if (RyadThree[i][j] > -1)
					cout << RyadThree[i][j] << "\t";
				else
					cout << "-" << "\t";
			}
			cout << endl;
		}

		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				if (RyadThree[i][j] > -1) {
					min = RyadThree[i][j];
					break;
				}
			}
		}


		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				if (RyadThree[i][j] > -1) {
					if (min > RyadThree[i][j])
						min = RyadThree[i][j];
				}
			}

		}
		cout << endl;
		cout << endl;
		if (min != 0)
			cout << "-----> MIN= " << min;
		else
			cout << "-----> MIN= NOT FOUND";
		cout << endl;

		cout << endl;

		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				SchetOne = 0;
				for (k = 0; k < bi; k++) {

					if (RyadFour[k] == j)
						SchetOne++;

				}

				SchetTwo = 0;
				for (z = 0; z < ci; z++) {

					if (RyadFive[z] == i)
						SchetTwo++;

				}

				if (SchetOne == 0 && SchetTwo == 0 && RyadTwo[i][j] != 0) {
					RyadTwo[i][j] = RyadTwo[i][j] - min;
				}
				else if (SchetOne != 0 && SchetTwo != 0) {
					RyadTwo[i][j] = RyadTwo[i][j] + min;
				}

			}

		}


		for (i = 0; i < SIZE; i++) {
			for (j = 0; j < SIZE; j++) {

				cout << RyadTwo[i][j] << "\t";
			}
			cout << endl;
		}
		cout << "---------------------------------------------------------------------------" << endl;
		q = SizeSchet + SizeSchetTwo;
		if (q >= SIZE) {
			break;
		}
	}
	cout << endl;
	cout << endl;

	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {
			Ryad[i][j] = RyadTwo[i][j];
		}
	}
	c = 0;
	b = 0;


	for (t = 0; t < SIZE * SIZE; t++) {
		for (i = 0; i < SIZE; i++) {

			for (j = 0; j < SIZE; j++) {
				saya = 0;
				for (z = 0; z < SIZE; z++) {
					if (RyadTwo[i][z] == 0) {
						saya++;
					}
				}
				if (saya == 1) {
					for (z = 0; z < SIZE; z++) {
						if (RyadTwo[i][z] == 0) {
							sum = sum + RyadOne[i][z];
							cout << "WORKER " << i << "  JOB " << z << " ------> Value is= " << RyadOne[i][z] << endl;

							b++;
							tem = z;
						}
					}
					for (z = 0; z < SIZE; z++) {

						RyadTwo[z][tem] = -100;
						RyadTwo[i][z] = -100;
					}
				}
			}

			for (j = 0; j < SIZE; j++) {
				saya2 = 0;
				for (z = 0; z < SIZE; z++) {
					if (RyadTwo[z][i] == 0) {
						saya2++;
					}
				}
				if (saya2 == 1) {
					for (z = 0; z < SIZE; z++) {
						if (RyadTwo[z][i] == 0) {
							sum = sum + RyadOne[z][i];
							cout << "WORKER " << z << "  JOB " << i << " ------> Value is= " << RyadOne[z][i] << endl;

							c++;
							tem = z;
						}
					}

					for (z = 0; z < SIZE; z++) {

						RyadTwo[tem][z] = -100;
						RyadTwo[z][i] = -100;

					}
				}

			}

			if (t > SIZE) {
				if (saya > 1 && saya2 > 1) {

					for (z = 0; z < SIZE; z++) {
						if (RyadTwo[i][z] == 0) {
							sum = sum + RyadOne[i][z];
							cout << "WORKER " << i << "  J " << z << " ------> Value is= " << RyadOne[i][z] << endl;
							tem = z;
							break;
						}
					}

					for (z = 0; z < SIZE; z++) {

						RyadTwo[i][z] = -100;
						RyadTwo[z][tem] = -100;

					}

				}

			}
		}
	}

	for (i = 0; i < SIZE; i++) {

		for (j = 0; j < SIZE; j++) {

			if (Ryad[i][j] == 0)
				Ryad[i][j] = RyadOne[i][j];

		}
	}

	cout << endl;
	cout << endl;


	cout << "LAST ARRAY" << endl;
	cout << endl;
	for (i = 0; i < SIZE; i++) {
		for (j = 0; j < SIZE; j++) {

			cout << Ryad[i][j] << "\t";

		}
		cout << endl;
	}

	cout << endl;
	cout << endl;

	cout << "-----> SUM= " << sum << endl;
	cout << endl;

	system("pause");
	return 0;
}