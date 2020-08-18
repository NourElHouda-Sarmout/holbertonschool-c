/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of a
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int low, high, temp;

	for (low = 0, high = n - 1; low < high; low++, high--)
	{
		temp = a[low];
		a[low] = a[high];
		a[high] = temp;
	}
}
