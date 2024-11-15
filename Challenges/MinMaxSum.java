import java.io.*;
import java.util.*;
import java.util.stream.*;
import static java.util.stream.Collectors.toList;

class Result {


    public static void miniMaxSum(List<Integer> arr) {
        long sum;
        int i;
        long sumMax;
        long sumMin;
        
        
        sum = 0;
        i = 0;
        while(i < arr.size())
        {
            sum = sum + arr.get(i);
            i++;
        }
        sumMin = sum - arr.get(0);
        sumMax = sum - arr.get(0);
        
        i = 0;
        while(i < arr.size())
        {
            long soma;
            
            soma = sum - arr.get(i);
            
            if(soma > sumMax)
            {
                sumMax = soma;
            } 
            if( soma < sumMin)
            {
                sumMin = soma;
            }
            i++;
        }
    System.out.print(sumMin + " " + sumMax);

    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        List<Integer> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());

        Result.miniMaxSum(arr);

        bufferedReader.close();
    }
}