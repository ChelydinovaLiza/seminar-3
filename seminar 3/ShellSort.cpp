template<typename T> void ShellSort(int numb_of_elements, T* array) {

	int time;
	T temp;

	if (numb_of_elements % 2 == 0) time = numb_of_elements / 2;
	else time = (numb_of_elements + 1) / 2;


	for (time; time > 0;) {
		for (int key = 0; key + time < numb_of_elements; key++) {
			if (array[key] > array[key + time]) {
				temp = array[key + time];
				array[key + time] = array[key];
				array[key] = temp;
			}
		}
		if (time == 1) break;
		else if (time % 2 == 0) time /= 2;
		else time = (time + 1) / 2;
	}
}