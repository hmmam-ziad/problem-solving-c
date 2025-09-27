#include <unistd.h>
#include <stdio.h> 

double avg_arr(int arr[], int len);

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int len = sizeof(arr) / sizeof(arr[0]);
	double avg = avg_arr(arr, len);
	char buffer[50];
	int strlen = sprintf(buffer, "%lf\n", avg);
	write(1, buffer, strlen);
}

double avg_arr(int arr[], int len)
{
	int sum = 0;
	int i = 0;
	double avg;
	while (i < len)
	{
		sum = sum + arr[i];
		i++;
	}
	avg = (double)sum / len;
	return avg;
}
