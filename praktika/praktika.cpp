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
	