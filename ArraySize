#include <iostream>
#include <time.h>

using namespace std;

double elapsed_time( clock_t start, clock_t finish){
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main() {
	clock_t start, finish;

	int arraySize = 10000000;
  int stepSize = 1; 
  int* a = new int [ arraySize ];
	start = clock();
  for(int i = 0; i < arraySize; i += stepSize){
		a[i] *= 3;
	}
	finish = clock();
	double time_taken = elapsed_time(start,finish);
	delete[] a;

	cout << "Time taken for stepSize: " << stepSize << " is: " << time_taken << endl;

	for(int j = 0; j < 4; j++){
		int* a = new int [ arraySize ];
		start = clock();
  	for(int i = 0; i < arraySize; i += stepSize){
			a[i] *= 3;
		}
		finish = clock();
		double time_taken1 = elapsed_time(start,finish);
	
		cout << "Time taken for stepSize: " << stepSize << " is: " << time_taken1 << endl;

		delete[] a;
		stepSize += 1;
	}

	stepSize = 5;
	for(int j = 0; j <20; j++){
		int* a = new int [ arraySize ];
		start = clock();
  	for(int i = 0; i < arraySize; i += stepSize){
			a[i] *= 3;
		}
		finish = clock();
		double time_taken1 = elapsed_time(start,finish);
	
		cout << "Time taken for stepSize: " << stepSize << " is: " << time_taken1 << endl;

		delete[] a;
		stepSize += 10;
	}
}
