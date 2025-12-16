#include <stdio.h>
#define RESPONSES_SIZE 20 // define array sizes
#define FREQUENCY_SIZE 11

// function main begins program execution
int main(void)
{
	// initialize frequency counters to 0
	int frequency[FREQUENCY_SIZE] = { 0 }, answer, rating;

	// place the survey responses in the responses array
	int responses[RESPONSES_SIZE] = { 0 };

	for (int i = 0; i < 20; i++) {
		scanf_s("%d",&responses[i]);
	}

	// for each answer, select value of an element of array responses
	// and use that value as an index in array frequency to 
	// determine element to increment
	for (answer = 0; answer < RESPONSES_SIZE; ++answer) {
		++frequency[responses[answer]];
	}

	// display results
	printf("%s%17s\n", "Rating", "Frequency");

	// output the frequencies in a tabular format
	for (rating = 1; rating < FREQUENCY_SIZE; ++rating) {
		printf("%-2d            ", rating);

		for (int j = 1; j <= frequency[rating]; ++j) { // print one bar
			printf("%c", '*');
		}

		puts(""); // end a histogram bar with a newline
	}
}