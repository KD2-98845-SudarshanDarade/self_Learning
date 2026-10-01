package com.sunbeam;


import java.util.Arrays;
import java.util.Comparator;

class Student {
    private int roll;
    private String name;
    private String city;
    private double marks;

    public Student(int roll, String name, String city, double marks) {
        this.roll = roll;
        this.name = name;
        this.city = city;
        this.marks = marks;
    }

    public String getName() {
        return name;
    }

    public String getCity() {
        return city;
    }

    public double getMarks() {
        return marks;
    }

    public String toString() {
        return roll + " " + name + " " + city + " " + marks;
    }
}

public class StudentSort {
    public static void main(String[] args) {

        Student[] arr = {
            new Student(1, "Rahul", "Pune", 85),
            new Student(2, "Amit", "Mumbai", 90),
            new Student(3, "Sneha", "Pune", 95),
            new Student(4, "Neha", "Mumbai", 88),
            new Student(5, "Akash", "Pune", 95),
            new Student(6, "Kiran", "Mumbai", 90)
        };

        Arrays.sort(arr,
            Comparator.comparing(Student::getCity).reversed()
            .thenComparing(
                Comparator.comparingDouble(Student::getMarks).reversed()
            )
            .thenComparing(Student::getName)
        );

        for (Student s : arr) {
            System.out.println(s);
        }
    }
}

