int lonelyinteger(int a_count, int* a) {
    int i , j, unico, count;
    
    unico = 0;
    i = 0;
    while (i < a_count) {
        count = 0;
        j = 0;
        while (j < a_count) {
            if (a[i] == a[j] && i != j)
            {
                count++;
            }
           
        j++;
        }
         if (count == 0) 
            {
                unico = a[i];
                break;
            }
    i++;
    }        
return unico;
}