package com.sunbeam;

abstract class Shape {
    abstract double area();
}

abstract class TwoDShape extends Shape {
}

abstract class ThreeDShape extends Shape {
    abstract double volume();
}

class Circle extends TwoDShape {
    double radius;

    Circle(double radius) {
        this.radius = radius;
    }

    double area() {
        return 3.14 * radius * radius;
    }
}

class Rectangle extends TwoDShape {
    double length, width;

    Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    double area() {
        return length * width;
    }
}

class Sphere extends ThreeDShape {
    double radius;

    Sphere(double radius) {
        this.radius = radius;
    }

    double area() {
        return 4 * 3.14 * radius * radius;
    }

    double volume() {
        return (4.0 / 3) * 3.14 * radius * radius * radius;
    }
}

class Cube extends ThreeDShape {
    double side;

    Cube(double side) {
        this.side = side;
    }

    double area() {
        return 6 * side * side;
    }

    double volume() {
        return side * side * side;
    }
}

public class Program {
    public static void main(String[] args) {
        Circle c = new Circle(5);
        Rectangle r = new Rectangle(4, 6);
        Sphere s = new Sphere(3);
        Cube cb = new Cube(4);

        System.out.println("Circle area: " + c.area());
        System.out.println("Rectangle area: " + r.area());
        System.out.println("Sphere surface area: " + s.area());
        System.out.println("Sphere volume: " + s.volume());
        System.out.println("Cube surface area: " + cb.area());
        System.out.println("Cube volume: " + cb.volume());
    }
}