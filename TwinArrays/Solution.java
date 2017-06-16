import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int twinArrays(int[] ar1, int[] ar2){
        // Complete this function
        int minimumSum = 0;
        // Choose exactly one number from ar1 and
        // exactly one number from ar2 such that
        // the index of the two chosen numbers is not the same
        // and the sum of the 2 chosen values is minimum

        // Traverse through both arrays
        // Check the for the min for both arrays
        // Add those mins and store into minimumSum
        int min1 = ar1[0];
        int min2 = ar2[0];

        for (int i = 0; i < ar1.length; i++) {
            if (min1 > ar1[i]) {
                min1 = ar1[i];
            }
        }

        for (int i = 0; i < ar2.length; i++) {
            if (min2 > ar2[i]) {
                min2 = ar2[i];
            }
        }

        minimumSum = min1 + min2;

        return minimumSum;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar1 = new int[n];
        for(int ar1_i = 0; ar1_i < n; ar1_i++){
            ar1[ar1_i] = in.nextInt();
        }
        int[] ar2 = new int[n];
        for(int ar2_i = 0; ar2_i < n; ar2_i++){
            ar2[ar2_i] = in.nextInt();
        }
        int result = twinArrays(ar1, ar2);
        System.out.println(result);
    }
}
