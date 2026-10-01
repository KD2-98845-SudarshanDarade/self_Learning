package com.sunbeam;



import java.util.Arrays;
import java.util.List;

public class Program {
    public static void main(String[] args) {
        List<Integer> list = Arrays.asList(10, 20, 30, 40, 50);

        int sum = list.stream()
                      .mapToInt(n -> n)
                      .sum();

        System.out.println("Sum = " + sum);
    }
}
