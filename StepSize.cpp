#include <iostream>
#include <time.h>

using namespace std;

double elapsed_time( clock_t start, clock_t finish){
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main() {
	clock_t start, finish;
	
	int arraySize = 1;
	int stepSize = 10000;
	int* a = new int [arraySize];
	
	start = clock();
		for(int i = 0; i < stepSize; i += 1){
			a[(i * stepSize) % arraySize]++ ;
		}
		finish = clock();
		double time_taken = elapsed_time(start,finish);
	
		cout << "Time taken for arraySize: " << arraySize << " is: " << time_taken << endl;

	arraySize *= 10;

	int* b = new int [arraySize];
	
	start = clock();
		for(int i = 0; i < stepSize; i += 1){
			b[(i * stepSize) % arraySize]++ ;
		}
		finish = clock();
		double time_taken1 = elapsed_time(start,finish);
	
		cout << "Time taken for arraySize: " << arraySize << " is: " << time_taken1 << endl;

	arraySize *= 10;

	int* c = new int [arraySize];
	
	start = clock();
		for(int i = 0; i < stepSize; i += 1){
			c[(i * stepSize) % arraySize]++ ;
		}
		finish = clock();
		double time_taken2 = elapsed_time(start,finish);
	
		cout << "Time taken for arraySize: " << arraySize << " is: " << time_taken2 << endl;

	arraySize *= 10;

	int* d = new int [arraySize];
	
	start = clock();
		for(int i = 0; i < stepSize; i += 1){
			d[(i * stepSize) % arraySize]++ ;
		}
		finish = clock();
		double time_taken3 = elapsed_time(start,finish);
	
		cout << "Time taken for arraySize: " << arraySize << " is: " << time_taken3 << endl;

	arraySize *= 10;

	int* e = new int [arraySize];
	
	start = clock();
		for(int i = 0; i < stepSize; i += 1){
			e[(i * stepSize) % arraySize]++ ;
		}
		finish = clock();
		double time_taken4 = elapsed_time(start,finish);
	
		cout << "Time taken for arraySize: " << arraySize << " is: " << time_taken4 << endl;

	arraySize *= 10;

	int* f = new int [arraySize];
	
	start = clock();
		for(int i = 0; i < stepSize; i += 1){
			f[(i * stepSize) % arraySize]++ ;
		}
		finish = clock();
		double time_taken5 = elapsed_time(start,finish);
	
		cout << "Time taken for arraySize: " << arraySize << " is: " << time_taken5 << endl;

	arraySize *= 10;

	int* g = new int [arraySize];
	
	start = clock();
		for(int i = 0; i < stepSize; i += 1){
			g[(i * stepSize) % arraySize]++ ;
		}
		finish = clock();
		double time_taken6 = elapsed_time(start,finish);
	
		cout << "Time taken for arraySize: " << arraySize << " is: " << time_taken6 << endl;

	arraySize *= 10;

	int* h = new int [arraySize];
	
	start = clock();
		for(int i = 0; i < stepSize; i += 1){
			h[(i * stepSize) % arraySize]++ ;
		}
		finish = clock();
		double time_taken7 = elapsed_time(start,finish);
	
		cout << "Time taken for arraySize: " << arraySize << " is: " << time_taken7 << endl;

	arraySize *= 10;

	int* j = new int [arraySize];
	
	start = clock();
		for(int i = 0; i < stepSize; i += 1){
			j[(i * stepSize) % arraySize]++ ;
		}
		finish = clock();
		double time_taken8 = elapsed_time(start,finish);
	
		cout << "Time taken for arraySize: " << arraySize << " is: " << time_taken8 << endl;

	arraySize *= 10;

	int* k = new int [arraySize];
	
	start = clock();
		for(int i = 0; i < stepSize; i += 1){
			k[(i * stepSize) % arraySize]++ ;
		}
		finish = clock();
		double time_taken9 = elapsed_time(start,finish);
	
		cout << "Time taken for arraySize: " << arraySize << " is: " << time_taken9 << endl;

}
