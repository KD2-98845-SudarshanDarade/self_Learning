package com.sunbeam;


import java.util.stream.IntStream;
import java.util.IntSummaryStatistics;

public class IntStreamDemo {
    public static void main(String[] args) {
        IntStream stream = IntStream.rangeClosed(1, 10);

        System.out.println("Sum = " + stream.sum());

        IntSummaryStatistics stats =
            IntStream.rangeClosed(1, 10).summaryStatistics();

        System.out.println("Count = " + stats.getCount());
        System.out.println("Sum = " + stats.getSum());
        System.out.println("Min = " + stats.getMin());
        System.out.println("Max = " + stats.getMax());
        System.out.println("Average = " + stats.getAverage());
    }
}

