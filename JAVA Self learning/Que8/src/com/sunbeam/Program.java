package com.sunbeam;

import java.util.stream.IntStream;
import java.util.Scanner;

public class Program {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        if (n < 0) {
            System.out.println("Factorial is not defined");
        } else {
            long fact = IntStream.rangeClosed(1, n)
                    .asLongStream()
                    .reduce(1, (a, b) -> a * b);

            System.out.println("Factorial: " + fact);
        }

        sc.close();
    }
}
