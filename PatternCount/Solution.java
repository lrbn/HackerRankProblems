import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    static int patternCount(String s){
        // Complete this function
        int count = 0;
        // Find pattern with 1(0+)1
        // e.g. 1001 or 101 or even 1000000000001
        // The condition is that there has to be at least a patter 101
        return -1;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            String s = in.next();
            int result = patternCount(s);
            System.out.println(result);
        }
    }
}
