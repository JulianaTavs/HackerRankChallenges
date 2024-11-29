int findMedian(int arr_count, int* arr){
    int i, j, median;

    i = 0;
    while(i < arr_count - 1){
        j = 0;
        while(j < arr_count - 1 - i){
            if(arr[j] > arr[j + 1]){
                int aux;

            aux = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = aux;
            }
        j++;
        }
    i++;
    }
    median = arr[((arr_count + 1) / 2) - 1];
    return median;
}