template <typename T> void QuickSort(T* array, int left, int right) {
	if (left >= right) return;

	T temp;
	T number = array[(left + right) / 2];
	int begin = left;
	int end = right;

	while (begin <= end) {

		while (array[begin] < number) begin++;
		while (array[end] > number) end--;

		if (begin <= end) {
			temp = array[begin];
			array[begin] = array[end];
			array[end] = temp;
			begin++;
			end--;
		}
	}
	QuickSort(array, left, end);
	QuickSort(array, begin, right);

}