package co.sunbeam;

class Student {
    int roll;
    String name;
    Address address;

    // Default constructor
    Student() {
        roll = 0;
        name = "Unknown";
        address = new Address("Unknown");
    }

    // Parameterized constructor
    Student(int roll, String name, Address address) {
        this.roll = roll;
        this.name = name;
        this.address = address;
    }

    // Shallow copy constructor
    Student(Student s) {
        this.roll = s.roll;
        this.name = s.name;
        this.address = s.address;
    }

    // Deep copy method
    Student deepCopy() {
        Address newAddress = new Address(address.city);
        return new Student(roll, name, newAddress);
    }

    void display() {
        System.out.println(roll + " " + name + " " + address.city);
    }
}

class Address {
    String city;

    Address(String city) {
        this.city = city;
    }
}

public class Program {
    public static void main(String[] args) {
        Address a = new Address("Pune");

        Student s1 = new Student(1, "Rahul", a);

        // Shallow copy
        Student s2 = new Student(s1);

        // Deep copy
        Student s3 = s1.deepCopy();

        s2.address.city = "Mumbai";

        System.out.println("Original:");
        s1.display();

        System.out.println("Shallow copy:");
        s2.display();

        System.out.println("Deep copy:");
        s3.display();
    }
}