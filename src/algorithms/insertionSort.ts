type Options = {
	order?: "asc" | "desc";
};

export default function insertionSort(array: number[], options: Options = { order: "asc" }): number[] {
	const isAsc = options.order === "asc";

	for (let index = 0; index < array.length; index++) {
		const currentValue = array[index];
		let prevIndex = index - 1;

		while (prevIndex >= 0 && isAsc ? array[prevIndex] > currentValue : array[prevIndex] < currentValue) {
			array[prevIndex + 1] = array[prevIndex];
			prevIndex--;
		}

		array[prevIndex + 1] = currentValue;
	}

	return array;
}