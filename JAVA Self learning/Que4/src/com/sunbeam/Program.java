package com.sunbeam;

enum Days {
    MONDAY, TUESDAY, WEDNESDAY,
    THURSDAY, FRIDAY, SATURDAY, SUNDAY;

    boolean isWeekend() {
        return this == SATURDAY || this == SUNDAY;
    }

    void Weekday() {
        if (isWeekend()) {
            System.out.println(this + " is a weekend");
        } else {
            System.out.println(this + " is a weekday");
        }
    }
}

public class Program {
    public static void main(String[] args) {
        for (Days d : Days.values()) {
            d.Weekday();
        }
    }
}